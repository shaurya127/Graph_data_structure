#include<bits/stdc++.h>
using namespace std;

class Graph{
    
public:
    unordered_map<string,list<pair<string,int>>>l;
    void addedge(string x,string y,bool biderctionla,int wt){
        l[x].push_back(make_pair(y,wt));
        if(biderctionla){
            l[y].push_back(make_pair(x,wt));
        }
    }
    void printlist(){
        // iterate over all keys in the map
        for(auto p:l){
            string city=p.first;
            list<pair<string,int>>nbrs=p.second;
            cout<<city<<"->";
            for(auto nbr:nbrs){
                string dest=nbr.first;
                int dist=nbr.second;
                cout<<dest<<" "<<dist<<",";
            }
            cout<<endl;
        }
    }

    
};

int main(){

    Graph g;
    g.addedge("A","B",true,20);
    g.addedge("A","C",true,10);
    g.addedge("A","D",false,50);
    g.addedge("C","D",true,40);
    g.addedge("B","D",true,30);
    g.printlist();
    return 0;

}