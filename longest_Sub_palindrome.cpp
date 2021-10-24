//Finding the longest sub palindrome using the expnading around the centre appoach 
#include<bits/stdc++.h>
#define ll long long 

#define pb push_back
#define t int 
#define in cin

#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define vp(it,arr)  for(auto it:arr){cout<<it<<;}
#define LOOP(i,a,b) for(int i=a;i<b;i++)
using namespace std;
int check(string guna,int a,int b){
      
      while(a>=0&&b<=guna.length()-1){
                 if(guna[a]!=guna[b]){
                     return b-a-1;
                 }
                 
                 a-=1;
                 b+=1;
      }
return b-a-1;
}



int find_largest_sub_palindrome(string s){


  //declared two pointers that which willl contain the start and end of the longest sub string palindrome     
  int left=0;
  int right=0;


      for(int f=0;f<s.length();f++){
              //if the axis is at the character
              int len1=check(s,f,f);
              //if the axis is not at the character

              int len2=check(s,f,f+1);

              int len=max(len1,len2);

             if(len>right-left){
                 left=f-(len-1)/2;
                 right=f+len/2;
             }


          }
        
return right-left+1;
}



int main(){


string ss = "babad";
string ss2="abaabd";

cout<<find_largest_sub_palindrome(ss)<<"\n";
cout<<find_largest_sub_palindrome(ss2)<<"\n";


//time complexity 





return 0;

}