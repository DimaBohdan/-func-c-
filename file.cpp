#include <iostream>
using namespace std;

int main() {
    int n, g, y, r;
    cin>>n>>g>>y>>r;
    int ostacha;
    ostacha = n%((g+y)*2+r);
    if (ostacha<=g){
        cout<<"G";
    }
    else if(ostacha<=g+y){
        cout<<"Y";
    }
    else if (ostacha<=g+y+r){
        cout<<"R";
    }
    else if(ostacha<=g+2*y+r){
        cout<<"Y";
    }
    else{
        cout<<"G";
    }
}
