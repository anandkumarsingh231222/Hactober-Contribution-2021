#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define all(n) n.begin(),n.end() 
#define vec vector<int>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define vp(it,arr)  for(auto it:arr){cout<<it<<;}
#define LOOP(i,a,b) for(int i=a;i<b;i++)
using namespace std;
int tp=0;
void mazepath(int i,int j,int n,int m,string osf){
    //base case
    if(i==n-1&&j==m-1){
        cout<<osf<<endl;
        tp++;
        return;
    }
    if(i>=n||j>=m){
        return;
    }
    mazepath(i+1,j,n,m,"D"+osf);
    mazepath(i,j+1,n,m,"R"+osf);
    mazepath(i+1,j+1,n,m,"->"+osf);


}
void jump(int i,int n,string osf){
    if(i==n-1){
        cout<<osf<<endl;
        return;
    }

    if(i>=n){
        return;
    }
    for(int b=1;b<=6;b++){
        jump(i+b,n,to_string(b)+osf);
    }
}




int main(){
    mazepath(0,0,3,3,"");
    cout<<tp<<endl;
    jump(0,7,"");
return 0;
}