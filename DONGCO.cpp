#include <bits/stdc++.h>

using namespace std;
queue <int> q;
vector <int> ke[30001];
int cx[30001];
void bfs()
{
    int u,v,i;
    cx[1]=0;
    q.push(1);
    while (!q.empty())
    {
        u=q.front();
        q.pop();
        for (i=0;i<ke[u].size();i++)
        {
            v=ke[u][i];
            if (cx[v]==1)
            {
                cx[v]=0;
                q.push(v);
            }
        }
    }
}
int main()
{
    freopen("DONGCO.inp","r",stdin);
    freopen("DONGCO.out","w",stdout);
    int n,m,u,v,i,d=0;
    cin >>n>>m;
    for (i=1;i<=n;i++) cx[i]=1;
    for (i=1;i<=m;i++)
    {
        cin >>u>>v;
        ke[u].push_back(v);
        ke[v].push_back(u);
    }
    cout <<ke[1][0];
    bfs();
    for (i=1;i<=n;i++) if (cx[i]==1) d++;
    cout <<d<<endl;
    for (i=1;i<=n;i++) if (cx[i]==1) cout <<i<<" ";
    return 0;
}
