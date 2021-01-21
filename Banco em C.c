#include <stdio.h>

int main()
{
    int senha, opcao, valor;
    
    printf("Seja bem vindo ao AJ-Banking\n");
    printf("\n");
    printf("Por favor digite a sua senha para acessar a sua conta\n");
    scanf("%i", &senha);
    if(senha != 1234)
    {
        printf("Senha inválida!");
    }
    else
    {
        printf("\n");
        printf("Escolha o que você deseja fazer:\n");
        printf("1-Saque\n2-Extrato\n");
        scanf("%i", &opcao);
        switch(opcao)
        {
            case 1:
            printf("\n");
            printf("Por favor digite sua senha novamente:\n");
            scanf("%i", &senha);
    if(senha != 1234)
    {
        printf("\n");
        printf("Senha inválida!");
    }
    else
    {
        printf("\n");
        printf("informe o valor a ser sacado\n");
        scanf("%i", &valor);
        if(valor <= 600)
        {
        printf("Seu saque no valor de: %iR$ poderá ser retirado embreve.", valor);
        }
        else
        {
        printf("valor inválido");
        }
    }
            break;
            case 2:
            printf("\n");
            printf("Seu extrato é de: 600R$");
            break;
            default:
            printf("\n");
            printf("Inválido");
            break;
        }
    }
    return 0;
}