#include<bits/stdc++.h>
using namespace std;
int iterativepower(int x, int n){
    int res=1;
    while(n>0){
        res*=x;
        n--;
    }
    return res;
}

int recursivepower(int x, int n){
    if(n==0)
        return 1;
    return x*recursivepower(x,n-1);
}

int powerfunc(int x, int n){
    return pow(x,n);
}
int main(){
    int x,n;
    cin>>x>>n;
    cout<<"By Iteration: "<<iterativepower(x,n)<<endl;
    cout<<"By Recursion: "<<recursivepower(x,n)<<endl;
    cout<<"By pow function: "<<powerfunc(x,n)<<endl;
}