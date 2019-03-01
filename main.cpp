//
//  main.cpp
//  nik codeforces problems
//
//  Created by PREEYADARSHEE DEV on 15/06/18.
//  Copyright © 2018 PREEYADARSHEE DEV. All rights reserved.
//
// train hard win easy :D
// by the way nik is love
// nik is motivation
// going off the grid for some time
//
#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define ll long long
#define ss second
#define ff first
#define fr(i,a,b) for(ll i=a;i<b;i++)
#define f(i,n) fr(i,0,n)
#define rf(i,b,a) for(ll i=b-1;i>=a;i--)
#define r(i,n) rf(i,n,0)
#define inf (ll)1<<60
#define eps 0.000000001
#define endl '\n'
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // lets fuck bfs anf dfs
    int k;
    while(scanf("%d",&k)!=EOF)
    {
        vector<int> vis(k+1,0);
        vector<pair<int,int>> dis(k+1,{0,0});
        queue<int>q;
        q.push(3%k);
        vis[3%k]=1;
        dis[3%k]={1,0};
        int flag=0;
        while(!q.empty()&&vis[0]==0)
        {
            int v=q.front();
            q.pop();
            int n2=v*10+3;
            if(vis[n2%k]==0)
            {
                vis[n2%k]=1;
                dis[n2%k]={dis[v].ff+1,dis[v].ss};
                q.push(n2%k);
            }
            else if(vis[n2%k]==1)
            {
                int a=dis[v].ff+1;
                int b=dis[n2%k].ff;
                flag=1;
                cout<<a<<" "<<(a-b)<<" "<<b<<endl;
                break;
            }
        }
        if(flag==0)
        {
            cout<<dis[0].ff<<" "<<dis[0].ff<<" "<<dis[0].ss<<endl;
        }
    }
}
