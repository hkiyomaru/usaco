/*
ID: h.kiyom1
PROG: ride
LANG: C++                 
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    string comet, group;
    fin >> comet >> group;
    
    int prod_comet = 1;
    for (int i=0; i<comet.size(); i++) {
        prod_comet *= int(comet[i]) - int('A') + 1;
    }

    int prod_group = 1;
    for (int i=0; i<group.size(); i++) {
        prod_group *= int(group[i]) - int('A') + 1;
    }

    if (prod_comet % 47 == prod_group % 47) fout << "GO" << endl;
    else fout << "STAY" << endl;
    return 0;
}
