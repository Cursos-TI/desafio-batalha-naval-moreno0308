#include <stdio.h>
#define LINHA 10

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    char linha[LINHA] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H','I', 'J'};
    int tabuleiro[LINHA][LINHA];
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Inicializa o tabuleiro com 0s (água)
       for (int i = 0; i < LINHA; i++) 
       {
        for (int j = 0; j < LINHA; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // 2. Posicionando os Navios
    // Navio 1: 3 posições, horizontal. Inicia na linha 3, coluna 3.
    // Lembre-se: os índices do array começam em 0.
    int navio1_linha = 0;
    int navio1_coluna = 0;
    int soma_linha = 0, soma_coluna =0;    
    // Posiciona o navio CRUZ
    for (int i = 0; i < 5; i++)
    {         
     for (int j = 1; j < 6; j++) {
        // Validação básica para garantir que o navio não saia do tabuleiro
        if (navio1_coluna + j < LINHA && navio1_linha + i == 2 ) {
            tabuleiro[navio1_linha + i][navio1_coluna + j] = 3;
        } else if (navio1_linha < LINHA && navio1_coluna + j == 3)

        {
           tabuleiro[navio1_linha + i][navio1_coluna + j] = 3;
        }
        
    }
    }
    // Posiciona o navio PRIRAMEDE
    int navio2_linha =5;
    int navio2_coluna = 2;
    int altura = 3;
    for (int i = 0; i < altura; i++)
    {   //calcular ponto inicio da piremede
        int coluna_inicial = navio2_coluna -i;
        //loop para preencher cada linha da piramede       
     for (int j = 0; j <(2 * i + 1); j++) {
        // Validação básica para garantir que o navio não saia do tabuleiro
        if (navio2_linha + i < LINHA && coluna_inicial + j >= 0 && coluna_inicial + j < LINHA){
            tabuleiro[navio2_linha + i][coluna_inicial + j] = 3;
        }
        
    }
    }
     // Posiciona o navio octaedro
    int navio3_linha =3;
    int navio3_coluna = 7;
    int altura2 = 3;
    for (int i = 0; i < altura2; i++)
    {   //calcular ponto inicio da piremede
        int coluna_inicial2 = navio3_coluna -i;
        //loop para preencher cada linha da piramede       
     for (int j = 0; j <(2 * i + 1); j++) {
        // Validação básica para garantir que o navio não saia do tabuleiro
        if (navio3_linha + i < LINHA && coluna_inicial2 + j >= 0 && coluna_inicial2 + j < LINHA){
            tabuleiro[navio3_linha + i][coluna_inicial2 + j] = 3;
        }
        
    }
    }
    //  Parte de baixo do octaedro (a pirâmide invertida)
    for (int i = altura2 -2; i >=0; i--)
    {
        int coluna_inical = navio3_coluna -i;
        int linha_atual = navio3_linha + altura2 + (altura2 - i - 2);
        for (int j = 0; j < (2 * i + 1); j++)
        {
            if(linha_atual < LINHA && coluna_inical + j >= 0 && coluna_inical + j < LINHA)
        {tabuleiro[linha_atual][coluna_inical + j] = 3;

        }
        }
        
    }
    

    
    // 3. Exibindo o Tabuleiro
    printf("TABULEIRO BATALHA NAVAL\n");
    printf("  "); // Espaço para alinhar com os números das linhas
    for (int i = 0; i < LINHA; i++) {
        printf("%c ", linha[i]);
    }
    printf("\n");

    for (int i = 0; i < LINHA; i++) {
        printf("%d ", i);
        for (int j = 0; j < LINHA; j++) {
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
