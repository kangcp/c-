#include <iostream>
#include <hash_map>
#include <cstring>

using namespace std;
using namespace __gnu_cxx;

// 采用hash_map，记得要导入__gnu_cxx命名空间
// hash_map和python的dict用法类似
// 时间复杂度为O(n)

bool is_unique(const char * str)
{
    if (str == nullptr) return NULL;
    hash_map<char, int> mymap;
    for(int i = 0; i < strlen(str); i++)
    {
        if(mymap[str[i]])
        {
            return false;
        }
        mymap[str[i]] = 1;
    }
    return true;
}

int main()
{
    char* str = "abcdef";
    char* str2 = "abcdea";
    bool isstr = is_unique(str);
    cout <<"str is unique? " << isstr << endl;
    bool isstr2 = is_unique(str2);
    cout << "str2 is unique? " << isstr2 << endl;

    delete str2;
    delete str;
    return 0;
}
