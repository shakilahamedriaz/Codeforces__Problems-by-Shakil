#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >>n;

        string s;
        cin >>s;
        int len= s.length();
        
        cout<<s[len-1]<<endl;
    }
}