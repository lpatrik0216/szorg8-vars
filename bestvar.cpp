#include<bits/stdc++.h>
using namespace std;int main(){string a,b;getline(cin,a);for(char c:a)if(isalpha(c))b+=tolower(c);cout<<(b==string(rbegin(b),rend(b)));int i,x;multiset<int>q;cin>>i;while(i--)cin>>x,q.insert(x);for(int r:q)cout<<r;}
