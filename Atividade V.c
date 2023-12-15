#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>
#define MAX_PRODUTOS 100

int i, x;
int alimento_adicionado = 0, frios_adicionado = 0, cosmeticos_adicionado = 0, total = 0;

struct produtoInfos
{
    char nome[200];
    int quantidade;
};

void menuEstoque()
{
    printf("______________________________________________\n");
    printf("||จจจจจจจจจจจจจจMENU DE ESTOQUEจจจจจจจจจจจจจ||\n");
    printf("||                                          ||\n");
    printf("|| [1] -> Adicionar produto                 ||\n");
    printf("|| [2] -> Consultar                         ||\n");
    printf("|| [3] -> Verificar Limite de Estoque       ||\n");
    printf("|| [4] -> Remover                           ||\n");
    printf("|| [5] -> Sair                              ||\n");
    printf("||__________________________________________||\n");
    printf("''จจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจ''\n");
}

void menuAdicionar()
{
    printf("___________________________________________\n");
    printf("||จจจจจจจจจจOPวีES DE ADICIONARจจจจจจจจจจ||\n");
    printf("||                                       ||\n");
    printf("|| [1] -> Adicionar novo produto         ||\n");
    printf("|| [2] -> Atualizar produto existente    ||\n");
    printf("|| [3] -> Voltar ao Menu Principal       ||\n");
    printf("||_______________________________________||\n");
    printf("''จจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจ''\n");
}

void menuAdicionarNovo()
{
    printf("___________________________________________\n");
    printf("||จจจจจจจจจจจจADICIONAR NOVOจจจจจจจจจจจจจ||\n");
    printf("||                                       ||\n");
    printf("|| [1] -> Alimentos                      ||\n");
    printf("|| [2] -> Frios                          ||\n");
    printf("|| [3] -> Cosm้ticos                     ||\n");
    printf("||_______________________________________||\n");
    printf("''จจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจ''\n");
}

void menuAtualizarExistente()
{
    printf("___________________________________________\n");
    printf("||จจจจจจADICIONAR PRODUTO EXISTENTEจจจจจจ||\n");
    printf("||                                       ||\n");
    printf("|| [1] -> Alimentos                      ||\n");
    printf("|| [2] -> Frios                          ||\n");
    printf("|| [3] -> Cosm้ticos                     ||\n");
    printf("||_______________________________________||\n");
    printf("''จจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจ''\n");
}

void menuConsultar()
{
    printf("___________________________________________\n");
    printf("||จจจจจจจจจจOPวีES DE CONSULTAจจจจจจจจจจจ||\n");
    printf("||                                       ||\n");
    printf("|| [1] -> Consultar geral                ||\n");
    printf("|| [2] -> Consultar estoque especํfico   ||\n");
    printf("|| [3] -> Voltar ao Menu Principal       ||\n");
    printf("||_______________________________________||\n");
    printf("''จจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจ''\n");
}

void menuConsultarEspecifico()
{
    printf("___________________________________________\n");
    printf("||จจจจจจCONSULTA PRODUTO ESPECอFICOจจจจจจ||\n");
    printf("||                                       ||\n");
    printf("|| [1] -> Alimentos                      ||\n");
    printf("|| [2] -> Frios                          ||\n");
    printf("|| [3] -> Cosm้ticos                     ||\n");
    printf("||_______________________________________||\n");
    printf("''จจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจ''\n");
}

void menuSeparar()
{
    printf("_____________________________________________\n");
    printf("||จจจจจจจจจจจOPวีES DE SEPARAวรOจจจจจจจจจจจ||\n");
    printf("||                                         ||\n");
    printf("|| [1] -> Alimentos                        ||\n");
    printf("|| [2] -> Frios                            ||\n");
    printf("|| [3] -> Cosm้ticos                       ||\n");
    printf("||_________________________________________||\n");
    printf("''จจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจ''\n\n");
};

void adicionarSeparado(int codigo)
{
    char continuar;

    fflush(stdin);

    struct produtoInfos alimento[MAX_PRODUTOS];

    struct produtoInfos frios[MAX_PRODUTOS];

    struct produtoInfos cosmeticos[MAX_PRODUTOS];

    switch (codigo)
    {
    case 1:
        for (i = 0; i < MAX_PRODUTOS; i++)
        {
            alimento_adicionado++;
            total++;

            printf("__________________________________________\n");
            printf("จจจจจจจจจจจจSEวAO DE ALIMENTOSจจจจจจจจจจจจ\n\n");
            printf("Nome do produto:\n");
            gets(alimento[i].nome);

            do
            {
                printf("Quantidade:\n(limite de 1000)\n");
                scanf("%d", &alimento[i].quantidade);

                if (alimento[i].quantidade < 0 || alimento[i].quantidade > 1000)
                {
                    printf("Quantidade Invแlida, insira novamente!\n\n");
                    x = 0;
                }
                else
                {
                    x = 1;
                }
            } while (x == 0);

            fflush(stdin);

            printf("Continuar adicionando?\n s | n\n\n");
            scanf("%c", &continuar);

            fflush(stdin);

            printf("จจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจ\n");

            if (continuar == 'n')
            {
                return 0;
            }
        }

    case 2:
        for (i = 0; i < MAX_PRODUTOS; i++)
        {
            frios_adicionado++;
            total++;

            printf("__________________________________________\n");
            printf("จจจจจจจจจจจจจจSEวAO DE FRIOSจจจจจจจจจจจจจจ\n\n");
            printf("Nome do produto:\n");
            gets(frios[i].nome);

            do
            {
                printf("Quantidade:\n(limite de 1000)\n");
                scanf("%d", &frios[i].quantidade);

                if (frios[i].quantidade < 0 || frios[i].quantidade > 1000)
                {
                    printf("Quantidade Invแlida, insira novamente!\n\n");
                    x = 0;
                }
                else
                {
                    x = 1;
                }
            } while (x == 0);

            fflush(stdin);

            printf("Continuar adicionando?\n s | n\n\n");
            scanf("%c", &continuar);

            fflush(stdin);

            printf("จจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจ\n");

            if (continuar == 'n')
            {
                return 0;
            }
        }
    case 3:
        for (i = 0; i < MAX_PRODUTOS; i++)
        {
            cosmeticos_adicionado++;
            total++;

            printf("__________________________________________\n");
            printf("จจจจจจจจจจจSEวAO DE COSMษTICOSจจจจจจจจจจจจ\n\n");
            printf("\n");
            printf("Nome do produto:\n");
            gets(cosmeticos[i].nome);

            do
            {
                printf("Quantidade:\n(limite de 1000)\n");
                scanf("%d", &cosmeticos[i].quantidade);

                if (cosmeticos[i].quantidade < 0 || cosmeticos[i].quantidade > 1000)
                {
                    printf("Quantidade Invแlida, insira novamente!\n\n");
                    x = 0;
                }
                else
                {
                    x = 1;
                }
            } while (x == 0);

            fflush(stdin);

            printf("Continuar adicionando?\n (s) - Sim | (n) - Nใo\n\n");
            scanf("%c", &continuar);

            fflush(stdin);

            printf("จจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจ\n");

            if (continuar == 'n')
            {
                return 0;
            }
        }
    default:
        printf("INVมLIDO!\nRetornando ao menu...");
        break;
    }
};
void atualizarExistente(int codigo)
{
    char continuar;
    fflush(stdin);
    char atualizarNome[200];
    int atualizarQuantidade;
    struct produtoInfos alimento[MAX_PRODUTOS];
    struct produtoInfos frios[MAX_PRODUTOS];
    struct produtoInfos cosmeticos[MAX_PRODUTOS];

    switch (codigo)
    {
    case 1:
        do
        {
            printf("______________________________\n");
            printf("           ALIMENTOS           \n\n");
            printf("จจจจจจจจจจจจจจจจจจจจจจจจจจจจจจ\n");
            printf("\n");
            printf("----alimento adicionados---- %d\n\n", alimento_adicionado);
            for (i = 1; i < alimento_adicionado + 1; i++)
            {
                printf("Alimento %d: %s - %d Em Estoque\n", i, alimento[i].nome, alimento[i].quantidade);
            }
            printf("Digite o nome do produto a ser atualizado: ");
            gets(atualizarNome);
            for (i = 0; i < MAX_PRODUTOS; i++)
            {
                if (strcmp(atualizarNome, alimento[i].nome) == 0)
                {
                    printf("Quantidade que deseja alterar:\n|NEGATIVOS para retirar|\n|POSITIVOS para adicionar|\n\n->");
                    scanf("%d", &atualizarQuantidade);
                    fflush(stdin);
                    alimento[i].quantidade += atualizarQuantidade;
                    break;
                }
            }
            printf("Continuar Atualizando Outros Alimentos?\n (s) - Sim | (n) - Nใo \n\n");
            scanf("%c", &continuar);
            fflush(stdin);
        } while (continuar == 's');
        return;
    case 2:
        do
        {
            printf("______________________________\n");
            printf("            FRIOS              \n\n");
            printf("จจจจจจจจจจจจจจจจจจจจจจจจจจจจจจ\n");
            printf("\n");
            printf("----Frios adicionados---- %d\n\n", frios_adicionado);
            for (i = 1; i < frios_adicionado + 1; i++)
            {
                printf("Frio %d: %s - %d Em Estoque\n", i, frios[i].nome, frios[i].quantidade);
            }
            printf("Digite o nome do produto a ser atualizado: ");
            gets(atualizarNome);
            for (i = 0; i < MAX_PRODUTOS; i++)
            {
                if (strcmp(atualizarNome, frios[i].nome) == 0)
                {
                    printf("Quantidade que deseja alterar:\n|NEGATIVOS para retirar|\n|POSITIVOS para adicionar|\n\n->");
                    scanf("%d", &atualizarQuantidade);
                    fflush(stdin);
                    frios[i].quantidade += atualizarQuantidade;
                    break;
                }
            }
            printf("Continuar Atualizando Outros Frios?\n (s) - Sim | (n) - Nใo\n\n");
            scanf("%c", &continuar);
            
            fflush(stdin);
        } while (continuar == 's');
        return;
    case 3:
        do
        {

            printf("______________________________\n");
            printf("         COSMษTICOS           \n\n");
            printf("จจจจจจจจจจจจจจจจจจจจจจจจจจจจจจ\n");
            printf("\n");
            printf("cosmeticos adicionados %d", cosmeticos_adicionado);
            for (i = 1; i < cosmeticos_adicionado + 1; i++)
            {
                printf("Cosmeticos %d: %s - %d Em Estoque\n", i, cosmeticos[i].nome, cosmeticos[i].quantidade);
            }
            printf("Digite o nome do produto a ser atualizado: ");
            gets(atualizarNome);
            for (i = 0; i < MAX_PRODUTOS; i++)
            {
                if (strcmp(atualizarNome, cosmeticos[i].nome) == 0)
                {
                    printf("Quantidade que deseja alterar:\n|NEGATIVOS para retirar|\n|POSITIVOS para adicionar|\n\n->");
                    scanf("%d", &atualizarQuantidade);
                    fflush(stdin);
                    cosmeticos[i].quantidade += atualizarQuantidade;
                    break;
                }
            }
            printf("Continuar Atualizando Outros Cosmeticos?\n (s) - Sim | (n) - Nใo \n\n");
            scanf("%c", &continuar);
            fflush(stdin);
        } while (continuar == 's');
        return;
    default:
        printf("INVมLIDO!\nRetornando ao menu...");
        break;
    }
};
void removerProduto(char confirmar)
{
    fflush(stdin);
    char continuar;
    struct produtoInfos alimento[MAX_PRODUTOS];
    struct produtoInfos frios[MAX_PRODUTOS];
    struct produtoInfos cosmeticos[MAX_PRODUTOS];

    switch (confirmar)
    {
    case 's':
        do
        {
            char remover[200];
            int encontrado = 0;

            printf("__________________________________________\n");
            printf("จจจจจจจจจจจจSEวรO REMOVER ITEMจจจจจจจจจจจจ\n\n");
            printf("\n");
            printf("Confirma remover algum Item?\n(Para isso, digite um item qualquer de alguma categoria!)\n\n");
            fgets(remover, sizeof(remover), stdin);

            for (i = 0; i < MAX_PRODUTOS; i++)
            {
                if (strcmp(remover, alimento[i].nome) == 0)
                {
                    encontrado = 1;
                    alimento[i] = alimento[alimento_adicionado - 1];
                    alimento_adicionado--;
                }
                if (strcmp(remover, frios[i].nome) == 0)
                {
                    encontrado = 1;
                    frios[i] = frios[frios_adicionado - 1];
                    frios_adicionado--;
                }
                if (strcmp(remover, cosmeticos[i].nome) == 0)
                {
                    encontrado = 1;
                    cosmeticos[i] = cosmeticos[cosmeticos_adicionado - 1];
                    cosmeticos_adicionado--;
                }
            }
            if (!encontrado)
            {
                printf("'%s' removido da lista.\n", remover);
            }

            fflush(stdin);

            printf("Continuar removendo?\n (s) - Sim | (n) - Nใo\n\n");
            scanf(" %c", &continuar);

            fflush(stdin);
        } while (continuar == 's');
        return;
        break;

    default:
        system("cls");
        printf("Voltando ao menu.\n");
        sleep(1);
        system("cls");
        printf("Voltando ao menu..\n");
        sleep(1);
        system("cls");
        printf("Voltando ao menu...\n");
        sleep(3);
        system("cls");
        return;
        break;
    }
}

void consultarLimite()
{
    int totalA = 0;
    int totalF = 0;
    int totalC = 0;

    system("cls");
    printf("Calculando estoque restante de cada categoria.\n");
    sleep(1);
    system("cls");
    printf("Calculando estoque restante de cada categoria..\n");
    sleep(1);
    system("cls");
    printf("Calculando estoque restante de cada categoria...\n");
    sleep(3);
    system("cls");

    for (i = 0; i < MAX_PRODUTOS; i++)
    {
        totalA = MAX_PRODUTOS - alimento_adicionado;
        totalF = MAX_PRODUTOS - frios_adicionado;
        totalC = MAX_PRODUTOS - cosmeticos_adicionado;
    }
    printf("Estoque restante de Alimentos: %d\n", totalA);
    printf("Estoque restante de Frios: %d\n", totalF);
    printf("Estoque restante de Cosmeticos: %d\n", totalC);
    printf("\nRetornando a tela anterior em 5 segs...");
    sleep(5);
    system("cls");
    return 0;
};
void menuConsultarGeral()
{

    printf("______________________________________________________\n");
    printf("||จจจจจจจจจจจจจจจจจจCONSULTA GERALจจจจจจจจจจจจจจจจจจ||\n");
    printf("||                                                  ||\n");
    printf("|| -Quantidade geral em estoque: %d\n               ||\n", total);
    printf("||                                                  ||\n");
    printf("||  1. Em alimento: %d\n                            ||\n", alimento_adicionado);
    printf("||  2. Em frios: %d\n                               ||\n", frios_adicionado);
    printf("||  3. Em cosm้ticos: %d\n                          ||\n", cosmeticos_adicionado);
    printf("||                                                  ||\n");
    printf("||__________________________________________________||\n");
    printf("''จจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจ''\n");
    printf("Retorna a tela passada ap๓s 7 segs...");
    sleep(7);
    return 0;
}
void consultarProdutosEspecificos(int codigoCategoria)
{
    printf("______________________________________________________\n");
    printf("||จจจจจจจจจจจจCONSULTA PRODUTO ESPECอFICOจจจจจจจจจจจ||\n");
    printf("||                                                  ||\n");
    switch (codigoCategoria)
    {
    case 1:
        printf("|| ALIMENTO\n");
        printf("|| Quantidade em estoque de produtos: %d\n", alimento_adicionado);
        printf("||                                                  ||\n");
        break;
    case 2:
        printf("|| FRIOS\n");
        printf("|| Quantidade em estoque de produtos: %d\n", frios_adicionado);
        printf("||                                                  ||\n");
        break;
    case 3:
        printf("|| COSMETICOS\n");
        printf("|| Quantidade em estoque de produtos: %d\n", cosmeticos_adicionado);
        printf("||                                                  ||\n");
        break;
    }
    sleep(3);
    return;
};
int escolha()
{
    int escolher;
    printf("Digite a op็ao desejada:\n");
    scanf("%d", &escolher);
    return escolher;
    system("cls");
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    int opcao;
    char remov;
    int continuar = 1;
    while (continuar)
    {

        menuEstoque();
        opcao = escolha();
       
        switch (opcao)
        {
        case 1:
            system("cls");
            menuAdicionar();
            opcao = escolha();
           
            switch (opcao)
            {
            case 1:
                system("cls");
                menuAdicionarNovo();
                opcao = escolha();
                adicionarSeparado(opcao);
                break;
            case 2:
                system("cls");
                menuAtualizarExistente();
                opcao = escolha();
                atualizarExistente(opcao);
                break;
            case 3:
                break;
            }
            break;

        case 2:
            system("cls");
            menuConsultar();
            opcao = escolha();
            
            switch (opcao)
            {
            case 1:
                system("cls");
                menuConsultarGeral();
                break;
            case 2:
                system("cls");
                menuConsultarEspecifico();
                opcao = escolha();
                consultarProdutosEspecificos(opcao);
                break;
            case 3:
                break;
            }
            break;

        case 3:
            system("cls");
            consultarLimite();
            break;
        case 4:
            printf("Deseja mesmo remover o ๚ltimo produto de alguma categoria?\n(s) - Sim | (n) - Nใo\n\n");
            fflush(stdin);
            scanf("%c", &remov);
            removerProduto(remov);
            break;
        case 5:
            system("cls");
            printf("Saindo do programa.\n");
            sleep(1);
            system("cls");
            printf("Saindo do programa..\n");
            sleep(1);
            system("cls");
            printf("Saindo do programa...\n");
            sleep(1);
            continuar = 0;
            break;
        default:
            printf("Op็ใo invแlida!\nTente novamente.\n");
            break;
        }
    }

    return 0;
}
