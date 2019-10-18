#include <iostream>
#include <fstream>
using namespace std;

const string fichero = "../laberintos/laber1.txt";

int main() {
    ifstream fi;
    fi.open(fichero);
    if(fi.is_open()){
        int n, m;
        fi>>n>>m;
        cout<<n<<","<<m<<endl;
        fi.close();
    }
    else cerr<<"Error de lectura\n";
    return 0;
}