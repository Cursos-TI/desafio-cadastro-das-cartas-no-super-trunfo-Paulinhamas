#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas


int main() {
   
    //Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    //carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    //Entrada de dados da Carta 1
    printf("Insira os dados da Carta 1\n");
    
    printf("Estado (A-D):\n");
    scanf("%c", &estado1);

    printf("Código (Ex:A01):\n");
    scanf("%s", codigo1);

    printf("Cidade:\n");
    scanf("%s", cidade1);
    
    printf("População:\n");
    scanf("%d", &populacao1);

    printf("Área (Km²):\n");
    scanf("%f", &area1);

    printf("PIB (em bilhões):\n");
    scanf("%f", &pib1);

    printf("Quantidade de Pontos Turísticos:\n");
    scanf("%d", &pontosturisticos1);

    //Entrada de dados da Carta 2
    printf("Insira os dados da Carta 2\n");
    
    printf("Estado (E-H):\n");
    scanf("%c", &estado2);

    printf("Código (Ex:E02):\n");
    scanf("%s", codigo2);

    printf("Cidade:\n");
    scanf("%s", cidade2);
    
    printf("População:\n");
    scanf("%d", &populacao2);

    printf("Área (Km²):\n");
    scanf("%f", &area2);

    printf("PIB (em bilhões):\n");
    scanf("%f", &pib2);
    
    printf("Quantidade de Pontos Turísticos:\n");
    scanf("%d", &pontosturisticos2);

    //Exibindo as informaçãos
    printf("\n=== Informacoes da Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %f Km²\n", area1);
    printf("PIB: %f bilhoes\n",pib1);
    printf("Pontos Turisticos:%d\n", pontosturisticos1);
    
    printf("\n===Informacoes da Carta 2===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %f Km²\n", area2);
    printf("PIB: %f bilhoes\n",pib2);
    printf("Pontos Turisticos:%d\n", pontosturisticos2);

    return 0;
}
