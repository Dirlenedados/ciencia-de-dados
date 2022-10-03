#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    /*
    Usuario GitHub: Dirlene_dados

    O codigo abaixo cria uma calculadora, onde o usuário escolhe as operações desejadas .
    primeiro o usuário escolhe a opreação (linha 27) e  depois esolhe os numeros que deve digitar para fazer os calculos
    foi cuidado para verificar se o divisor não é zero para evitar um erro de execução (linha 52)
    A linha 82 exibe o resultado das operações
     .
    */

    int operacao;
    float n1, n2, resultado;

    printf("      \n Aluna Dirlene Melo Santa Maria\n");
    printf("      \n curso: Ciencia de dados\n");
    printf("      \n Matricula: 202213225\n");
    printf("      \n Universidade La Salle\n\n\n");
    printf("                      Vamos Calcular??\n\n");

            do
        {
            printf("\  Selecione a operacao desejada:\n\n");
            printf("\n 1= Adicao\n 2= Subtracao\n 3= Divisao\n 4= Multiplicacao\n 5= Raiz quadrada\n 6= Potenciacao\n\n");

            scanf("%d", &operacao);

            if(operacao > 6 || operacao < 1)
            {
                printf("\n\nCUIDADO !! Valor invalido, digite um valor válido.\n\n");
            }
        } while(operacao > 6 || operacao < 1);

        if (operacao == 5)
        {
            printf("\nDigite o valor a ser usado na raiz quadrada: ");
            scanf("%f", &n1);
        }
        else
        {
            do
            {
                printf("\nEscolha o primeiro valor para a operacao: ");
                scanf("%f", &n1);
                printf("\nEscolha o segundo valor para a operacao: ");
                scanf("%f", &n2);

                if (operacao == 3 && n2 == 0)
                {
                    printf("\CUIDADO !! Nao e possivel dividir nenhum valor por 0, tente novamente.\n");
                }
            } while(operacao == 3 && n2 == 0);
        }

        switch(operacao)
        {
            case 1:
                resultado = n1+n2;
                break;
            case 2:
                resultado = n1-n2;
                break;
            case 3:
                resultado = n1/n2;
                break;
            case 4:
                resultado = n1*n2;
                break;
            case 5:
                resultado = sqrt(n1);
                break;
            case 6:
                resultado = pow(n1, n2);
                break;
        }

        printf("\nO resultado da operacao : %.01f \n\n", resultado);
        printf("\nFoi otimo calcular com voce\n\n");
        }
