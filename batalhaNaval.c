#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H','I', 'J'};
    int tabuleiro[10][10];
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Inicializa o tabuleiro com 0s (água)
       for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // 2. Posicionando os Navios
    // Navio 1: 3 posições, horizontal. Inicia na linha 3, coluna 3.
    // Lembre-se: os índices do array começam em 0.
    int navio1_linha = 3;
    int navio1_coluna = 3;
    
    // Posiciona o navio horizontalmente
    for (int j = 0; j < 3; j++) {
        // Validação básica para garantir que o navio não saia do tabuleiro
        if (navio1_coluna + j < 10) {
            tabuleiro[navio1_linha][navio1_coluna + j] = 3;
        }
    }
    
    // Navio 2: 3 posições, vertical. Inicia na linha 5, coluna 5.
    int navio2_linha = 5;
    int navio2_coluna = 5;
    
    // Posiciona o navio verticalmente
    for (int i = 0; i < 3; i++) {
        // Validação básica para garantir que o navio não saia do tabuleiro
        if (navio2_linha + i < 10) {
            tabuleiro[navio2_linha + i][navio2_coluna] = 3;
        }
    }

    // 3. Exibindo o Tabuleiro
    printf("TABULEIRO BATALHA NAVAL\n");
    printf("  "); // Espaço para alinhar com os números das linhas
    for (int i = 0; i < 10; i++) {
        printf("%c ", linha[i]);
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%d ", i);
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
