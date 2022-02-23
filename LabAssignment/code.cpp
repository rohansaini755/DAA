#include<iostream>
using namespace std;
#define max 50
int main()
{
int n,a[max];
int t;
cin>>n;
for(int i=0;i<n;i++)
{
cin>>a[i];}
cin>>t;
int i;
for(i=0;i<n;i++)
{
if(a[i]==t)
{
cout<<"key fount at index no"<<i<<endl;
cout<<i+1<<endl;
break;
}
}
if(i==n)
{
    cout<<"key not found"<<endl;
cout<<n;
}

return 0;}
