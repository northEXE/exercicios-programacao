#include<iostream>
using namespace std;

int main(void){
    int valorInserido = 0, binario[7], pos = 0;
    
    cout << "Digite um valor para conversão: " << endl;
    cin >> valorInserido;
    
    for(int i = 0; i < 7; i++)
        binario[i] = 0;
    
    if(valorInserido == 0 || valorInserido == 1)
        cout << "000000" << valorInserido << endl;
    else{
        
            if(64 <= valorInserido){
                valorInserido = valorInserido - 64;
                binario[pos] = 1;
                pos++;
            } else{
               binario[pos] = 0;
               pos++;
            } 
            
            if(32 <= valorInserido){
                valorInserido = valorInserido - 32;
                binario[pos] = 1;
                pos++;
            } else{
                binario[pos] = 0;
                pos++;
            } 
            
            if(16 <= valorInserido){
                valorInserido = valorInserido - 16;
                binario[pos] = 1;
                pos++;
            } else{
                binario[pos] = 0;
                pos++;
            }
            
            if(8 <= valorInserido){
                valorInserido = valorInserido - 8;
                binario[pos] = 1;
                pos++;
            } else{
                binario[pos] = 0;
                pos++;
            } 
            
            if(4 <= valorInserido){
                valorInserido = valorInserido - 4;
                binario[pos] = 1;
                pos++;
            } else{
                binario[pos] = 0;
                pos++;
            }
            
            if(2 <= valorInserido){
                valorInserido = valorInserido - 2;
                binario[pos] = 1;
                pos++;
            } else{
                binario[pos] = 0;
                pos++;
            }
            
            if(1 <= valorInserido){
                valorInserido = valorInserido - 1;
                binario[pos] = 1;
                pos++;
            } else{
                binario[pos] = 0;
                pos++;
            }
            
        
        
        for(int i = 0; i < 7; i++)
            cout << binario[i];
    }
    return 0;
}