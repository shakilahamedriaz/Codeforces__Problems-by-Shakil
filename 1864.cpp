
#include<bits/stdc++.h>
using namespace std;


void sr(){
    int x, y, n;
    cin >> x >> y >> n;

    vector<int> v;
    int diff = 1;
    for(int i = 0; i < n; i++){
        v.push_back(y);
        y -= diff;
        diff++;
    }

    if(v[v.size() - 1] < x)
        cout << -1 << endl;
    else{
        cout << x << " ";
        for(int i = v.size() - 2; i >= 0; i--)
            cout << v[i] << " \n"[i == 0];
    }
}

int main(){
    int t;
    cin >> t;
    while(t--)
    sr();
    return 0;
}
