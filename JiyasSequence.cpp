#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        long long int ans=1;
        for(int i=0; i<a; i++){
            int in;
            cin>>in;
            ans*=in;
        }
        int last=ans%10;
        if(last==2 || last==3 || last==5) cout<<"YES" <<endl;
        else cout<<"NO" <<endl;
    }
}