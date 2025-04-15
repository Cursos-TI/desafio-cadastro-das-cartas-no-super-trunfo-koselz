#include <stdio.h>

int main(){


    // Primeiro declaramos as variáveis. //
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char nomedacidade1[40], nomedacidade2[40];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    double pib1, pib2;
    int pontosturisticos1, pontosturisticos2;

    float densidadepopulacional1, densidadepopulacional2;
    double pibpercapita1, pibpercapita2;

    float superpoder1, superpoder2;


    // Depois entramos com os valores da primeira carta. //
    printf("\n\n--------------------------------------\n");
    printf("// == VAMOS CRIAR A PRIMEIRA CARTA! == //");
    printf("\n--------------------------------------\n\n");

    printf("Digite uma letra de 'A' a 'H' para representar o estado: ");
    scanf(" %c", &estado1);

    printf("Digite a letra do estado e um número de 01 a 04 para ser o código da cidade (ex: A01): ");
    scanf("%s", &codigo1);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", &nomedacidade1);
    
    printf("Digite a população da cidade (não use pontos decimais): ");
    scanf(" %lu", &populacao1);
    
    printf("Digite a área da cidade (pode usar pontos decimais): ");
    scanf("%f", &area1);

    printf("Digite o PIB (Produto Interno Bruto) da cidade (use um ponto decimal só pra separar o bilhão, ex: 00.000000): ");
    scanf("%lf", &pib1);
    
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontosturisticos1);

    // Calculamos alguns valores extras da primeira carta. //
    densidadepopulacional1 = (float)populacao1 / area1;
    pibpercapita1 = (pib1 * 1000000000.0) / populacao1;
    superpoder1 = (float)populacao1 + area1 + pib1 * 1000000000.0 + pontosturisticos1 + pibpercapita1 + (1 / densidadepopulacional1);


    // Vamos começar a calcular os valores da segunda carta. //
    printf("\n\n--------------------------------------\n");
    printf("// == VAMOS PARA A SEGUNDA CARTA! == //");
    printf("\n--------------------------------------\n");

    printf(" \nDigite uma letra de 'A' a 'H' para representar o estado: ");
    scanf(" %c", &estado2);

    printf("Digite a letra do estado e um número de 01 a 04 para ser o código da cidade (ex: A01): ");
    scanf("%s", &codigo2);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", &nomedacidade2); 
    
    printf("Digite a população da cidade (não use pontos decimais): ");
    scanf(" %lu", &populacao2);
    
    printf("Digite a área da cidade (pode usar pontos decimais): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB (Produto Interno Bruto) da cidade (use um ponto decimal só pra separar o bilhão, ex: 00.000000): ");
    scanf("%lf", &pib2);
    
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontosturisticos2);
    
    // Calculamos aqueles valores extras da segunda carta. //
    densidadepopulacional2 = (float)populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000.0) / populacao2;
    superpoder2 = (float)populacao2 + area2 + pib2 * 1000000000.0 + pontosturisticos2 + pibpercapita2 + (1 / densidadepopulacional2);


    // Exibimos a primeira carta. //
    printf("\n--------------------------------------\n");
    printf("// == AQUI ESTÃO SUAS CARTAS. == //");
    printf("\n--------------------------------------\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", nomedacidade1);
    printf("População: %lu \n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2lf bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d \n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadepopulacional1);
    printf("PIB per Capita: %.2lf reais \n", pibpercapita1);


    // Exibimos a segunda carta. //
    printf("\nCarta 2:\n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", nomedacidade2);
    printf("População: %lu \n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2lf bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadepopulacional2);
    printf("PIB per Capita: %.2lf reais \n", pibpercapita2);
    

    // Calculamos quem venceu e quem perdeu com a estrutura de comparação. //

    int resultado1, resultado2;
    int primeiroatributo, segundoatributo;

    printf("\n--------------------------------------\n");
    printf("// == HORA DA COMPARAÇÃO DAS CARTAS! == //");
    printf("\n--------------------------------------\n\n");

    printf("Escolha o primeiro atributo pra gente comparar!\n\n");

    printf("0. Nome das cidades\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. Pib per Capita\n");
    printf("7. Superpoder!\n");
    printf("\nEscolha uma opção (digite de 0 a 7): ");
    scanf("%d", &primeiroatributo);

        switch (primeiroatributo) {
            case 0:
                printf("\n\nAs cidades são %s e %s!\n", nomedacidade1, nomedacidade2);
            break;
            case 1:
                printf("\n\nVocê escolheu População!\n");

                if (populacao1 > populacao2){
                    printf("%s venceu em população (%lu).\n", nomedacidade1, populacao1);
                } else if (populacao1 < populacao2){
                    printf("%s venceu em população (%lu).\n", nomedacidade2, populacao2);
                } else {
                    printf("As cartas empataram em população.\n");
                }

                resultado1 = populacao1 > populacao2 ? 1 : 0;
            break;
            case 2:
                printf("\n\nVocê escolheu Área!\n");

                if (area1 > area2){
                    printf("%s venceu em área (%.2f).\n", nomedacidade1, area1);
                } else if (area1 < area2){
                    printf("%s venceu em área (%.2f).\n", nomedacidade2, area2);
                } else {
                    printf("As cartas empataram em área.\n");
                }

                resultado1 = area1 > area2 ? 1 : 0;
            break;
            case 3:
                printf("\n\nVocê escolheu PIB!\n");

                if (pib1 > pib2){
                    printf("%s venceu em PIB (%.2lf).\n", nomedacidade1, pib1);
                } else if (pib1 < pib2){
                    printf("%s venceu em PIB (%.2lf).\n", nomedacidade2, pib2);
                } else {
                    printf("As cartas empataram em PIB.\n");
                }

                resultado1 = pib1 > pib2 ? 1 : 0;
            break;
            case 4:
                printf("\n\nVocê escolheu Número de Pontos Turísticos!\n");

                if (pontosturisticos1 > pontosturisticos2){
                    printf("%s venceu em número de pontos turísticos (%d).\n", nomedacidade1, pontosturisticos1);
                } else if (pontosturisticos1 < pontosturisticos2){
                    printf("%s venceu em número de pontos turísticos (%d).\n", nomedacidade2, pontosturisticos2);
                } else {
                    printf("As cartas empataram em número de pontos turísticos.\n");
                }

                resultado1 = pontosturisticos1 > pontosturisticos2 ? 1 : 0;
            break;
            case 5:
                printf("\n\nVocê escolheu Densidade Populacional!\n");

                if (densidadepopulacional1 < densidadepopulacional2){
                    printf("%s venceu em densidade populacional (%.2f).\n", nomedacidade1, densidadepopulacional1);
                } else if (densidadepopulacional1 > densidadepopulacional2){
                    printf("%s venceu em densidade populacional (%.2f).\n", nomedacidade2, densidadepopulacional2);
                } else {
                    printf("As cartas empataram em densidade populacional.\n");
                }

                resultado1 = densidadepopulacional1 < densidadepopulacional2 ? 1 : 0;
            break;
            case 6:
                printf("\n\nVocê escolheu PIB per Capita!\n");

                if (pibpercapita1 > pibpercapita2){
                    printf("%s venceu em PIB per capita (%.2lf).\n", nomedacidade1, pibpercapita1);
                } else if (pibpercapita1 < pibpercapita2){
                    printf("%s venceu em PIB per capita (%.2lf).\n", nomedacidade2, pibpercapita2);
                } else {
                    printf("As cartas empataram em PIB per capita.\n");
                }

                resultado1 = pibpercapita1 > pibpercapita2 ? 1 : 0;
            break;
            case 7:
                printf("\n\nVocê escolheu Superpoder!\n");

                if (superpoder1 > superpoder2){
                    printf("%s é mais forte no geral então venceu (Total: %.2f).\n", nomedacidade1, superpoder1);
                } else if (superpoder1 < superpoder2){
                    printf("%s é mais forte no geral então venceu (Total: %.2f).\n", nomedacidade2, superpoder2);
                } else {
                    printf("As cartas empataram em superpoder.\n");
                }

                resultado1 = superpoder1 > superpoder2 ? 1 : 0;
            break;
            default:
                printf("\n\nOpção inválida.\n");
            break;
        }

    printf("\nAgora, escolha o segundo atributo pra gente comparar!\nATENÇÃO: Escolha um atributo DIFERENTE do primeiro.\n\n");
    
    printf("0. Nome das cidades\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. Pib per Capita\n");
    printf("7. Superpoder!\n");
    printf("\nEscolha uma opção (digite de 0 a 7): ");
    scanf("%d", &segundoatributo);

        if (primeiroatributo == segundoatributo) {
            printf("Opa, escolha um atributo diferente.\n");
        } else {
            switch (segundoatributo) {
                case 0:
                    printf("\nAs cidades são %s e %s!\n", nomedacidade1, nomedacidade2);
                break;
                case 1:
                    printf("\n\nVocê escolheu População!\n");
    
                    if (populacao1 > populacao2){
                        printf("%s venceu em população (%lu).\n", nomedacidade1, populacao1);
                    } else if (populacao1 < populacao2){
                        printf("%s venceu em população (%lu).\n", nomedacidade2, populacao2);
                    } else {
                        printf("As cartas empataram em população.\n");
                    }
    
                    resultado2 = populacao1 > populacao2 ? 1 : 0;
                break;
                case 2:
                    printf("\n\nVocê escolheu Área!\n");
    
                    if (area1 > area2){
                        printf("%s venceu em área (%.2f).\n", nomedacidade1, area1);
                    } else if (area1 < area2){
                        printf("%s venceu em área (%.2f).\n", nomedacidade2, area2);
                    } else {
                        printf("As cartas empataram em área.\n");
                    }
    
                    resultado2 = area1 > area2 ? 1 : 0;
                break;
                case 3:
                    printf("\n\nVocê escolheu PIB!\n");
    
                    if (pib1 > pib2){
                        printf("%s venceu em PIB (%.2lf).\n", nomedacidade1, pib1);
                    } else if (pib1 < pib2){
                        printf("%s venceu em PIB (%.2lf).\n", nomedacidade2, pib2);
                    } else {
                        printf("As cartas empataram em PIB.\n");
                    }
    
                    resultado2 = pib1 > pib2 ? 1 : 0;
                break;
                case 4:
                    printf("\n\nVocê escolheu Número de Pontos Turísticos!\n");
    
                    if (pontosturisticos1 > pontosturisticos2){
                        printf("%s venceu em número de pontos turísticos (%d).\n", nomedacidade1, pontosturisticos1);
                    } else if (pontosturisticos1 < pontosturisticos2){
                        printf("%s venceu em número de pontos turísticos (%d).\n", nomedacidade2, pontosturisticos2);
                    } else {
                        printf("As cartas empataram em número de pontos turísticos.\n");
                    }
    
                    resultado2 = pontosturisticos1 > pontosturisticos2 ? 1 : 0;
                break;
                case 5:
                    printf("\n\nVocê escolheu Densidade Populacional!\n");
    
                    if (densidadepopulacional1 < densidadepopulacional2){
                        printf("%s venceu em densidade populacional (%.2f).\n", nomedacidade1, densidadepopulacional1);
                    } else if (densidadepopulacional1 > densidadepopulacional2){
                        printf("%s venceu em densidade populacional (%.2f).\n", nomedacidade2, densidadepopulacional2);
                    } else {
                        printf("As cartas empataram em densidade populacional.\n");
                    }
    
                    resultado2 = densidadepopulacional1 < densidadepopulacional2 ? 1 : 0;
                break;
                case 6:
                    printf("\n\nVocê escolheu PIB per Capita!\n");
    
                    if (pibpercapita1 > pibpercapita2){
                        printf("%s venceu em PIB per capita (%.2lf).\n", nomedacidade1, pibpercapita1);
                    } else if (pibpercapita1 < pibpercapita2){
                        printf("%s venceu em PIB per capita (%.2lf).\n", nomedacidade2, pibpercapita2);
                    } else {
                        printf("As cartas empataram em PIB per capita.\n");
                    }
    
                    resultado2 = pibpercapita1 > pibpercapita2 ? 1 : 0;
                break;
                case 7:
                    printf("\n\nVocê escolheu Superpoder!\n");
    
                    if (superpoder1 > superpoder2){
                        printf("%s é mais forte no geral então venceu (Total: %.2f).\n", nomedacidade1, superpoder1);
                    } else if (superpoder1 < superpoder2){
                        printf("%s é mais forte no geral então venceu (Total: %.2f).\n", nomedacidade2, superpoder2);
                    } else {
                        printf("As cartas empataram em superpoder.\n");
                    }
    
                    resultado2 = superpoder1 > superpoder2 ? 1 : 0;
                break;
                default:
                    printf("\n\nOpção inválida.\n");
                break;
            }
        }

    if (resultado1 && resultado2) {
        printf("\nParabéns, sua cidade ganhou nos dois atributos.\n\n");
    } else if (resultado1 != resultado2) {
        printf("\nEmpatou! Cada uma da cidade ganhou em um atributo.\n\n");
    } else {
        printf("\nInfelizmente, sua cidade não ganhou em nenhum dos dois atributos.\n\n");
    }

    return 0;
}