#include <iostream>
#include <vector>
using namespace std;

class Solution
{
    public:
    bool isPalindrome(int x)
    {
        int a = x, rem = 0, rev = 0;
        while(a != 0)
        {
            rem = a%10;
            rev = (rev*10)+rem;
            a = a/10;
        }

        if(rev == x)
            return true;
        return false;
    }   
};

int main()
{
    Solution s;
    if(s.isPalindrome(2048))
    {
        cout << "Palindrome !" << endl;
    }
    else
    {
        cout << "not palindrome !" << endl;
    }
    return 0;
}