#include <iostream>
using namespace std;

int main(){
    int valorInserido = 0, pos = 0, binario[8];
    cout << "Digite um valor a ser inserido:" << endl;
    cin >> valorInserido;
    
    //Zerando o vetor:
    for(int i = 0; i < 8; i++){
        binario[i] = 0;
    }
    //Preenchendo o vetor com os restos da divisão e fazendo a conversão:
    while(valorInserido != 1){
        binario[pos] = valorInserido % 2;
        valorInserido = valorInserido / 2;
        pos++;
    }
    //Colocando o número final da divisão no vetor:
    binario[pos] = valorInserido;
    
    //Exibindo o valor, agora convertido em binário:
    for(int i = 7; i >= 0; i--){
        cout << binario[i];
    }
    return 0;
}
