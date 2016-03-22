#ifndef MEMMANIP_H_INCLUDED
#define MEMMANIP_H_INCLUDED

#include <string.h>
#include <stdio.h>
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//copia o conteudo de uma variavel inteira para outra
int copyint(int isource, int idestiny)
{
  idestiny=isource;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//move o conteudo de uma variavel inteira para a outra e define o valor da variavel de origem como NULL
int movint(int misource, int midestiny)
{
    copyint(misource,midestiny);
    misource=NULL;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//copia o conteudo de uma variavel float para outra
float copyflt(float fsource, float fdestiny)
{
  fdestiny=fsource;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//move o conteudo de uma variavel float para a outra e define o valor da variavel de origem como NULL
float movflt(float mfsource, float mfdestiny)
{
    copyflt(mfsource,mfdestiny);
    mfsource=NULL;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//copia o conteudo de uma variavel double para outra
double copydbl(double dsource, double ddestiny)
{
  ddestiny=dsource;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//move o conteudo de uma variavel double para a outra e define o valor da variavel de origem como NULL
double movdbl(double mdsource, double mddestiny)
{
    copydbl(mdsource,mddestiny);
    mdsource=NULL;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
char strrev(char strsource[], char strdestiny[])
{
    if(strlen(strsource)>=strlen(strdestiny))
    {
        for(int i=0; i<strlen(strsource); i++)
        {
            strdestiny[i]=strsource[(strlen(strsource)-1)-i];
        }
    }
    else
    {
     std::cout<<"A string de origem e maior que a string de destino, favor realocar o tamanho!"<<std::endl;
     system("pause");
    }
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#endif // MEMMANIP_H_INCLUDED
