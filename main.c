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
    setlocale (LC_ALL, "Portuguese");            //Defini��o para uso da Lingua Portuguesa com acentua��o
    char loginA[10] = "adm";
    char senhaA[10] = "1234";
    printf("\n\t\t=============================================\n");
    printf("\t\t Sistema para Startup de Solu��es Ambientais\n");
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
            printf("Senha inv�lida");
            return main();
        }
        }
        else
        {
            printf("Login inv�lido");
            return main();
        }
        system("cls");    //Realiza a limpeza do sistema, para deixar com menos informa��o na tela e segue para o Menu Principal}

        if (conectado == 'S')
{
    fflush(stdin);
    printf("\n\t\t\t================\n");
    printf("\t\t\t Menu Principal\n");
    printf("\t\t\t================\n\n\n");
    printf("\tEscolha a op��o desejada conforme os n�meros e tecle ENTER \n\n");
    printf("1 - Cadastro de ind�strias\n\n");
    printf("2 - Registro de descartes\n\n");
    printf("3 - Relat�rio individual\n\n");
    printf("4 - Relat�rio por zona\n\n");
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
    printf("\n\nOp��o inv�lida");
    return main();
}
}
void inseririndustria(void)
{
    char nomefantasia, razaosocial, cnpj, endereco, telefone, email, ramoatividade, regiao, respemp, respcargo, resptelefone;
    system("cls");
    fflush(stdin);
    FILE *pArquivoIndus;                                            //Instru��o para cria��o de um arquivo
    pArquivoIndus=(fopen("industrias.txt", "a"));                   //Abrindo o arquivo
    printf("\n\t\t=====Cadastro de ind�strias=====\n\n");
    printf("Nome fantasia: ");
    scanf("%s", &nomefantasia);
    fprintf(pArquivoIndus, "Nome fantasia: %s \n", &nomefantasia);  //Utilizar o comando "fprintf" para escrever a String no arquivo
    printf("\nRaz�o Social: ");
    scanf("%s", &razaosocial);
    fprintf(pArquivoIndus, "Raz�o Social: %s \n", &razaosocial);
    printf("\nCNPJ: ");
    scanf("%s", &cnpj);
    fprintf(pArquivoIndus, "CNPJ: %s \n", &cnpj);
    printf("\nEndere�o: ");
    scanf("%s", &endereco);
    fprintf(pArquivoIndus, "Endere�o: %s \n", &endereco);
    printf("\nTelefone: ");
    scanf("%s", &telefone);
    fprintf(pArquivoIndus, "Telefone: %s \n", &telefone);
    printf("\nE-mail: ");
    scanf("%s", &email);
    fprintf(pArquivoIndus, "E-mail: %s \n", &email);
    printf("\nRamo de atividade: ");
    scanf("%s", &ramoatividade);
    fprintf(pArquivoIndus, "Ramo de atividade: %s \n", &ramoatividade);
    printf("\nRegi�o: ");
    scanf("%s", &regiao);
    fprintf(pArquivoIndus, "Regi�o: %s \n", &regiao);
    printf("\nRespons�vel pela empresa: ");
    scanf("%s", &respemp);
    fprintf(pArquivoIndus, "Respons�vel pela empresa: %s \n", &respemp);
    printf("\nCargo do respons�vel: ");
    scanf("%s", &respcargo);
    fprintf(pArquivoIndus, "Cargo do respons�vel: %s \n", &respcargo);
    printf("\nTelefone do respons�vel: ");
    scanf("%s", &resptelefone);
    fprintf(pArquivoIndus, "Telefone do respons�vel: %s \n\n", &resptelefone);
    fclose(pArquivoIndus);                                                    //Fechando o arquivo aberto
    printf("Dados gravados com sucesso!\n\n");
    printf("Digite a op��o que deseja fazer agora:\n 1-Cadastrar mais ind�strias     2-Sair\n");
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
            printf("\n\nOp��o inv�lida");
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
    printf("Nome fantasia da ind�stria: ");
    scanf("%s", &nomeindustriadesc);
    fprintf(pArquivoDesc, "Ind�stria: %s \n", &nomeindustriadesc);
    printf("\nM�s de registro do descarte: ");
    scanf("%s", &mesdesc);
    fprintf(pArquivoDesc, "Mes de registro do descarte: %s \n", &mesdesc);
    printf("\nAno de registro do descarte: ");
    scanf("%s", &anodesc);
    fprintf(pArquivoDesc, "Ano de registro do descarte: %s \n\n", &anodesc);
    printf("\nAlum�nio em quilos: ");
    scanf("%s", &aluminio);
    fprintf(pArquivoDesc, "Aluminio em quilos: %s kg\n", &aluminio);
    printf("Valor do Alum�nio em quilos: R$ ");
    scanf("%s", &aluminiovalor);
    fprintf(pArquivoDesc, "Valor do alum�nio em quilos: R$ %s \n", &aluminiovalor);
    printf("Total pago de Alum�nio: R$ ");
    scanf("%s", &totalaluminio);
    fprintf(pArquivoDesc, "Total pago de Alum�nio: R$ %s\n\n", &totalaluminio);
    printf("\nPlastico em quilos: ");
    scanf("%s", &plastico);
    fprintf(pArquivoDesc, "Plastico em quilos: %s kg\n", &plastico);
    printf("Valor do Plastico em quilos: R$ ");
    scanf("%s", &plasticovalor);
    fprintf(pArquivoDesc, "Valor do plastico em quilos: R$ %s \n", &plasticovalor);
    printf("Total pago de pl�stico: R$ ");
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
    printf("Digite a op��o que deseja fazer agora:\n 1-Cadastrar mais descartes     2-Sair\n");
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
            printf("\n\nOp��o inv�lida");
            return 0;
    }
}
void relatorioindiv(void)
{
    system("cls");
    printf("\t\t=====Relat�rio individual=====\n\n");
    FILE *pRelatorioIndiv;
    char linhas[100];                                    //variavel para armazenar as informa��es do arquivo
    pRelatorioIndiv = fopen("descartes.txt", "r");       //comando "r" serve somente para leitura de arquivos que contem no computador - criados anteriormente
    while(fgets(linhas, 100, pRelatorioIndiv) != NULL)   //para exibicao em tela de linha a linha at� o final do arquivo.
    {
        printf("%s", linhas);                            //while (enquanto) n�o for final do arquivo ficara em looping e ser� impresso o texto
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
    printf("\nM�s de registro: ");
    scanf("%s", &meszona);
    fprintf(pArquivoZona, "Mes de registro: %s \n", &meszona);
    printf("\nAno de registro: ");
    scanf("%s", &anozona);
    fprintf(pArquivoZona, "Ano de registro: %s \n", &anozona);
    printf("\nTotal em quilos de descartes no m�s: ");
    scanf("%s", &totaldescmes);
    fprintf(pArquivoZona, "Total de descartes no m�s: %s kg\n\n\n\n\n", &totaldescmes);
    fclose(pArquivoZona);
    printf("Dados salvos com sucesso!\n\n");
    printf("Digite 1-Cadastrar mais zonas ou 2-Gerar relat�rio\n");
    scanf("%d", &opcaorelatoriozona);

    switch(opcaorelatoriozona)
    {
        case 1:
            system("cls");
            return relatoriozona();
            break;

        case 2:
            system("cls");
            printf("\t\t=====Relat�rio por Zonas=====\n\n");
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
            printf("\n\nOp��o Inv�lida!");
            return 0;
    }
}
