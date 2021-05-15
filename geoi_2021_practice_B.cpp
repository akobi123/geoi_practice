#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll s,ans,sum;
int main()
{
	cin>>s;
	for (ans=1; ans<=100000000; ans++)
	{
		sum+=ans;
		if (sum<s)
			continue;
		if ((sum-s)%2==0)
		{
			cout<<ans<<endl;
			return 0;
		}
	}
	return 0;
}
