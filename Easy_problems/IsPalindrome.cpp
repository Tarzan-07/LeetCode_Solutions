#include <iostream>
#include <vector>
using namespace std;

class Solution
{
    public:
    bool isPalindrome(int x)
    {
        if(x < 0 || (x != 0 && x%10 == 0))
            return false;
            
        long long a = x, rev = 0;
        int rem = 0;
        while(a != 0)
        {
            rem = a%10;
            rev = (rev*10)+rem;
            a = a/10;
        }

        return (rev == x);
    }   
};

int main()
{
    Solution s;
    if(s.isPalindrome(20486521561651))
    {
        cout << "Palindrome !" << endl;
    }
    else
    {
        cout << "not palindrome !" << endl;
    }
    return 0;
}