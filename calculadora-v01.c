#include <stdio.h>

void printresultado(float val1, char op, float val2, float res)
{
    printf("\n---------- Calculadora ----------\n");
    printf("- %.1f %c %.1f = %.1f               -\n",val1,op,val2,res);
    printf("---------------------------------\n");

}

float operacaomais(float val1, float val2) //caga pra isso, só tava testando a funcao de print
{
    float resul = 0;

    resul = val1 + val2;

    return resul;
}

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

    if(operacao = '+') //só pra teste, pode deletar pra colocar switch e tals
    {
        resultado = operacaomais(v1,v2);
    }

    printresultado(v1,operacao,v2,resultado);

    return 0;
}