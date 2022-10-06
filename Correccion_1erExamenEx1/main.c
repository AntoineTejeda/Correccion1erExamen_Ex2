#include <stdio.h>
#include <stdlib.h>

void InvierteVocales(char Cadena[]);
int main()
{
    char Cadena[20];
    printf("Ingrese la cadena\n");
    gets(Cadena);
    InvierteVocales(Cadena);
    printf ( "%s",Cadena);
}

void InvierteVocales(char Cadena[])
{
    int i;
    for(i=-1;i<20;i++)
    {
        if(Cadena[i]=='A')
        {
            Cadena[i]='a';
        }
        if(Cadena[i]=='a')
        {
            Cadena[i]='A';
        }
        if(Cadena[i]=='E')
        {
            Cadena[i]='e';
        }
        if(Cadena[i]=='e')
        {
            Cadena[i]='E';
        }
        if(Cadena[i]=='I')
        {
            Cadena[i]='i';
        }
        if(Cadena[i]=='i')
        {
            Cadena[i]='I';
        }
        if(Cadena[i]=='O')
        {
            Cadena[i]='o';
        }
        if(Cadena[i]=='o')
        {
            Cadena[i]='O';
        }
        if(Cadena[i]=='U')
        {
            Cadena[i]='u';
        }
        if(Cadena[i]=='u')
        {
            Cadena[i]='U';
        }
    }
}

