#include <stdio.h>

// Desafio Super Trunfo

int main()
{

    // Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    float densidadepopulacional1;
    float pibpercapita1;
    float superpoder1;

    // carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidadepopulacional2;
    float pibpercapita2;
    float superpoder2;

    // Entrada de dados da Carta 1
    printf("Insira os dados da Carta 1\n");
    
    printf("Estado (A-D):\n");
    scanf("%c", &estado1);
    
    printf("Código (Ex:A01):\n");
    scanf("%s", codigo1);
    
    printf("Cidade:\n");
    scanf("%s", cidade1);
   
    printf("População:\n");
    scanf("%lu", &populacao1);
   
    printf("Área (Km²):\n");
    scanf("%.2f", &area1);
    
    printf("PIB (em bilhões):\n");
    scanf("%.2f", &pib1);
    
    printf("Quantidade de Pontos Turísticos:\n");
    scanf("%d", &pontosturisticos1);

    // Entrada de dados da Carta 2
    printf("Insira os dados da Carta 2\n");
    
    printf("Estado (E-H):\n");
    scanf("%c", &estado2);
    
    printf("Código (Ex:E02):\n");
    scanf("%s", codigo2);
    
    printf("Cidade:\n");
    scanf("%s", cidade2);
    
    printf("População:\n");
    scanf("%lu", &populacao2);
    
    printf("Área (Km²):\n");
    scanf("%.2f", &area2);
    
    printf("PIB (em bilhões):\n");
    scanf("%.2f", &pib2);
    
    printf("Quantidade de Pontos Turísticos:\n");
    scanf("%d", &pontosturisticos2);

    // Cálculos
    densidadepopulacional1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;

    densidadepopulacional2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;


    // Super Poder = soma dos atributos + 1 / densidade
    superpoder1 = (float)populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapita1 + (1.0f / densidadepopulacional1);
    superpoder2 = (float)populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 + (1.0f / densidadepopulacional2);


    // Exibindo as informações da carta 1
    printf("\n=== Informacoes da Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %2.f Km²\n", area1);
    printf("PIB: %2.f bilhoes\n", pib1);
    printf("Pontos Turisticos:%d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);

    // Exibindo as informações da carta 2
    printf("\n===Informacoes da Carta 2===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %2.f Km²\n", area2);
    printf("PIB: %2.f bilhoes\n", pib2);
    printf("Pontos Turisticos:%d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);

    // Comparação das cartas
    printf("Comparação de Cartas:\n");

    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosturisticos1 > pontosturisticos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadepopulacional1 < densidadepopulacional2); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibpercapita1 > pibpercapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2);

    return 0; 
}
