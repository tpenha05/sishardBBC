# Função para converter binário para decimal
def binario_para_decimal(binario):
    return int(binario, 2)

# Função para converter decimal para binário
def decimal_para_binario(decimal):
    return bin(decimal)[2:]

# Função para converter hexadecimal para decimal
def hexa_para_decimal(hexa):
    return int(hexa, 16)

# Função para converter decimal para hexadecimal
def decimal_para_hexa(decimal):
    return hex(decimal)[2:]

# Função para converter binário para hexadecimal
def binario_para_hexa(binario):
    decimal = int(binario, 2)
    return hex(decimal)[2:]

# Função para converter hexadecimal para binário
def hexa_para_binario(hexa):
    decimal = int(hexa, 16)
    return bin(decimal)[2:]

# Exemplos de uso
print(decimal_para_hexa(1000))         # Saída: 'a'
