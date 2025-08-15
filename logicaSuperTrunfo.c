#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    
    char estado[2] = "B";
    char codigoDoEstado[5] = "BAHI";
    char nomeDaCidade[20] = "Salvador";
    int populacao = 3000000;
    float area = 170.500;
    float prod = 9222705000.5;
    int pontosTuristicos = 80;
    float densidade = populacao / area;
    float perCapita = prod / populacao;

    char estado2[2] = "S";
    char codigoDoEstado2[5] = "CATA";
    char nomeDaCidade2[20] = "Palhoça";
    int populacao2 = 100000;
    float area2 = 70.500;
    float prod2 = 222050000.5;
    int pontosTuristicos2 = 15;
    float densidade2 = populacao2 / area2;
    float perCapita2 = prod2 / populacao2;

    if(prod > prod2) {
        printf("A Carta 1 venceu!\n");
    } else {
        printf("A Carta 2 venceu!\n");
    }

    return 0;
}
