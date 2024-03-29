
/*

It's Binod's Birthday and all his friends want to have a great GPL for him. But Binod being so schemy, he locked his room with a secret number and given his friends a Binary string of secret number.

His friends have no knowledge about binary strings. Would you help his friends to convert given Binary String to Decimal and participate in Binod's GPL.

Binary String is a string with only '0' and '1'  as it's characters.

Examples : "000101", "10101", "1", "0", "01" are Binary Strings.

    "Ab3024", "123", "1A", "6", "AA" are not Binary Strings

Input Format

First Line : Integer 
 that denotes number of test cases 
.
For each Test Case : Integer 
 for size of Binary String 
 and Binary String 
 .
Output Format

For each Test case, print Single Line integer containing the secret number.
Note: Secret number will always be greater than or equal to 0.

*/

#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long long res = 0;
        long long pow_2 = 1;
        long long len;
        cin >> len;

        string str;
        cin >> str;
        for (int i = str.size() - 1; i >= 0; i--)
        {
            int digit = str[i] - '0';
            res += digit * pow_2;
            pow_2 *= 2;
        }

        cout << res;
    }
}
