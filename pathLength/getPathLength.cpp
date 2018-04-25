#include <stack>
#include <set>
#include <list>
#include <iostream>

using namespace std;

list<int> vertexesList;
int maxPath=0;

struct Tree {
   int x;
   Tree *l;
   Tree *r;
};

//It is better to use map here instead of list to avoid iteration. 
int uniquesInList(list<int> &ll) {
    set<int> st;
    for(auto i : ll) {
        st.insert(i);
    }
    return st.size();    
}

// 
int solution(Tree * T) {

    vertexesList.push_back(T->x);

    if(T->l!=nullptr) {
        solution(T->l);
    }

    if(T->r!=nullptr) {
        solution(T->r);
    }

    if((T->l==nullptr) && (T->r==nullptr)) {
        maxPath = max(uniquesInList(vertexesList),maxPath);
    }

    vertexesList.pop_back();
    return maxPath;
}


int main() {

    cout << "Get maximum number of distinct values on a path starting from root of the tree to the tree edge." << endl;

    return 0;
}


