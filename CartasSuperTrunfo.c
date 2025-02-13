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
    unsigned long int populacao;
    int qnt_pontos_turisticos;
    float area, pib, super_poder;
    float densidade, pib_per_capita;
    char estado;
    char cod_carta[5];
    char nome_cidade[20];

    // armazenando os dados digitados pelo usuário nas variaveis
    printf("Cadastre a primeira carta\n");
    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade);
    printf("Digite o codigo da carta: ");
    scanf("%s", cod_carta);
    printf("Digite a primeira letra do estado: ");
    scanf(" %c",&estado);
    printf("Digite a população: ");
    scanf("%lu",&populacao);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d",&qnt_pontos_turisticos);
    printf("Digite a área: ");
    scanf("%f",&area);
    printf("Digite o PIB: ");
    scanf("%f",&pib);
    
    // calculando novas propriedades
    densidade = (float) populacao / area;
    pib_per_capita = (float) pib / populacao;
    super_poder = (float) populacao + qnt_pontos_turisticos + area + pib - densidade + pib_per_capita;

    // Exibindo os dados
    printf("Carta cadastrada com sucesso!\n Dados da carta: \n");
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("Codigo da carta: %s\n", cod_carta);
    printf("Estado: %c\n", estado);
    printf("População: %lu\n", populacao);
    printf("Quantidade de pontos turísticos: %d\n", qnt_pontos_turisticos);
    printf("Área: %f \n", area);
    printf("PIB: %f \n", pib);
    printf("Densidade populacional: %f \n", densidade);
    printf("PIB per capita: %f \n", pib_per_capita); 
    printf("Super poder: %f \n", super_poder); 

    unsigned long int populacao2;
    int qnt_pontos_turisticos2;
    float area2, pib2, super_poder2;
    float densidade2, pib_per_capita2;
    char estado2;
    char cod_carta2[5];
    char nome_cidade2[20];

    // armazenando os dados digitados pelo usuário nas variaveis
    printf("\n\n");
    printf("Cadastre a segunda carta\n");
    printf("Digite o nome da cidade: ");
    scanf("%s",nome_cidade2);
    printf("Digite o codigo da carta: ");
    scanf("%s",cod_carta2);
    printf("Digite a primeira letra do estado: ");
    scanf(" %c",&estado2);
    printf("Digite a população: ");
    scanf("%lu",&populacao2);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d",&qnt_pontos_turisticos2);
    printf("Digite a área: ");
    scanf("%f",&area2);
    printf("Digite o PIB: ");
    scanf("%f",&pib2);

    // calculando novas propriedades
    densidade2 = (float) populacao2 / area2;
    pib_per_capita2 = (float) pib2 / populacao2;
    super_poder2 = (float) populacao2 + qnt_pontos_turisticos2 + area2 + pib2 - densidade2 + pib_per_capita2;

    // Exibindo os dados
    printf("Carta cadastrada com sucesso!\n Dados da carta: \n");
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("Codigo da carta: %s\n", cod_carta2);
    printf("Estado: %c\n", estado2);
    printf("População: %lu\n", populacao2);
    printf("Quantidade de pontos turísticos: %d\n", qnt_pontos_turisticos2);
    printf("Área: %f \n", area2);
    printf("PIB: %f \n", pib2);
    printf("Densidade populacional: %f \n", densidade2);
    printf("PIB per capita: %f \n", pib_per_capita2); 
    printf("Super poder: %f \n", super_poder2); 

    printf("\n*** COMPARACAO ENTRE AS DUAS CARTAS ***\n");
    printf("Vencedor na propriedade populacao: %d\n", populacao > populacao2);
    printf("Vencedor na propriedade quantidade de pontos turisticos: %d\n", qnt_pontos_turisticos > qnt_pontos_turisticos2);
    printf("Vencedor na propriedade area: %d\n", area > area2);
    printf("Vencedor na propriedade PIB: %d\n", pib > pib2);
    printf("Vencedor na propriedade densidade populacional: %d\n", densidade < densidade2);
    printf("Vencedor na propriedade PIB per capita: %d\n", pib_per_capita > pib_per_capita2);
    printf("Vencedor na propriedade super poder: %d\n", super_poder > super_poder2);


    return 0;
}
