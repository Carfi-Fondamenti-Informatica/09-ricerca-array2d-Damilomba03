#include "lib.h"

bool comp(char elenco[10][20], int &p, char nome[]){
    for(int i=0;i<10;i++){
        for(int j=0;j<20;j++){
            if(elenco[i][j] != nome[j]){
                j = 20;
            }else{
                if(j==19){
                    p = i;
                    return true;
                }
            }
        }
    }
    return false;
}
