#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,mod=1e9+7;
	cin>>t;
	while(t--)
	{
	   long long int n,fact=1;
	    cin>>n;
	    if(n==0 || n==1)
            {
	       cout<<"1"<<endl;
	       continue;
	    }
	    n%=mod;
	    for(int i=2;i<=n;i++)
	    {
	 	   fact=(fact*i)%mod;
	    }
	    cout<<fact<<endl;
	}	
}
