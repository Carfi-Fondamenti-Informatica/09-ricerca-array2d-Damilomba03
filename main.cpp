#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    char elenco[10][20];
    char nome[20];
    int p = 0;

    for(int i=0;i<10;i++){
        for(int j=0;j<20;j++) {
            nome[j] = ' ';
            elenco[i][j] = ' ';
        }
    }
    for(int i=0;i<10;i++){
        cin >> elenco[i];
    }

    cin >> nome;
    if(comp(elenco,p,nome)){
        cout << p;
    }else{
        cout << "non presente";
    }
    return 0;
}
