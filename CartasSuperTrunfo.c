#include <stdio.h>

int main(){
    // --- Variáveis das Cartas--- 
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char nomedacidade1[40], nomedacidade2[40];
    int populacao1, populacao2;
    float area1, area2;
    double pib1, pib2;
    int pontosturisticos1, pontosturisticos2;

    float densidadepopulacional1, densidadepopulacional2;
    double pibpercapita1, pibpercapita2;

    // --- Leitura dos dados da primeira carta --- 
    printf("Digite uma letra de 'A' a 'H' para representar o estado: \n");
    scanf(" %c", &estado1);

    printf("Digite a letra do estado e um número de 01 a 04 para ser o código da cidade (ex: A01): \n");
    scanf("%s", codigo1);
    
    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", &nomedacidade1);

    printf("\nDigite os números a seguir sem espaços e sem vírgulas. Use ponto (.) para valores decimais. \n");
    
    printf(" \nDigite a população da cidade: \n");
    scanf(" %d", &populacao1);
    
    printf("Digite a área da cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB (Produto Interno Bruto) da cidade (em bilhões): \n");
    scanf("%lf", &pib1);
    
    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontosturisticos1);

    densidadepopulacional1 = (float)populacao1 / area1;
    pibpercapita1 = (pib1 * 1000000000.0) / populacao1;

    // --- Leitura dos dados da segunda carta --- 
    printf("\nVamos para a segunda carta.\n");

    printf(" \nDigite uma letra de 'A' a 'H' para representar o estado: \n");
    scanf(" %c", &estado2);

    printf("Digite a letra do estado e um número de 01 a 04 para ser o código da cidade (ex: A01): \n");
    scanf("%s", codigo2);
    
    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", &nomedacidade2); 

    printf("\nDigite os números a seguir sem espaços e sem vírgulas. Use ponto (.) para valores decimais. \n");
    
    printf(" \nDigite a população da cidade: \n");
    scanf(" %d", &populacao2);
    
    printf("Digite a área da cidade: \n");
    scanf("%f", &area2);
    
    printf("Digite o PIB (Produto Interno Bruto) da cidade (em bilhões): \n");
    scanf("%lf", &pib2);
    
    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontosturisticos2);
    
    densidadepopulacional2 = (float)populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000.0) / populacao2;

    // --- Exibição da primeira carta --- 
    printf("\nCarta 1:\n");
    printf("Estado %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", nomedacidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2lf bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d \n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadepopulacional1);
    printf("PIB per Capita: %.2lf reais \n", pibpercapita1);

    // --- Exibição da segunda carta --- 
    printf("\nCarta 2:\n");
    printf("Estado %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", nomedacidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2lf bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadepopulacional2);
    printf("PIB per Capita: %.2lf reais \n", pibpercapita2);
    
    return 0;
}    