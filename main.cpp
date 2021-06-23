#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <string>
#include <fstream>
#include <iostream>
#include <new>

using namespace std;

int main(){
    //Permite usar acentos
    setlocale(LC_ALL,"");
    
    //Declarando variáveis
    //bool all_of, any_of, none_of;
    char vetor[5], n;
    int cont = 0;
    
    //Criar o vetor
    for(int i = 0; i < 5; i++){
        cout << "Favor entrar com os valores do vetor." << endl;
        cin >> vetor[i];
    }
    
    //Pedir ao usuário o cpredicado
    cout << "Informar o predicado a ser procurado: ";
    cin>> n;
    
    for(int i = 0; i < 5; i++){
        if(vetor[i] == n){
          cont++;
        }
    }


    if(cont == 5){
      cout << "all_of" << endl;
    }else if(cont < 5 && cont > 0){
      cout << "any_of" << endl;
    }else{
      cout << "none_of" << endl;
    }

    return 0;
}