#include <stdio.h>
#include <string.h>
#include <math.h>

// Função para converter binário para decimal
int binarioParaDecimal(char binario[]) {
    int decimal = 0;
    int tamanho = strlen(binario);
    for (int i = 0; i < tamanho; i++) {
        if (binario[i] == '1') {
            decimal += pow(2, tamanho - 1 - i);
        }
    }
    return decimal;
}

// Função para converter decimal para binário
void decimalParaBinario(int decimal) {
    char binario[32];
    int indice = 0;
    
    while (decimal > 0) {
        binario[indice] = (decimal % 2) + '0';
        decimal /= 2;
        indice++;
    }
    
    binario[indice] = '\0';
    
    // Reverter a string binária
    for (int i = indice - 1; i >= 0; i--) {
        printf("%c", binario[i]);
    }
    printf("\n");
}

// Função para converter binário para hexadecimal
void binarioParaHexadecimal(char binario[]) {
    int decimal = binarioParaDecimal(binario);
    printf("%X\n", decimal);
}

// Função para converter hexadecimal para binário
void hexadecimalParaBinario(char hexa[]) {
    int decimal;
    sscanf(hexa, "%x", &decimal);
    decimalParaBinario(decimal);
}

// Função para converter hexadecimal para decimal
int hexadecimalParaDecimal(char hexa[]) {
    int decimal;
    sscanf(hexa, "%x", &decimal);
    return decimal;
}