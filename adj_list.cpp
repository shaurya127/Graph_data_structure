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

int main(){

    Graph g(4);
    g.addedge(0,1);
    g.addedge(0,2);
    g.addedge(1,2);
    g.addedge(2,3);
    g.printlist();
    return 0;

}