// 1. Given a string s consisting of words and spaces, return the length of the last word in the string.
//    A word is a maximal
//    substring consisting of non-space characters only.

#include <bits/stdc++.h>
using namespace std;

// Function to calculate the length of last word in a string
int lengthOfLastWord(string s)
{
    int c = 0;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == ' ' && c == 0)
            continue;
        else if (s[i] != ' ')
            c++;
        else
            break;
    }
    return c;
}

int main()
{
    string s;
    getline(cin, s); // String input
    cout << "" << lengthOfLastWord(s);
    return 0;
}