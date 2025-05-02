#include <stdio.h>

// Desafio Super Trunfo - Países


int main() {
    //variáveis separadas para cada atributo da cidade.
    // primeira carta

    char estado1[20];
    char codigo1[20];
    char nome1[30];
    unsigned long int populacao1;
    int turismo1;
    float area1, pib1,densidadepop1, pibpercapita1,superpoder1;

    // Cadastro das Cartas:
    printf("\n -----Informações da primeira carta---- \n");
    printf("Digite o estado da cidade: ");
    scanf("%19s", estado1);

    printf("Digite o código da cidade: ");
    scanf("%19s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %29s", nome1);

    printf("Digite qual é a população da cidade: ");
    scanf("%lu", &populacao1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &turismo1);

    printf("Digite qual é a área da cidade: ");
    scanf("%f", &area1);

    printf("Digite qual é o PIB da cidade: ");
    scanf("%f", &pib1);

    densidadepop1 = (float)populacao1 / area1;
    pibpercapita1 = (pib1 * 1000000000) / populacao1;
    superpoder1 = ((float)populacao1 + area1 + pib1 + (float)turismo1 + pibpercapita1) - densidadepop1;
    
    printf("\nCarta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome1);
    printf("População: %lu habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", turismo1);
    printf("Densidade Populacional:%.2f hab/km²\n", densidadepop1);
    printf("PIB per capita:%.2f reais\n", pibpercapita1);
    printf("Super poder: %.2f\n", superpoder1);
    // segunda carta
    //variáveis separadas para cada atributo da cidade
    printf("\n -----Informações da segunda carta---- \n");

    char estado2[20];
    char codigo2[20];
    char nome2[30];
    unsigned long int populacao2;
    int turismo2;
    float area2, pib2, densidadepop2, pibpercapita2,superpoder2;

    // Cadastro das Cartas:

    printf("Digite o estado da cidade: ");
    scanf("%19s", estado2);

    printf("Digite o código da cidade: ");
    scanf("%19s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %29s", nome2);

    printf("Digite qual é a população da cidade: ");
    scanf("%lu", &populacao2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &turismo2);

    printf("Digite qual é a área da cidade: ");
    scanf("%f", &area2);

    printf("Digite qual é o PIB da cidade: ");
    scanf("%f", &pib2);

    densidadepop2 = (float)populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000) / populacao2;
    superpoder2 = ((float)populacao2 + area2 + pib2 + (float)turismo2 + pibpercapita2) - densidadepop2;

    printf("\nCarta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", turismo2);
    printf("Densidade Populacional:%.2f hab/km²\n", densidadepop2);
    printf("PIB per capita:%.2f reais\n", pibpercapita2);
    printf("Super poder:%.2f\n", superpoder2);

     // comparação da carta 1 com a carta dois utilizando if e else
    printf("-------Resultado das comparações:---------\n");
     if (populacao1 > populacao2)
     {
         printf("População: Acarta 1 venceu!!\n");
     }
     else
     {
         printf("População: A carta 2 Venceu!!\n");
     }
     if (area1 > area2)
     {
         printf("Área: Acarta 1 venceu!!\n");
     }
     else
     {
         printf("Área: A carta 2 Venceu!!\n");
     }
     if (pib1 > pib2)
     {
         printf("PIB: Acarta 1 venceu!!\n");
     }
     else
     {
         printf("PIB: A carta 2 Venceu!!\n");
     }
     if (turismo1 > turismo2)
     {
         printf("Turismo: Acarta 1 venceu!!\n");
     }
     else
     {
         printf("Turismo: A carta 2 Venceu!!\n");
     }
     if (densidadepop1 < densidadepop2)
     {
         printf("Densidade Populacional: Acarta 1 venceu!!\n");
     }
     else
     {
         printf("Densidade Populacional: A carta 2 Venceu!!\n");
     }
     if (pibpercapita1 < pibpercapita2)
     {
         printf("PIB per capita: Acarta 1 venceu!!\n");
     }
     else
     {
         printf("PIB per capita: A carta 2 Venceu!!\n");
     }

     if (superpoder1< superpoder2)
     {
         printf("SUPER PODER: Acarta 1 venceu!!\n");
     }
     else
     {
         printf("SUPER PODER: A carta 2 Venceu!!\n");
     }
   

    return 0;
}
