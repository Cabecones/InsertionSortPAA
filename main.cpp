#include <stdio.h>

// Função que ordena o vetor usando o método de inserção
// e retorna o número de trocas realizadas
int insertion(int vetor[], int n)
{
    int i, j, temp, trocas = 0;

    for (i = 1; i < n; i++)
    {
        temp = vetor[i];
        j = i-1;

        // Encontra a posição correta para inserir o elemento atual
        while (j >= 0 && vetor[j] > temp)
        {
            vetor[j+1] = vetor[j];
            j = j-1;
            trocas++;
        }
        vetor[j+1] = temp;
    }
    return trocas;
}

int main()
{
    int t, n, i, j;

    // Tamanho máximo de resultados
    int trocas[5];
    // Tamanho máximo do vetor
    int vetor[100000];

    scanf("%d", &t);

    // Loop com número de vezes que o usuário digitou
    for (i = 0; i < t; i++)
    {
        scanf("%d", &n);

        // Lê a lista digitada pelo usuário
        for (j = 0; j < n; j++)
        {
            scanf("%d", &vetor[j]);
        }

        // Armazena o número de trocas realizadas ao ordenar o vetor
        trocas[i] = insertion(vetor, n);
    }

    // Imprime o número de trocas realizadas para cada lista
    for (i = 0; i < t; i++)
    {
        printf("%d\n", trocas[i]);
    }

    return 0;
}
