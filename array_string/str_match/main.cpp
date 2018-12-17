#include <iostream>

using namespace std;

// Brute-Force
/*
  暴力搜索，时间复杂度为O（mn）
*/

char* StrStr(char *str, const char *substr)
{
    if (substr == nullptr) return str;

    char* p1 = (char *) str;
    while (*p1 != '\0')
    {
        char* pBegin = p1;
        char* p2 = (char *)substr;
        while (*p1 != '\0' && *p2 != '\0' && *p1 == *p2)
        {
            p1++;
            p2++;
        }
        if (*p2 == '\0')
        {
            return pBegin;
        }
        p1 = pBegin + 1;
    }
    return nullptr;
}


int main()
{
    char* str1 = "abcdefg";
    char* target = "cde";

    char* ret =  StrStr(str1, target);
    if(ret){
        cout << "found string " <<target << " in  " << str1;
        cout << " at position " << ret - str1 <<endl;
    }

    char* str2 = "kg";
    char* ret2 = StrStr(str1, str2);
    if(ret2){
        cout << "found string " <<target << " in  " << str1;
        cout << " at position " << ret - str1 <<endl;
    }else{
        cout << "ret2 is null" << endl;
    }

    delete str1;
    delete target;
    delete ret2;
    return 0;
}
