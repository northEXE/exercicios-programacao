valorInserido = input("Digite um valor para conversão: ")
binario = []
valorDecimal = int(valorInserido)

while (valorDecimal > 1):
    binario.append(int(valorDecimal % 2))
    valorDecimal = valorDecimal / 2

if(valorDecimal == 1):
    binario.append(int(valorDecimal))
binario.reverse()

print(binario)