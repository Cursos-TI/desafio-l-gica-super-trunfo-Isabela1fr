#include <stdio.h>

int main()
{
    // Variáveis das cartas
    char estado1[20], codigo1[20], nome1[30];
    char estado2[20], codigo2[20], nome2[30];
    int populacao1, turismo1, populacao2, turismo2, menu, tributo;
    float area1, pib1, densidadepop1, pibpercapita1, superpoder1;
    float area2, pib2, densidadepop2, pibpercapita2, superpoder2;

    // Menu principal
    printf("#### SUPER TRUNFO ####\n");
    printf("1. Jogar\n");
    printf("2. Regras do jogo\n");
    printf("Escolha uma opção: ");
    scanf("%d", &menu);

    switch (menu)
    {
    case 1:
        // Carta 1
        printf("\nVamos jogar! Insira as informações da sua carta\n");
        printf("Digite o estado da cidade: ");
        scanf("%19s", estado1);

        printf("Digite o código da cidade: ");
        scanf("%19s", codigo1);

        printf("Digite o nome da cidade: ");
        scanf(" %29[^\n]", nome1);

        printf("Digite a população da cidade: ");
        scanf("%d", &populacao1);

        printf("Digite a quantidade de pontos turísticos: ");
        scanf("%d", &turismo1);

        printf("Digite a área da cidade (em km²): ");
        scanf("%f", &area1);

        printf("Digite o PIB da cidade (em bilhões): ");
        scanf("%f", &pib1);

        // Cálculos carta 1
        densidadepop1 = (float)populacao1 / area1;
        pibpercapita1 = (pib1 * 1000000000) / populacao1;

        // Carta 2
        printf("\n------ Informações da segunda carta ------\n");
        printf("Digite o estado da cidade: ");
        scanf("%19s", estado2);

        printf("Digite o código da cidade: ");
        scanf("%19s", codigo2);

        printf("Digite o nome da cidade: ");
        scanf(" %29[^\n]", nome2);

        printf("Digite a população da cidade: ");
        scanf("%d", &populacao2);

        printf("Digite a quantidade de pontos turísticos: ");
        scanf("%d", &turismo2);

        printf("Digite a área da cidade (em km²): ");
        scanf("%f", &area2);

        printf("Digite o PIB da cidade (em bilhões): ");
        scanf("%f", &pib2);

        // Cálculos carta 2
        densidadepop2 = (float)populacao2 / area2;
        pibpercapita2 = (pib2 * 1000000000) / populacao2;

        // Jogo
        printf("\nEscolha um tributo para competir:\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Turismo\n");
        printf("5. Densidade demográfica\n");
        printf("Digite o número do tributo: ");
        scanf("%d", &tributo);

        if (tributo == 1)
        {
            // Comparação de população
            printf("\n----- Resultado -----\nTributo: População\n");
            printf("Carta 1 - %s: %d habitantes\n", nome1, populacao1);
            printf("Carta 2 - %s: %d habitantes\n", nome2, populacao2);
            printf("\nVencedor: %s\n", (populacao1 > populacao2) ? nome1 : nome2);
        }
        else if (tributo == 2)
        {
            // Comparação de área
            printf("\n----- Resultado -----\nTributo: Área\n");
            printf("Carta 1 - %s: %.2f km²\n", nome1, area1);
            printf("Carta 2 - %s: %.2f km²\n", nome2, area2);
            printf("\nVencedor: %s\n", (area1 > area2) ? nome1 : nome2);
        }
        else if (tributo == 3)
        {
            // Comparação de PIB
            printf("\n----- Resultado -----\nTributo: PIB\n");
            printf("Carta 1 - %s: %.2f bilhões\n", nome1, pib1);
            printf("Carta 2 - %s: %.2f bilhões\n", nome2, pib2);
            printf("\nVencedor: %s\n", (pib1 > pib2) ? nome1 : nome2);
        }
        else if (tributo == 4)
        {
            // Comparação de turismo
            printf("\n----- Resultado -----\nTributo: Pontos Turísticos\n");
            printf("Carta 1 - %s: %d pontos\n", nome1, turismo1);
            printf("Carta 2 - %s: %d pontos\n", nome2, turismo2);
            printf("\nVencedor: %s\n", (turismo1 > turismo2) ? nome1 : nome2);
        }
        else if (tributo == 5)
        {
            // Comparação de densidade (menor vence)
            printf("\n----- Resultado -----\nTributo: Densidade Demográfica\n");
            printf("Carta 1 - %s: %.2f hab/km²\n", nome1, densidadepop1);
            printf("Carta 2 - %s: %.2f hab/km²\n", nome2, densidadepop2);
            printf("\nVencedor: %s\n", (densidadepop1 < densidadepop2) ? nome1 : nome2);
        }
        else
        {
            printf("Opção inválida! Escolha um número entre 1 e 5.\n");
        }
        break;

    case 2:
        printf("\n----- Regras do Jogo -----\n");
        printf("1. Cada jogador cadastra informações de uma cidade\n");
        printf("2. Escolha um tributo para comparar\n");
        printf("3. O vencedor é quem tiver:\n");
        printf("   - Maior valor (população, área, PIB, turismo)\n");
        printf("   - Menor densidade demográfica\n");
        break;

    default:
        printf("Opção inválida! Escolha 1 ou 2.\n");
    }

    return 0;
}
