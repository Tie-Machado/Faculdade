#include <stdio.h>

/*
Estado
Codigo Carta
Cidade
Populacao
Area
Pib
Pontos Turisticos
*/

int main (){

    char letra_estado_1, letra_estado_2;
    char codigo_carta_1 [3], nome_cidade_1 [15], codigo_carta_2 [3], nome_cidade_2 [15];
    int ponto_turistico_1, populacao_total_1, ponto_turistico_2, populacao_total_2;
    float area_total_1, pib_cidade_1, area_total_2, pib_cidade_2;
    
        printf("[ CARTA 1 ]"):

        printf("Informe a letra do estado:\n");
        scanf("%s", &letra_estado_1);

        print("Informe o codigo da carta:\n");
        scanf("%d", &codigo_carta_1);

        printf("Informe o nome da cidade:\n");
        scanf("%s", &nome_cidade_1);

        printf("Informe a população:\n");
    scanf("%d", &populacao_total_1);

    printf("Informe a Area total:\n"):
    scanf("%2.f", &area_total_1);

    printf("Informe o PIB da cidade:\n");
    scanf("2%.f", &pib_cidade_1);

    printf("Informe a quantidade de pontos turisticos:\n");
    scanf("%d", &ponto_turistico_1);

    
    printf ("[ CARTA 2 ]");

    printf("Informe a letra do estado:\n");
    scanf("%s", &letra_estado_2);

    print("Informe o codigo da carta:\n");
    scanf("%d", &codigo_carta_2);

    printf("Informe o nome da cidade:\n");
    scanf("%s", &nome_cidade_2);

    printf("Informe a população:\n");
    scanf("%d", &populacao_total_2);

    printf("Informe a Area total:\n"):
    scanf("%2.f", &area_total_2);

    printf("Informe o PIB da cidade:\n");
    scanf("2%.f", &pib_cidade_2);

    printf("Informe a quantidade de pontos turisticos:\n");
    scanf("%d", &ponto_turistico_2);


    printf("Carta 1:\n");
    printf("Estado:%s\n", letra_estado_1);
    printf("Codigo:%d\n",codigo_carta_1);
    printf("Cidade:%s\n",nome_cidade_1);
    printf("População:%d\n",populacao_total_1);
    printf("Area:%2.f\n",area_total_1);
    printf("PIB:%2.f\n",pib_cidade_1);
    printf("Pontos turisticos:%d\n\n", ponto_turistico_1);


    printf("Carta 2:\n");
    printf("Estado:%s\n", letra_estado_2);
    printf("Codigo:%d\n",codigo_carta_2);
    printf("Cidade:%s\n",nome_cidade_2);
    printf("População:%d\n",populacao_total_2);
    printf("Area:%2.f\n",area_total_2);
    printf("PIB:%2.f\n",pib_cidade_2);
    printf("Pontos turisticos:%d\n", ponto_turistico_2);

    return 0;
}