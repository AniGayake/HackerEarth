	#include<bits/stdc++.h>
	using namespace std;
	int main()
	{
		freopen("input.txt","r",stdin);
		int t;
		cin>>t;
		while(t--)
		{
			char s[10000],shifted[10000],lShift[10000];
			cin>>s;
			int k;
			cin>>k;
			int n= strlen(s);
			for(int i=0;i<n;i++)
				shifted[(i+k)%n]= s[i];
			
			shifted[n] ='\0';

			int l;
			cin>>l;
			l = l%n;
			//cout<<l;
			for(int j=0;j<n;j++){
				//cout<<(j+n-l)%n<<" ";
				lShift[abs(j+n-l)%n] = s[j];
			}

			lShift[n] = '\0';

			cout<<shifted<<endl<<lShift<<endl;
		}

	}

	///a b c d		b c d a
	//0 1 2 3		0 1 2 3
	//n =4, k =1
