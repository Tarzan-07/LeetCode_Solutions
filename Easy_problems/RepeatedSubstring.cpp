#include <iostream>
#include <vector>
#include <algorithm>
// #include <cctype>
using namespace std;

class Solution
{
    public:
    string LongestSubstring(vector<string>& strs)
    {
        // for(string l : strs)
        // {
        //     transform(l.begin(), l.end(), l.begin(), ::tolower);
        // }
        string ans = "";
        sort(strs.begin(), strs.end());
        string first = strs[0], last = strs[strs.size()-1];
        for(int i = 0; i < min(first.size(), last.size()); i++)
        {
            if(first[i] != last[i])
                return ans;
            ans += first[i];
        }
        return ans;
    }
};

int main()
{
    Solution s;
    vector<string> q = {"Apple", "Application", "apply"};
    string res = s.LongestSubstring(q);
    cout << res << endl;
    return 0;
}