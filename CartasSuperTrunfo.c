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
    int populaçao1,populaçao2;
    float area1,area2;
    float pib1,pib2;
    int pontosTuristicos1,pontosTuristicos2;

    printf("Digite o estado da carta 01: \n");
    scanf ("%c", &estado1);

    printf("Digite o codigo da carta 01: \n");
    scanf ("%s", &codigoCarta1);

    printf("Digite o nome da cidade 01: \n");
    scanf("%s", &nomeCidade1);

    printf("Digite o nome da populaçao 01: \n");
    scanf("%d", &populaçao1);

    printf("Digite o nome da area 01: \n");
    scanf("%f", &area1);

    printf("Digite o nome do pib 01: \n");
    scanf("%f", &pib1);

    printf("Digite o nome dos pontos turisticos 01: \n");
    scanf("%d", &pontosTuristicos1);



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
