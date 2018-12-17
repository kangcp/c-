#include <iostream>
#include <cstring>
#include <hash_map>

using namespace std;
using namespace __gnu_cxx;
// 给定两个字符串判断其是否是彼此的排列
// 也很简单，如果是全排列，则出现的字符，以及次数应该是相等的。


// 采用hashtable，时间复杂度为O(m+n)

// 可以对每个string中的字符转换为ascii编码，
// 然后进行排序，判断两个排序的数组是否相等，这样时间复杂度为O(nlogn)

// 把字符转换为ascii，就是把char直接强制类型转换为int就可以了int('a')=97

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
    // 可以看到hash_map是重载了==，所以可以直接判断是否相等
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
