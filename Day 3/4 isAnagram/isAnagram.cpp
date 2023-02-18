#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.length() != t.length())
        {
            return false;
        }

        int *A = new int[26]{};

        for (int i = 0; i < s.length(); i++)
        {
            int x = s[i] - '0';
            A[x]++;

            int y = t[i] - '0';
            A[y]++;
        }

        for (int i = 0; i < 26; i++)
        {
            if (A[i] != 0)
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    Solution S;
    string s, t;

    cout << "Enter String 1: ";
    getline(cin, s);

    cout << "Enter String 2: ";
    getline(cin, t);

    printf("%d", S.isAnagram(s, t));

    return 0;
}