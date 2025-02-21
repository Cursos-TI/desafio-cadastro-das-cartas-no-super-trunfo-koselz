#include <stdio.h>

int main(){
    // --- Variáveis da Carta 1 --- 
    char estado1;
    char codigo1[5];
    char nomedacidade1[40];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    // --- Leitura dos dados da primeira carta --- 
    printf("Digite uma letra de 'A' a 'H' para representar o estado: \n");
    scanf("%c", &estado1);

    printf("Digite a letra do estado e um número de 01 a 04 (ex: A01, B03) para ser o código da cidade: \n");
    scanf("%s", &codigo1);
    
    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]s", &nomedacidade1); // Coloquei este [^\n] pois pesquisei e vi que ele lê linhas inteiras. Antigamente eu estava escrevendo "Rio de Janeiro" e aparecia só "Rio"

    printf("\nDigite os números a seguir sem espaços e sem vírgulas. Use ponto (.) para valores decimais. \n"); // Tive problemas copiando e colando os valores, então, decidi dar uma dica a o usuário
    
    printf(" \nDigite a população da cidade: \n");
    scanf(" %d", &populacao1);
    
    printf("Digite a área da cidade: \n");
    scanf("%f", &area1);
    
    printf("Digite o PIB (Produto Interno Bruto) da cidade: \n");
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turisticos da cidade: \n");
    scanf("%d", &pontosturisticos1);

    // --- HORA DA SEGUNDA CARTA --- 

    // Depois de ter feito tudo, me lembrei que tecnicamente eu poderia ter colocado as variáveis das cartas todas em uma só seção. De qualquer forma, decidi continuar assim pois acho assim mais fácil de ler
    // Todos os comentários dessa carta são parecidos com a da primeira carta

    // --- Variáveis da Carta 2 --- 
    char estado2;
    char codigo2[5];
    char nomedacidade2[40];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    // --- Leitura dos dados da segunda carta --- 
    printf("\nVamos para a segunda carta.\n");

    printf(" \nDigite uma letra de 'A' a 'H' para representar o estado: \n");
    scanf(" %c", &estado2);

    printf("Digite a letra do estado e um número de 01 a 04 (ex: A01, B03) para ser o código da cidade: \n");
    scanf("%s", &codigo2);
    
    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]s", &nomedacidade2); 

    printf("\nDigite os números a seguir sem espaços e sem vírgulas. Use ponto (.) para valores decimais. \n");
    
    printf(" \nDigite a população da cidade: \n");
    scanf(" %d", &populacao2);
    
    printf("Digite a área da cidade: \n");
    scanf("%f", &area2);
    
    printf("Digite o PIB (Produto Interno Bruto) da cidade: \n");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turisticos da cidade: \n");
    scanf("%d", &pontosturisticos2);

    // --- Exibição da primeira carta --- 
    printf("\nCarta 1:\n");
    printf("Estado %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", nomedacidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km²\n", area1); // %.2f faz aparecer apenas dois dígitos depois do ponto decimal
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d \n", pontosturisticos1);

    // --- Exibição da segunda carta --- 
    // Novamente, eu só fui lembrar depois que eu podia colocar o output das duas em uma só seção
    printf("\nCarta 2:\n");
    printf("Estado %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", nomedacidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pontosturisticos2);
    
    return 0;
}    
