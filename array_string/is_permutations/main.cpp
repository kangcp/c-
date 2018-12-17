#include <iostream>
#include <cstring>
#include <hash_map>

using namespace std;
using namespace __gnu_cxx;
// ���������ַ����ж����Ƿ��Ǳ˴˵�����
// Ҳ�ܼ򵥣������ȫ���У�����ֵ��ַ����Լ�����Ӧ������ȵġ�


// ����hashtable��ʱ�临�Ӷ�ΪO(m+n)

// ���Զ�ÿ��string�е��ַ�ת��Ϊascii���룬
// Ȼ����������ж���������������Ƿ���ȣ�����ʱ�临�Ӷ�ΪO(nlogn)

// ���ַ�ת��Ϊascii�����ǰ�charֱ��ǿ������ת��Ϊint�Ϳ�����int('a')=97

bool is_permu(const char *str1, const char *str2)
{
    if (str1 == nullptr || str2 == nullptr) return false;
    if (strlen(str1) != strlen(str2)) return false;
    hash_map <char, int> mymap1;
    hash_map <char, int> mymap2;
    for(int i = 0; i < strlen(str1); i++)
    {
        if (mymap1[str1[i]]) mymap1[str1[i]]++;
        else mymap1[str1[i]] = 1;

        if (mymap2[str2[i]]) mymap2[str2[i]]++;
        else mymap2[str2[i]] = 1;
    }

    if (mymap1 == mymap2) return true;
    return false;
}


int main()
{
    // ���Կ���hash_map��������==�����Կ���ֱ���ж��Ƿ����
//    hash_map<char, int> mymap;
//    mymap['a'] = 1;
//    mymap['b'] = 2;
//    hash_map<char, int> mymap1;
//    mymap1['a'] = 1;
//    mymap1['b'] = 2;
//    mymap1['c'] = 2;
//    if (mymap == mymap1) cout << " true" << endl;
//    else cout << "false" << endl;
    char* str1 = "abcde";
    char* str2 = "baedk";
    bool ret = is_permu(str1, str2);
    cout << ret << endl;
    cout <<int('a') << endl;
    cout <<char(96) << endl;
    return 0;
}
