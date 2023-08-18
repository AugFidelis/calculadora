#include <stdio.h>
#include <stdlib.h>

void printresultado(float val1, char op, float val2, float res);
float somar(float x, float y);
float subtrair(float x, float y);
float multiplicar(float x, float y);
float dividir(float x, float y);

int main()
{
    float v1,v2,resultado;
    char operacao;

    do{
    printf("Insira o primeiro valor: ");
    scanf("%f",&v1);

    printf("Insira o segundo valor: ");
    scanf("%f",&v2);

    printf("Insira a operacao a ser realizada: ");
    fflush(stdin);
    scanf("%c",&operacao);

    system("cls");
    
    switch(operacao)
    {
        case '+':
            resultado = somar(v1,v2);
            printresultado(v1,operacao,v2,resultado);
            break;
        
        case '-':
            resultado = subtrair(v1,v2);
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
            printf("Operacao invalida!\n\n");
            break;

        }
    }while(operacao != '+' && operacao != '-' && operacao != '*' && operacao != '/');

    return 0;
}

void printresultado(float val1, char op, float val2, float res)
{
    printf("---------- Calculadora ----------\n\n");
    printf("       (%.1f) %c (%.1f) = %.1f\n",val1,op,val2,res);
    printf("\n---------------------------------\n");

}

float somar(float x, float y)
{
    float resultado;
    resultado = x + y;

    return resultado;
}

float subtrair(float x, float y)
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