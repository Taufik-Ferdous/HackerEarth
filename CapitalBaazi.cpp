#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

void lulu(string c){
    transform(c.begin(), c.end(), c.begin(), ::toupper);
    for(int i=0; i<c.length(); i++){
        if(c[i] == ' ') cout<<endl;
        else cout<<c[i];
    }
}

int main(){
    string in;
    getline(cin, in);
    lulu(in);
}