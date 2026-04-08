#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(int argc, char *argv[])
{
    // Verifica se os limites foram informados
    if (argc < 3)
    {
        printf("Você precisa informar os limites para geração do número\n");
        return;
    }

    // Converte os argumentos para inteiro
    int min = atoi(argv[1]);
    int max = atoi(argv[2]);

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    // Gera número aleatório no intervalo [min, max)
    int numero = min + rand() % (max - min);

    printf("O número aleatório é %d\n", numero);

    // Obrigatório
    printf("Criado por Nicoly Bernardino da Silva");
}