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

    //Jogo

    int opcao;

    while (&opcao != 3){

    
    printf("Menu Principal\n");
        printf("1. Comparar PIB e Densidade de Cartas das Cartas\n");
        printf("2. Ver regras\n");
        printf("3. Sair da aplicação\n");
        scanf("%d", &opcao);
    
    

        switch (opcao) {
            case 1:
                printf("Estados: %s, %s \n", estado, estado2);
                printf("PIB e Densidade\n");
                printf("Comparando PIB:\n");
                    if(prod > prod2) {
                        printf("Carta 1 venceu!\n");
                    } else if (prod == prod2) {
                        printf("Empate!\n");
                    } else {
                        printf("A carta 2 venceu!\n");
                    }
                printf("Comparando Densidade:\n");
                    if(densidade > densidade2) {
                        printf("Carta 2 venceu!\n");
                    } else if (densidade == densidade2) {
                        printf("Empate!\n");
                    } else {
                        printf("A carta 1 venceu!\n");
                    }
                break;
            case 2:
                printf("Na comparação a carta com maior PIB vence e a carta com menor Densidade vence\n");
                break;
            case 3:
                printf("Saindo da aplicação\n");
                break;
            default:
                printf("Essa opção não existe\n");
                break;
        }

    }

    return 0;
}
