#include<bits/stdc++.h>
using namespace std;

template<typename T>

class Graph{
    map<T,list<T>>l;
public:
    void push(int x,int y){
        l[x].push_back(y);
        l[y].push_back(x);
    }
   void bfs(T src){
       map<T,int>visited;
       queue<int>q;
       q.push(src);
       visited[src]=true;
       while (!q.empty())
       {
           T node=q.front();
           q.pop();
           cout<<node<<" ";
            for(int nbr:l[node]){
                if(!visited[nbr]){
                    q.push(nbr);
                    // mark as visted
                    visited[node]=true;
                }
            }
       }
       
   }

    
};

int main(){

   Graph <int>g;
   g.push(0,1);
   g.push(1,2);
   g.push(2,3);
   g.push(3,4);
   g.push(4,5);
   g.bfs(0);
    return 0;

}