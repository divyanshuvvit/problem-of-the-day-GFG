#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isRotated(string str1, string str2)
    {
int n = str1.length();

        
        if (n != str2.length() || n < 2)
        {
            return false;
        }

        
        string clockwise_rotated = str1.substr(2) + str1.substr(0, 2);

        string anticlockwise_rotated = str1.substr(n - 2) + str1.substr(0, n - 2);

        return (clockwise_rotated == str2 || anticlockwise_rotated == str2);
    }
};


int geeks()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        Solution obj;
        cout << obj.isRotated(a, b) << endl;
    }
    return 0;
}
