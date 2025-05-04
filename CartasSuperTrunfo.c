#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    char estado1, estado2;
    char codigoCarta1[10],codigoCarta2[10];
    char nomeCidade1[10],nomeCidade2[10];
    int populacao1,populacao2;
    float area1,area2;
    float pib1,pib2;
    int pontosTuristicos1,pontosTuristicos2;
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    printf("Digite o Estado da Carta 1: \n");
    scanf ("%c", &estado1);

    printf("Digite o Código da Carta 1: \n");
    scanf ("%s", &codigoCarta1);

    printf("Digite o Nome da Cidade 1: \n");
    scanf("%s", &nomeCidade1);

    printf("Digite a quantidade da População 1: \n");
    scanf("%d", &populacao1);

    printf("Digite o valor da area 1: \n");
    scanf("%f", &area1);

    printf("Digite o valor do pib 1: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turisticos 1: \n");
    scanf("%d", &pontosTuristicos1);

    printf("Digite o nome do estado 2: \n");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta 2: \n");
    scanf ("%s", &codigoCarta2);
    
    printf("Digite o nome da cidade 2: \n");
    scanf("%s", &nomeCidade2);

    printf("Digite a quantidade da populaçao 2: \n");
    scanf("%d", &populacao2);

    printf("Digite o valor da area 2: \n");
    scanf("%f", &area2);

    printf("Digite o valor do pib 2: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos 2: \n");
    scanf("%d", &pontosTuristicos2);

    densidade1 = populacao1/area1;
    densidade2 = populacao2/area2;

    pibPerCapita1 = pib1/populacao1;
    pibPerCapita2 = pib2/populacao2;

    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 - densidade1;
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 - densidade2;

    printf("Carta 1: \n");
    printf("Estado: %c \n", estado1);
    printf("Codigo: %s \n" , codigoCarta1);
    printf("Nome da Cidade: %s \n", nomeCidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1 );
    printf("Número de Pontos Turísticos: %d \n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade1);
    printf("PIB per Capita: %.2f reais \n", pibPerCapita1);

    printf("Carta 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Codigo: %s \n" , codigoCarta2);
    printf("Nome da Cidade: %s \n", nomeCidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2 );
    printf("Número de Pontos Turísticos: %d \n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade2);
    printf("PIB per Capita: %.2f reais \n", pibPerCapita2);

    printf("Comparação de Cartas: \n");
    if(populacao1 > populacao2){
        printf("Populaçao: Carta 1 venceu (1) \n");
    } else{
        printf("Populaçao: Carta 2 venceu (0) \n");  
    }
    
    if(area1 > area2){
        printf("Área: Carta 1 venceu (1) \n");
    } else{
        printf("Área: Carta 2 venceu (0) \n");  
    }

    if(pib1 > pib2){
        printf("PIB: Carta 1 venceu (1) \n");
    } else{
        printf("PIB: Carta 2 venceu (0) \n");  
    }

    if(pontosTuristicos1 > pontosTuristicos2){
        printf("Pontos Turísticos: Carta 1 venceu (1) \n");
    } else{
        printf("Pontos Turísticos: Carta 2 venceu (0) \n");  
    }

    if(pibPerCapita1 > pibPerCapita2){
        printf("PIB per Capita: Carta 1 venceu (1) \n");
    } else{
        printf("PIB per Capita: Carta 2 venceu (0) \n");  
    }

    if((-densidade1)>(-densidade2)){
        printf("Densidade Populacional: Carta 1 venceu (1) \n");
    } else{
        printf("Densidade Populacional: Carta 2 venceu (0) \n");  
    }

    if(superPoder1 > superPoder2){
        printf("Super Poder: Carta 1 venceu (1) \n");
    } else{
        printf("Super Poder: Carta 2 venceu (0) \n");  
    }
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
