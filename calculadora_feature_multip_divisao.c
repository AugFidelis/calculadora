#include <stdio.h>

void printresultado(float val1, char op, float val2, float res);
float Somar(float x, float y);
float Subtrair(float x, float y);
float multiplicar(float x, float y);
float dividir(float x, float y);

int main()
{
    float v1,v2,resultado;
    char operacao;

    printf("Insira o primeiro valor: ");
    scanf("%f",&v1);

    printf("Insira o segundo valor: ");
    scanf("%f",&v2);

    printf("Insira a operacao a ser realizada: ");
    fflush(stdin);
    scanf("%c",&operacao);

    switch(operacao)
    {
        case '+':
            resultado = Somar(v1,v2);
            printresultado(v1,operacao,v2,resultado);
            break;
        
        case '-':
            resultado = Subtrair(v1,v2);
            printresultado(v1,operacao,v2,resultado);
            break;

        case '*':
            resultado = multiplicar(v1,v2);
            printresultado(v1,operacao,v2,resultado);
            break;

        case '/':
            resultado = dividir(v1,v2);
            printresultado(v1,operacao,v2,resultado);
            break;

        default:
            printf("\nOperacao invalida!");
            break;

    }

    return 0;
}

void printresultado(float val1, char op, float val2, float res)
{
    printf("\n---------- Calculadora ----------\n");
    printf("      (%.1f) %c (%.1f) = %.1f\n",val1,op,val2,res);
    printf("---------------------------------\n");

}

float Somar(float x, float y)
{
    float resultado;
    resultado = x + y;

    return resultado;
}

float Subtrair(float x, float y)
{
    float resultado;
    resultado = x - y;

    return resultado;
}

float multiplicar(float x, float y)
{
    float resultado;
    resultado = x * y;

    return resultado;
}

float dividir(float x, float y)
{
    float resultado;
    resultado = x / y;

    return resultado;
}