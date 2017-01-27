#include<bits/stdc++.h>
#include<cstring>
#include<string>
using namespace std;
int main()
{
int T,check,N,k;
scanf("%d",&T);

string str2="011111";
string str="01111110";
while(T--)
{
    check=0;
string arr;
cin>>arr;

if (arr.find(str2) != string::npos) {
check=1;

//.. found.
}
if(check==1)
  cout<<str<<arr<<str;
  else
  cout<<str<<arr<<str;
}
}
