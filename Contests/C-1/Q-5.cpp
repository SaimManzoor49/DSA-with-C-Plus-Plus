/*

This year Santa wants to make a Christmas tree. But this time he wants to decorate it with numbers as in the Pascal’s triangle. But Santa is very busy in packing the gifts. Now, you being Santa’s friend help in making the tree.

Input: In the first line, you will be given ”t” no. of test cases. For each test case, you will be given a whole number “N”.

Output: For each value N, Print the first N lines in Christmas tree.

Constraints:   1≤T≤100

                        1 ≤ N ≤ 40

 

*/

#include<iostream>
using namespace std;



int main(){

    int t;
    cin>>t;

    while (t--)
    {

        const int n=5;
        // cin >> n;
        int a[n][n];
        a[0][0] = 1;

        for (int i = 1; i < n; ++i)
        {
            a[i][0] = 1;
            a[i][i]=1;
            for (int j = 1; j < i; ++j)
            {
                a[i][j] = a[i-1][j-1]+a[i-1][j];
            }
            
        }
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j <= i; ++j)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        


    }
    


}