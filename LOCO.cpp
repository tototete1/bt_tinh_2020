#include <bits/stdc++.h>

using namespace std;
long long n,m,i;
long long  s[1000001];
int main()
{
    freopen("LOCO.inp","r",stdin);
    freopen("LOCO.out","w",stdout);
    cin >>n>>m;
    s[1]=1%m,s[2]=2%m,s[3]=4%m;
    for (i=4;i<=n;i++) s[i]=(s[i-1]+s[i-2]+s[i-3])%m;
    cout <<s[n];
    return 0;
}
