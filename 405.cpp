#include<bits/stdc++.h>
using namespace std;
int main(){

int t,arr[100];
cin>>t;

for(int i=0; i<t; i++){

    cin>>arr[i];

}

sort(arr, arr+ t);

for(int i=0; i<t; i++){

    cout<< arr[i] << " ";
}




return 0;
}
