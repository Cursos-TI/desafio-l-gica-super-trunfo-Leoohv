#include <stdio.h>
// declarando variaveis
// card1

char state;
char codigo[4];
char city[20];
unsigned long int pop = 1;
float km = 1;
float pib = 1;
int tourist = 1;

// declarando variaveis
// card2

char state2;
char codigo2[4];
char city2[20];
unsigned long int pop2 = 1; 
float km2 = 1;
float pib2 = 1;
int tourist2 = 1;

// variáveis calculadas cards
float densidadePopulacional;
float densidadePopulacional2;
float pibCapita;
float pibCapita2;

// variaveis para comparação
int powerCard1 = 0;
int powerCard2 = 0;


void entradaDados()
{
    //  dados card1
    printf("Qual a inicial do  estado da primeira carta?)    \n ");
    scanf(" %c", &state);

    printf("Qual codigo da primeira carta(ex:A01...)?     \n ");
    scanf(" %s", codigo);

    printf("Qual nome da primeira cidade?(o nome não pode ser composto)\n");
    scanf(" %s", city);

    printf("Qual a populacao de %s?\n", city);
    scanf("%lu", &pop);

    printf("A área de %s em KM quadrados é?\n", city);
    scanf("%f", &km);

    printf("Qual pib de %s ?\n", city);
    scanf("%f", &pib);

    printf("Quantos pontos turstico %s tem?\n", city);
    scanf("%d", &tourist);

    // dados card 2

    printf("Qual a inicial do  estado da segunda carta?)    \n ");
    scanf(" %c", &state2);

    printf("Qual codigo da segunda carta(ex:A02...)?     \n ");
    scanf(" %s", codigo2);

    printf("Qual nome da segunda cidade?(o nome não pode ser composto)\n");
    scanf(" %s", city2);

    printf("Qual a populacao de %s?\n", city2);
    scanf("%lu", &pop2);

    printf("A área de %s em KM quadrados é?\n", city2);
    scanf("%f", &km2);

    printf("Qual pib de %s ?\n", city2);
    scanf("%f", &pib2);

    printf("Quantos pontos turstico %s tem?\n", city2);
    scanf("%d", &tourist2);
}

void calcDensisadade()
{
    // calculando densidade card
    densidadePopulacional = pop / km;
    densidadePopulacional2 = pop2 / km2;
}
void calcPibPer()
{
    // calculando  per capita  card
    pibCapita = pib / pop;
    pibCapita2 = pib2 / pop2;
}

void mostrandoDados()
{
    // mostrando dados Card1 e card2
    printf("Carta 1:\n");
    printf("Estado: %c\n", state);
    printf("Codigo: %s\n", codigo);
    printf("Nome da cidade: %s\n", city);
    printf("Populacao: %lu \n", pop);
    printf("Área: %.2f km2 \n", km);
    printf("PIB: %.2f bilhoes de reais \n", pib);
    printf("Numero de pontos turisticos: %d\n", tourist);
    printf("Densidade Populacional: %.2f \n", densidadePopulacional);
    printf("Pib per Capita: %.2f\n\n\n", pibCapita);

    printf("Carta 2:\n");
    printf("Estado: %c\n", state2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", city2);
    printf("Populacao: %lu\n", pop2);
    printf("Área: %.2f km2\n", km2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de pontos turisticos: %d\n", tourist2);
    printf("Densidade Populacional: %.2f \n", densidadePopulacional2);
    printf("Pib per Capita: %.2f\n", pibCapita2);
}

void comparacaoCards()
{
    // comparação entre os cards

    // populacao
    if (pop > pop2)
    {
        powerCard1++;
    }
    else if (pop2 > pop)
    {
        powerCard2++;
    }
    // area
    if (km > km2)
    {
        powerCard1++;
    }
    else if (km2 > km)
    {
        powerCard2++;
    }
    // pib
    if (pib > pib2)
    {
        powerCard1++;
    }
    else if (pib2 > pib)
    {
        powerCard2++;
    }
    // pontos turisticos
    if (tourist > tourist2)
    {
        powerCard1++;
    }
    else if (tourist2 > tourist)
    {
        powerCard2++;
    }
    // desindade populacional (desindade populacional menor ira ganhar!)
    if (densidadePopulacional > densidadePopulacional2)
    {
      powerCard2++;
    }else if (densidadePopulacional2 > densidadePopulacional){
        powerCard1++;
    }
 
    // pib per capita 

    if(pibCapita > pibCapita2){
        powerCard1++;
    }else if(pibCapita2 > pibCapita){
        powerCard2++;   
}
}
void mostrandoDadosComparacao(){
    printf("Aqui está a comparacao de poder entre as cartas:\n\n\n");
    printf("Card 1 tem %d pontos\n", powerCard1);
    printf("Card 2 tem %d pontos\n", powerCard2);

    if(powerCard1 > powerCard2){
        printf("Card 1 é o vencedor!\n");
    }else if(powerCard2 > powerCard1){
        printf("Card 2 é o vencedor!\n");
    }else
        printf("Os cards estão empatados!\n");
    
}
int main()
{
    entradaDados();
    calcDensisadade();
    calcPibPer();
    mostrandoDados();
    comparacaoCards();
    mostrandoDadosComparacao();
    printf("Fim do programa...e até a proxima!\n");
    return 0;
}
