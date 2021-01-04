#include<bits/stdc++.h>
using namespace std;

class Graph{
    int v; 
    list<int>*l;
public:
    Graph(int v){
        this->v=v;
        l=new list<int> [v];
    }
    void addedge(int x,int y){
        l[x].push_back(y);
        l[y].push_back(x);
    }

    void printlist(){
        for (int i = 0; i <v; i++)
        {
            cout<<"vertex "<<i<<"->";
            for(int nbr:l[i]){
                cout<<nbr<<",";
            }
            cout<<endl;
        }   
    }
};

void addEdge(vector<int>adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void printGraph(vector<int>adj[],int vertex){
    for(int i=0;i<vertex;i++){
        cout<<"adjacncy list of vertex "<<i<<endl;
        for(int x:adj[i]){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}


// gfg problem

void printGraph(vector<int> adj[], int V)
{
    for(int i =0;i<V;i++)       // Traverse adjacency list for every vertex
    {
        cout <<i;               // Print the vertex id
        
        for(auto j : adj[i])    // Traverse through all the connected component of that vertex
            cout<< "-> "<<j;    // Print the connected vertex id
        
        cout<<endl;
    } 
}



int main(){

    Graph g(4);
    g.addedge(0,1);
    g.addedge(0,2);
    g.addedge(1,2);
    g.addedge(2,3);
    g.printlist();

    int vertex=5;
    vector<int>adj[vertex];
    addEdge(adj, 0, 1); 
    addEdge(adj, 0, 4); 
    addEdge(adj, 1, 2); 
    addEdge(adj, 1, 3); 
    addEdge(adj, 1, 4); 
    addEdge(adj, 2, 3); 
    addEdge(adj, 3, 4); 
    printGraph(adj, vertex); 

    return 0;

}
