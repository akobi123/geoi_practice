#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,m,fix[505][505],a,b,d,ans;
int main()
{
	cin>>n>>m;
	while (m--)
	{
		cin>>a>>b>>d;
		fix[a][b]+=d;
	}
	for (int i=1; i<=n; i++)
		for (int j=i+1; j<=n; j++)
			ans=max(ans,abs(fix[i][j]-fix[j][i]));
	cout<<ans<<endl;
	return 0;
}
