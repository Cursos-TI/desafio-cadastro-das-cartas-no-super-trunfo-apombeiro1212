#include <stdio.h>

        // Variáveis para os atributos da cidade e cadastramento de cartas.

        int main(){
        char estado[30];
        char codigodacarta[30];
        char nomedacidade[35];
        int populacao;
        int pontosturisticos;
        float area;
        float PIB;
        
        // Cadastro das cartas.

        printf("Cidade 1: \n"); // Exibição do número da carta.
        printf("Digite o nome do estado: \n"); 
        scanf("%s", &estado); // Entrada do usuário para o nome do Estado.

        printf("Digite o código da carta: \n"); 
        scanf("%s", &codigodacarta); // Entrada do usuário para o código da carta.

        printf("Digite o nome da cidade: \n"); 
        scanf("%s", &nomedacidade); //Entrada do usuário para o nome da cidade.

        printf("Digite a população: \n");
        scanf("%d", &populacao); // Entrada do usuário para o número de habitantes da cidade.

        printf("Digite a Área (em km²): \n");
        scanf("%f", &area); // Entrada do usuário para o tamanho da área (km²)

        printf("Digite o PIB do estado: \n");
        scanf("%f", &PIB); // Entrada do usuário para o valor do PIB da cidade.

        printf("Digite a quantidade de pontos turísticos: \n"); 
        scanf("%d", &pontosturisticos); // Entrada do usuário para o número de pontos turísticos.

        // Exibição dos Dados da Carta.
        // Informações das cartas cadastradas.
        // Exibição dos valores inseridos para cada atributo da cidade, um por linha.
        
        printf("Cidade da carta 1: \n");
        printf("Nome do estado: %s\n", estado);
        printf("Código da carta: %s\n", codigodacarta);
        printf("Nome da cidade: %s\n", nomedacidade);
        printf("População: %d\n", populacao);
        printf("Tamanho do território em km²: %2.f\n", area);
        printf("Tamanho do PIB: %2.f\n", PIB);
        printf("Número de pontos turísticos: %d\n", pontosturisticos);

        return 0;
    }