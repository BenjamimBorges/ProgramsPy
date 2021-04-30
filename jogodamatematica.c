#include <stdio.h>

float a, b, r;

void entrada ()
{
    printf ("Digite o primeiro valor: ");
    scanf ("%f", &a);
    printf ("Digite o segundo valor: ");
    scanf ("%f", &b);
}
void saida ()
{
    printf ("O resultado da operacao escolhida foi de: %f\n", r);
}
void subtracao ()
{
    entrada();
    printf ("-------------------------------\n\n");
    r = a - b;
    saida();
}
void adicao ()
{
    entrada();
    printf ("-------------------------------\n\n");
    r = a + b;
    saida();
}
void divisao ()
{
    entrada();
    printf ("-------------------------------\n\n");
    if (b==0)
    {
        printf ("O numero requerido nao pode e impossivel de dividir!\n\n");
    }
    else
    {
        r = a / b;
    }
    saida();
}
void multiplicacao ()
{
    entrada();
    printf ("-------------------------------\n\n");
    r = a * b;
    saida();
}
int main ()
{
    printf ("---------------------------------------------\n");
    printf ("|      BEM VINDO A CALCULADORA SIMPLES      |\n");
    printf ("|      Autor: Andre Freitas                 |\n");
    printf ("---------------------------------------------\n");
    printf ("Escolha a operacao em que desejas trabalhar:\n\n");
    printf ("1-----------Multiplicacao\n");
    printf ("2-----------Divisao\n");
    printf ("3-----------Adicao\n");
    printf ("4-----------Subtracao\n");
    int opcao;
    printf ("\n\nQual queres escolher: ");
    scanf ("%i", &opcao);
    switch (opcao)
    {
        case 1 :
                multiplicacao();
                break;
        case 2 :
                divisao();
                break;
        case 3 :
                adicao();
                break;
        case 4 :
                subtracao();
                break;
        default:
                printf ("Opcao invalida!");
                printf ("\n");
                break;

    }
    return 0;
}
