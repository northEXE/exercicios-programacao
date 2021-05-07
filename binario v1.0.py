valorInserido = input("Digite um valor a ser convertido: ")
valorInserido = int(valorInserido)
binario = []

if(valorInserido == 0 or valorInserido == 1):
    print("000000", valorInserido)
else:
    if(64 <= valorInserido):
        valorInserido = int(valorInserido) - 64
        binario.append(1)
    else:
        binario.append(0)
    
    if(32 <= valorInserido):
        valorInserido = int(valorInserido) - 32
        binario.append(1)
    else:
        binario.append(0)
        
    if(16 <= valorInserido):
        valorInserido = int(valorInserido) - 16
        binario.append(1)
    else:
        binario.append(0)
    
    if(8 <= valorInserido):
        valorInserido = int(valorInserido) - 8
        binario.append(1)
    else:
        binario.append(0)
        
    if(4 <= valorInserido):
        valorInserido = int(valorInserido) - 4
        binario.append(1)
    else:
        binario.append(0)
        
    if(2 <= valorInserido):
        valorInserido = int(valorInserido) - 64
        binario.append(1)
    else:
        binario.append(0)
        
    if(1 <= valorInserido):
        valorInserido = int(valorInserido) - 1
        binario.append(1)
    else:
        binario.append(0)
        
    print(binario)