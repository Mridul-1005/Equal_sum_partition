#include<bits/stdc++.h>
using  namespace  std;
#define all(x) x.begin(),x.end()
#define nl      '\n'
typedef long long int ll;
typedef unsigned long long int  llu;

bool subsetsum(int ar[],int n,int sum)
{
	int i,j;
	bool subset[n+1][sum+1];
	for(i=0;i<=n;i++)
	{
		subset[i][0]=true;
	}
	for(i=1;i<=sum;i++)subset[0][i]=false;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=sum;j++)
		{
			if(j<ar[i-1])subset[i][j]=subset[i-1][j];
			if(j>=ar[i-1])subset[i][j]=subset[i-1][j]||subset[i-1][j-ar[i-1]];
		}
	}
	return subset[n][sum];
}
bool solve(int ar[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=ar[i];
    }
    if(sum%2==1)
    {
        return false;
    }
    return subsetsum(ar,n,sum/2);
}

int main()
{
    int n;
    cin>>n;
    int ar[n+3];
    for(int i=0;i<n;i++)cin>>ar[i];
    if(solve(ar,n)==true)
    {
        int ans=-1;
        for(int i=0;i<n;i++)
        {
            int arr[n+3];
            int k=0;
            for(int j=0;j<n;j++)
            {
                if(j==i)continue;
                arr[k]=ar[j];
                k++;
            }
            if(!solve(arr,k))
            {
                ans=i;
                break;
            }
        }
        cout<<1<<nl;
        cout<<ans+1<<nl;
    }
    else
    {
        cout<<0<<nl;
    }
    return 0;
}


