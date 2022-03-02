#include <iostream>

#define max 50

using namespace std;


int main()
{
    
int n,a[max],s;
    
cin>>n;
    
int i=0;
    
while(i<n)
    {
        
int x;
        cin>>x;
        
a[i] = x;
        
i++;
    }

 cin>>s;
    
int l=0,r=n-1,flag =0;
    
while(l<=r)
    {
        
int mid = l+(r-l)/2;
        
if(a[mid] == s)
        {
            flag = 1;
            break;
        }
        
else if(a[mid]<s)
        {
            r=mid-1;
        }
        
else
        l = mid+1;
    
}
 
    
if(flag == 1)
    cout<<"true";
    
else
    cout<<"false";

    
return 0;

}

