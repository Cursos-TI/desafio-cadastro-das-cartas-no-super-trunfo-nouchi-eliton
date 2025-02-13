#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // instanciando as variaveis
    int populacao, qnt_pontos_turisticos;
    double area, pib;
    double densidade, pib_per_capita;

    // armazenando os dados digitados pelo usuário nas variaveis
    printf("Digite a população: ");
    scanf("%d",&populacao);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d",&qnt_pontos_turisticos);
    printf("Digite a área: ");
    scanf("%lf",&area);
    printf("Digite o PIB: ");
    scanf("%lf",&pib);

    // calculando novas propriedades
    densidade = (double) populacao / area;
    pib_per_capita = (double) pib / populacao;

    // Exibindo os dados
    printf("Carta cadastrada com sucesso! Dados da carta: \n");
    printf("População: %d\n", populacao);
    printf("Quantidade de pontos turísticos: %d\n", qnt_pontos_turisticos);
    printf("Área: %lf \n", area);
    printf("PIB: %lf \n", pib);
    printf("Densidade populacional: %lf \n", densidade);
    printf("PIB per capita: %lf \n", pib_per_capita); 

    return 0;
}
