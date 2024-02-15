#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

char login[20];
char senha[20];
char conectado;
int opcaomenu;
int opcaoinseririndustria;
int opcaoinserirdescarte;
int opcaorelatoriozona;
void inseririndustria();
void inserirdescarte ();
void relatorioindiv();
void relatoriozona();

int main(void)
{
    setlocale (LC_ALL, "Portuguese");            //Definição para uso da Lingua Portuguesa com acentuação
    char loginA[10] = "adm";
    char senhaA[10] = "1234";
    printf("\n\t\t=============================================\n");
    printf("\t\t Sistema para Startup de Soluções Ambientais\n");
    printf("\t\t=============================================\n\n");
    printf("Efetuar Login e Senha\n\n");
    printf("Login: ");
    scanf("%s",&login);
    if (strcmp (loginA, login) == 0)
    {
        printf("\nSenha: ");
        scanf("%s",&senha);
        if (strcmp (senhaA, senha) == 0)
        {
            printf("\nConectado");
            conectado = 'S';
        }
        else
        {
            printf("Senha inválida");
            return main();
        }
        }
        else
        {
            printf("Login inválido");
            return main();
        }
        system("cls");    //Realiza a limpeza do sistema, para deixar com menos informação na tela e segue para o Menu Principal}

        if (conectado == 'S')
{
    fflush(stdin);
    printf("\n\t\t\t================\n");
    printf("\t\t\t Menu Principal\n");
    printf("\t\t\t================\n\n\n");
    printf("\tEscolha a opção desejada conforme os números e tecle ENTER \n\n");
    printf("1 - Cadastro de indústrias\n\n");
    printf("2 - Registro de descartes\n\n");
    printf("3 - Relatório individual\n\n");
    printf("4 - Relatório por zona\n\n");
    printf("0 - Sair do sistema\n\n");
    scanf("%d", &opcaomenu);
}
switch (opcaomenu)
{
case 1: inseririndustria();
    break;

case 2: inserirdescarte();
    break;

case 3: relatorioindiv();
    break;

case 4: relatoriozona();
    break;

case 0:
    system ("cls");
    printf("Desconectou-se");

default:
    printf("\n\nOpção inválida");
    return main();
}
}
void inseririndustria(void)
{
    char nomefantasia, razaosocial, cnpj, endereco, telefone, email, ramoatividade, regiao, respemp, respcargo, resptelefone;
    system("cls");
    fflush(stdin);
    FILE *pArquivoIndus;                                            //Instrução para criação de um arquivo
    pArquivoIndus=(fopen("industrias.txt", "a"));                   //Abrindo o arquivo
    printf("\n\t\t=====Cadastro de indústrias=====\n\n");
    printf("Nome fantasia: ");
    scanf("%s", &nomefantasia);
    fprintf(pArquivoIndus, "Nome fantasia: %s \n", &nomefantasia);  //Utilizar o comando "fprintf" para escrever a String no arquivo
    printf("\nRazão Social: ");
    scanf("%s", &razaosocial);
    fprintf(pArquivoIndus, "Razão Social: %s \n", &razaosocial);
    printf("\nCNPJ: ");
    scanf("%s", &cnpj);
    fprintf(pArquivoIndus, "CNPJ: %s \n", &cnpj);
    printf("\nEndereço: ");
    scanf("%s", &endereco);
    fprintf(pArquivoIndus, "Endereço: %s \n", &endereco);
    printf("\nTelefone: ");
    scanf("%s", &telefone);
    fprintf(pArquivoIndus, "Telefone: %s \n", &telefone);
    printf("\nE-mail: ");
    scanf("%s", &email);
    fprintf(pArquivoIndus, "E-mail: %s \n", &email);
    printf("\nRamo de atividade: ");
    scanf("%s", &ramoatividade);
    fprintf(pArquivoIndus, "Ramo de atividade: %s \n", &ramoatividade);
    printf("\nRegião: ");
    scanf("%s", &regiao);
    fprintf(pArquivoIndus, "Região: %s \n", &regiao);
    printf("\nResponsável pela empresa: ");
    scanf("%s", &respemp);
    fprintf(pArquivoIndus, "Responsável pela empresa: %s \n", &respemp);
    printf("\nCargo do responsável: ");
    scanf("%s", &respcargo);
    fprintf(pArquivoIndus, "Cargo do responsável: %s \n", &respcargo);
    printf("\nTelefone do responsável: ");
    scanf("%s", &resptelefone);
    fprintf(pArquivoIndus, "Telefone do responsável: %s \n\n", &resptelefone);
    fclose(pArquivoIndus);                                                    //Fechando o arquivo aberto
    printf("Dados gravados com sucesso!\n\n");
    printf("Digite a opção que deseja fazer agora:\n 1-Cadastrar mais indústrias     2-Sair\n");
    scanf("%d", &opcaoinseririndustria);

    switch (opcaoinseririndustria)
    {
        case 1:
            system("cls");
            return inseririndustria();
            break;

        case 2:
            return;

        default:
            printf("\n\nOpção inválida");
            return;
    }

}
void inserirdescarte(void)
{
    char nomeindustriadesc, mesdesc, anodesc;
    float aluminio, aluminiovalor, totalaluminio, plastico, plasticovalor, totalplastico, sucata, sucatavalor, totalsucata;
    system("cls");
    fflush(stdin);
    FILE *pArquivoDesc;
    pArquivoDesc=(fopen("descartes.txt", "a"));
    printf("\n\t\t=====Registro de descartes=====\n\n");
    printf("Nome fantasia da indústria: ");
    scanf("%s", &nomeindustriadesc);
    fprintf(pArquivoDesc, "Indústria: %s \n", &nomeindustriadesc);
    printf("\nMês de registro do descarte: ");
    scanf("%s", &mesdesc);
    fprintf(pArquivoDesc, "Mes de registro do descarte: %s \n", &mesdesc);
    printf("\nAno de registro do descarte: ");
    scanf("%s", &anodesc);
    fprintf(pArquivoDesc, "Ano de registro do descarte: %s \n\n", &anodesc);
    printf("\nAlumínio em quilos: ");
    scanf("%s", &aluminio);
    fprintf(pArquivoDesc, "Aluminio em quilos: %s kg\n", &aluminio);
    printf("Valor do Alumínio em quilos: R$ ");
    scanf("%s", &aluminiovalor);
    fprintf(pArquivoDesc, "Valor do alumínio em quilos: R$ %s \n", &aluminiovalor);
    printf("Total pago de Alumínio: R$ ");
    scanf("%s", &totalaluminio);
    fprintf(pArquivoDesc, "Total pago de Alumínio: R$ %s\n\n", &totalaluminio);
    printf("\nPlastico em quilos: ");
    scanf("%s", &plastico);
    fprintf(pArquivoDesc, "Plastico em quilos: %s kg\n", &plastico);
    printf("Valor do Plastico em quilos: R$ ");
    scanf("%s", &plasticovalor);
    fprintf(pArquivoDesc, "Valor do plastico em quilos: R$ %s \n", &plasticovalor);
    printf("Total pago de plástico: R$ ");
    scanf("%s", &totalplastico);
    fprintf(pArquivoDesc, "Total pago de Plastico: R$ %s\n\n", &totalplastico);
    printf("\nSucata em quilos: ");
    scanf("%s", &sucata);
    fprintf(pArquivoDesc, "Sucata em quilos: %s kg\n", &sucata);
    printf("Valor da Sucata em quilos: R$ ");
    scanf("%s", &sucatavalor);
    fprintf(pArquivoDesc, "Valor da Sucata em quilos: R$ %s \n", &sucatavalor);
    printf("Total pago de Sucata: R$ ");
    scanf("%s", &totalsucata);
    fprintf(pArquivoDesc, "Total pago de Sucata: R$ %s\n\n\n\n\n", &totalsucata);
    fclose(pArquivoDesc);
    printf("Dados gravados com sucesso!\n\n");
    printf("Digite a opção que deseja fazer agora:\n 1-Cadastrar mais descartes     2-Sair\n");
    scanf("%d", &opcaoinserirdescarte);

    switch(opcaoinserirdescarte)
    {
     case 1:
            system("cls");
            return inserirdescarte();
            break;

        case 2:
            return;

        default:
            printf("\n\nOpção inválida");
            return 0;
    }
}
void relatorioindiv(void)
{
    system("cls");
    printf("\t\t=====Relatório individual=====\n\n");
    FILE *pRelatorioIndiv;
    char linhas[100];                                    //variavel para armazenar as informações do arquivo
    pRelatorioIndiv = fopen("descartes.txt", "r");       //comando "r" serve somente para leitura de arquivos que contem no computador - criados anteriormente
    while(fgets(linhas, 100, pRelatorioIndiv) != NULL)   //para exibicao em tela de linha a linha até o final do arquivo.
    {
        printf("%s", linhas);                            //while (enquanto) não for final do arquivo ficara em looping e será impresso o texto
    }
    fclose(pRelatorioIndiv);
    system ("pause");
    return 0;
}
void relatoriozona(void)
{
    char zonaindustria, meszona, anozona, totaldescmes;
    system("cls");
    fflush(stdin);
    FILE *pArquivoZona;
    pArquivoZona=(fopen("zonas.txt", "a"));
    printf("\n\t\t=====Registro de descartes por zona=====\n\n");
    printf("\nZona: ");
    scanf("%s", &zonaindustria);
    fprintf(pArquivoZona, "Zona: %s \n", &zonaindustria);
    printf("\nMês de registro: ");
    scanf("%s", &meszona);
    fprintf(pArquivoZona, "Mes de registro: %s \n", &meszona);
    printf("\nAno de registro: ");
    scanf("%s", &anozona);
    fprintf(pArquivoZona, "Ano de registro: %s \n", &anozona);
    printf("\nTotal em quilos de descartes no mês: ");
    scanf("%s", &totaldescmes);
    fprintf(pArquivoZona, "Total de descartes no mês: %s kg\n\n\n\n\n", &totaldescmes);
    fclose(pArquivoZona);
    printf("Dados salvos com sucesso!\n\n");
    printf("Digite 1-Cadastrar mais zonas ou 2-Gerar relatório\n");
    scanf("%d", &opcaorelatoriozona);

    switch(opcaorelatoriozona)
    {
        case 1:
            system("cls");
            return relatoriozona();
            break;

        case 2:
            system("cls");
            printf("\t\t=====Relatório por Zonas=====\n\n");
            FILE *pRelatorioZona;
            char linhaszona[100];
            pRelatorioZona = fopen("zonas.txt", "r");
            while(fgets(linhaszona, 100, pRelatorioZona) != NULL)
            {
                printf("%s", linhaszona);
            }
            fclose(pRelatorioZona);
            break;
            system("pause");
            return 0;

        default:
            printf("\n\nOpção Inválida!");
            return 0;
    }
}
