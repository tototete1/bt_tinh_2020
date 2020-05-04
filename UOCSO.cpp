#include <bits/stdc++.h>

using namespace std;
long long int s=1,n,i,u,d[10001];
int main()
{
    ifstream fi ("UOCSO.inp");
    ofstream fo ("UOCSO.out");
    fi >>n;
    for (i=1;i<=n;i++) s=s*i;
    i=2,u=1;
    while (s>1)
    {
        if(s%i==0)
        {
            d[u]++;
            s=s/i;
        }
        else
        {
            u++;
            i++;
        }
    }
    s=1;
    for (i=1;i<=u;i++) s=s*(d[i]+1);
    fo <<s;
    return 0;
}
