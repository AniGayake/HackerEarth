#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,k,a[100001],b[100001];
		cin>>n>>k;

		for (int i = 0; i < n; i++)
		{
			cin>>a[i];
		}

		for(int i=0;i<n;i++)	
			b[(i+k)%n] = a[i];
		

		for(int i=0;i<n;i++)	
			cout<<b[i]<<" ";
		cout<<"\n";
	}
}