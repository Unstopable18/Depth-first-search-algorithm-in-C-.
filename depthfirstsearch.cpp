#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int edge[10][10],i,j,k,n,stk[10],top,v,visit[10],visited[10];
int main()
{
    int m;
    cout<<"**************************************\n";
	cout<<"    *****Depth-First Search *****\n";
    cout<<"**************************************\n";
    cout<<"Enter Total no. of Vertices ";
    cin >> n;
    cout<<"Enter Total no. of Edges ";
    cin >> m;
    cout<<"Enter Source and Target Vertex:\n";
    for(k=1; k<=m; k++)
    {
        cin >>i>>j;
        edge[i][j]=1;
    }
    cout <<"Enter initial vertex to traverse from:";
    cin >>v;
    cout<<"*******************************************\n";
    cout<<"\t-:The DFS Traversal is:-\n";
    cout << v <<" ";
    visited[v]=1;
    k=1;
    while(k<n)
    {
        for(j=n; j>=1; j--)
        if(edge[v][j]!=0 && visited[j]!=1 && visit[j]!=1)
        {
            visit[j]=1;
            stk[top]=j;
            top++;
        }
        v=stk[--top];
        cout<<v << " ";
        k++;
        visit[v]=0;
        visited[v]=1;
    }
    cout<<"\n*******************************************\n";
    return 0;
}