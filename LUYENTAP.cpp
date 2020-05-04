#include <bits/stdc++.h>

using namespace std;
int n,k,i,j,b,u=50001;
int a[50001],s[50001];
int main()
{
    freopen("LUYENTAP.inp","r",stdin);
    freopen("LUYENTAP.out","w",stdout);
    cin >>n>>k;
    for (i=1;i<=n;i++) cin >>a[i];
    for (i=1;i<=n;i++) s[i]=s[i-1]+a[i];
    if (n<=1000) {for (i=1;i<=n;i++)
    {
        for (j=1;j<i;j++)
        {
            b=s[i]-s[j-1];
            if (b>=k)
            {

                u=min(u,i-j+1);
            }
        }
        if (u==1) break;
    }
    if (u!=50001) cout <<u;
    else cout <<-1;
    }
    else
    {
        for (i=1;i<=1000;i++)
        {
            for (j=i;j<=n;j++)
            {
                b=s[j]-s[j-i];
                if (b>=k)
                {
                    u=min(u,i);
                }
            }
        }
        if (u==50001) cout <<-1;
        else cout <<u;
    }
    return 0;
}
