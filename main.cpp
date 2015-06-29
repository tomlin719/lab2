#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include "A.h"

using namespace std;

int main(){
    
    float h, w, r;
    ifstream inFile("file.in");
    ofstream outFile("file.out");
    A i;
    while(inFile >> h >> w){
	if((h==0) || (w==0)){
	    return 0;
	}
	i.weight(w);
	i.height(h);
        outFile << i.result() << '\t' << i.kind()<<endl;;
    }
    return 0;
}
