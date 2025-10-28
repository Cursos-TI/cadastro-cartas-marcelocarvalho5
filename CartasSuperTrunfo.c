#include <stdio.h>
#include <string.h>

int main() {
    // ------------------- Declaração das variáveis -------------------
    char nomePais1[50], codigoCarta1[5];
    int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidade1;

    char nomePais2[50], codigoCarta2[5];
    int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidade2;

    int opcao1, opcao2;
    float valor1_carta1 = 0, valor1_carta2 = 0;
    float valor2_carta1 = 0, valor2_carta2 = 0;
    float somaCarta1, somaCarta2;

    // ------------------- Entrada de dados da Carta 1 -------------------
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Nome do pais: ");
    scanf(" %[^\n]", nomePais1); // espaço para limpar buffer

    printf("Codigo da carta (ex: A01): ");
    scanf(" %s", codigoCarta1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB (em trilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    densidade1 = populacao1 / area1;

    // ------------------- Entrada de dados da Carta 2 -------------------
    printf("\n=== Cadastro da Carta 2 ===\n");

    getchar(); // limpa o buffer antes de ler strings
    printf("Nome do pais: ");
    scanf(" %[^\n]", nomePais2);

    printf("Codigo da carta (ex: B02): ");
    scanf(" %s", codigoCarta2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB (em trilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    densidade2 = populacao2 / area2;

    // ------------------- Menu de escolha do primeiro atributo -------------------
    printf("\n=== MENU DE ATRIBUTOS ===\n");
    printf("Escolha o primeiro atributo para comparacao:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &opcao1);

    // ------------------- Menu de escolha do segundo atributo -------------------
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 5; i++) {
        if (i == opcao1) continue;
        switch (i) {
            case 1: printf("1 - Populacao\n"); break;
            case 2: printf("2 - Area\n"); break;
            case 3: printf("3 - PIB\n"); break;
            case 4: printf("4 - Numero de Pontos Turisticos\n"); break;
            case 5: printf("5 - Densidade Demografica\n"); break;
        }
    }
    printf("Opcao: ");
    scanf("%d", &opcao2);

    if (opcao1 == opcao2) {
        printf("\nErro: os dois atributos devem ser diferentes!\n");
        return 1;
    }

    // ------------------- Obtenção dos valores dos atributos escolhidos -------------------
    switch (opcao1) {
        case 1: valor1_carta1 = populacao1; valor1_carta2 = populacao2; break;
        case 2: valor1_carta1 = area1; valor1_carta2 = area2; break;
        case 3: valor1_carta1 = pib1; valor1_carta2 = pib2; break;
        case 4: valor1_carta1 = pontosTuristicos1; valor1_carta2 = pontosTuristicos2; break;
        case 5: valor1_carta1 = densidade1; valor1_carta2 = densidade2; break;
        default: printf("Opcao invalida!\n"); return 1;
    }

    switch (opcao2) {
        case 1: valor2_carta1 = populacao1; valor2_carta2 = populacao2; break;
        case 2: valor2_carta1 = area1; valor2_carta2 = area2; break;
        case 3: valor2_carta1 = pib1; valor2_carta2 = pib2; break;
        case 4: valor2_carta1 = pontosTuristicos1; valor2_carta2 = pontosTuristicos2; break;
        case 5: valor2_carta1 = densidade1; valor2_carta2 = densidade2; break;
        default: printf("Opcao invalida!\n"); return 1;
    }

    // ------------------- Comparações individuais -------------------
    printf("\n=== RESULTADO DAS COMPARACOES ===\n");

    // Atributo 1
    printf("\nComparando o primeiro atributo:\n");
    printf("%s: %.2f | %s: %.2f\n", nomePais1, valor1_carta1, nomePais2, valor1_carta2);
    if (opcao1 == 5) {
        (valor1_carta1 < valor1_carta2) ? 
            printf("Vencedor no atributo 1: %s\n", nomePais1) : 
            (valor1_carta2 < valor1_carta1 ? 
                printf("Vencedor no atributo 1: %s\n", nomePais2) : 
                printf("Empate no atributo 1!\n"));
    } else {
        (valor1_carta1 > valor1_carta2) ? 
            printf("Vencedor no atributo 1: %s\n", nomePais1) : 
            (valor1_carta2 > valor1_carta1 ? 
                printf("Vencedor no atributo 1: %s\n", nomePais2) : 
                printf("Empate no atributo 1!\n"));
    }

    // Atributo 2
    printf("\nComparando o segundo atributo:\n");
    printf("%s: %.2f | %s: %.2f\n", nomePais1, valor2_carta1, nomePais2, valor2_carta2);
    if (opcao2 == 5) {
        (valor2_carta1 < valor2_carta2) ? 
            printf("Vencedor no atributo 2: %s\n", nomePais1) : 
            (valor2_carta2 < valor2_carta1 ? 
                printf("Vencedor no atributo 2: %s\n", nomePais2) : 
                printf("Empate no atributo 2!\n"));
    } else {
        (valor2_carta1 > valor2_carta2) ? 
            printf("Vencedor no atributo 2: %s\n", nomePais1) : 
            (valor2_carta2 > valor2_carta1 ? 
                printf("Vencedor no atributo 2: %s\n", nomePais2) : 
                printf("Empate no atributo 2!\n"));
    }

    // ------------------- Soma final e vencedor -------------------
    somaCarta1 = valor1_carta1 + valor2_carta1;
    somaCarta2 = valor1_carta2 + valor2_carta2;

    printf("\n=== SOMA FINAL DOS ATRIBUTOS ===\n");
    printf("%s: %.2f\n", nomePais1, somaCarta1);
    printf("%s: %.2f\n", nomePais2, somaCarta2);

    (somaCarta1 > somaCarta2) ? 
        printf("\nVencedor final: %s!\n", nomePais1) : 
        (somaCarta2 > somaCarta1 ? 
            printf("\nVencedor final: %s!\n", nomePais2) : 
            printf("\nEmpate!\n"));

    return 0;
}
