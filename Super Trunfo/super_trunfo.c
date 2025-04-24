#include <stdio.h>

int main (){

    char letra_estado_1[3], letra_estado_2[3];
    char codigo_carta_1[5], codigo_carta_2 [5];
    char nome_cidade_1 [15], nome_cidade_2 [15];
    int ponto_turistico_1, ponto_turistico_2;
    int populacao_total_1, populacao_total_2;
    int area_total_1, area_total_2;
    int pib_cidade_1, pib_cidade_2;
    
    printf("[ CARTA 1 ]\n\n");
    printf("Informe a letra do estado: \n"), scanf("%s", &letra_estado_1);
    printf("Informe o codigo da carta: \n"), scanf("%s", &codigo_carta_1);
    printf("Informe o nome da cidade: \n"), scanf("%s", &nome_cidade_1);
    printf("Informe a população: \n"), scanf("%d", &populacao_total_1);
    printf("Informe a Area total:\n"), scanf("%d", &area_total_1);
    printf("Informe o PIB da cidade:\n"), scanf("%d", &pib_cidade_1);
    printf("Informe a quantidade de pontos turisticos:\n"), scanf("%d", &ponto_turistico_1);

    printf("[ CARTA 2 ]\n\n");
    printf("Informe a letra do estado: \n"), scanf("%s", &letra_estado_2);
    printf("Informe o codigo da carta: \n"), scanf("%s", &codigo_carta_2);
    printf("Informe o nome da cidade: \n"), scanf("%s", &nome_cidade_2);
    printf("Informe a população: \n"), scanf("%d", &populacao_total_2);
    printf("Informe a Area total:\n"), scanf("%d", &area_total_2);
    printf("Informe o PIB da cidade:\n"), scanf("%d", &pib_cidade_2);
    printf("Informe a quantidade de pontos turisticos:\n"), scanf("%d", &ponto_turistico_2);

    printf("Preparando as cartas ... \n\n\n");

    printf("[ CARTA 1 ]\n\n");
    printf("Estado:%s \n", letra_estado_1);
    printf("Codigo:%s \n",codigo_carta_1);
    printf("Cidade:%s \n",nome_cidade_1);
    printf("População:%d \n",populacao_total_1);
    printf("Area:%d \n",area_total_1);
    printf("PIB:%d \n",pib_cidade_1);
    printf("Pontos turisticos:%d \n\n", ponto_turistico_1);

    printf("[ CARTA 2 ]\n\n");
    printf("Estado:%s \n", letra_estado_2);
    printf("Codigo:%s \n",codigo_carta_2);
    printf("Cidade:%s \n",nome_cidade_2);
    printf("População:%d \n",populacao_total_2);
    printf("Area:%d \n",area_total_2);
    printf("PIB:%d \n",pib_cidade_2);
    printf("Pontos turisticos:%d \n\n", ponto_turistico_2);

    printf("Fim do programa! \n\n");
    return 0;
}