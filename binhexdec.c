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

int main() {
    char binario[32], hexa[32];
    int decimal, opcao;
    
    printf("Escolha uma conversão:\n");
    printf("1. Binário para Decimal\n");
    printf("2. Decimal para Binário\n");
    printf("3. Binário para Hexadecimal\n");
    printf("4. Hexadecimal para Binário\n");
    printf("5. Hexadecimal para Decimal\n");
    printf("Opção: ");
    scanf("%d", &opcao);
    
    switch(opcao) {
        case 1:
            printf("Digite o valor em binário: ");
            scanf("%s", binario);
            printf("Decimal: %d\n", binarioParaDecimal(binario));
            break;
        case 2:
            printf("Digite o valor em decimal: ");
            scanf("%d", &decimal);
            printf("Binário: ");
            decimalParaBinario(decimal);
            break;
        case 3:
            printf("Digite o valor em binário: ");
            scanf("%s", binario);
            printf("Hexadecimal: ");
            binarioParaHexadecimal(binario);
            break;
        case 4:
            printf("Digite o valor em hexadecimal: ");
            scanf("%s", hexa);
            printf("Binário: ");
            hexadecimalParaBinario(hexa);
            break;
        case 5:
            printf("Digite o valor em hexadecimal: ");
            scanf("%s", hexa);
            printf("Decimal: %d\n", hexadecimalParaDecimal(hexa));
            break;
        default:
            printf("Opção inválida.\n");
    }
    
    return 0;
}