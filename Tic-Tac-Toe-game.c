#include <stdio.h>
#include <stdlib.h>

void stworzMacierz();
void pokazMacierz();
void licznikRuchow();
void wybierzWiersz();
void wybierzKolumna();
void zamiana01Macierz();
void zliczanieMacierz();
void komunikatWygrana();

//Zmienne globlne
int macierz[8][8];
int i;
int j;
int wiersz;
int kolumna;
int ruch;
int zliczanie=0;

int main()
{
    printf("Gra rozpoczeta - powodzenia!\n");
    stworzMacierz();
    pokazMacierz();
    while(zliczanie<64)
    {
        licznikRuchow();
        wybierzWiersz();
        wybierzKolumna();
        zamiana01Macierz();
        pokazMacierz();
        zliczanieMacierz();
    }
    komunikatWygrana();
    return 0;
}

void stworzMacierz()
{
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            macierz[i][j]=0;
        }
    }

}


void pokazMacierz()
{
    printf("   12345678\n");
    printf("------------\n");
    for(wiersz=0;wiersz<8;wiersz++)
    {
        printf("%d |", wiersz+1);
        for(kolumna=0;kolumna<8;kolumna++)
        {
            printf("%d",macierz[wiersz][kolumna]);
        }
        printf("|\n");


    printf("------------\n");
    }
}

void wybierzKolumna()
{
    printf("Podaj nr. kolumny :");
    scanf("%d",&kolumna);
    while(kolumna>8||kolumna<1)
    {
        printf("Wybrano niepoprawny nr. kolumny, prosze wprowadzic poprawny nr. kolumny\n");
        scanf("%d",&kolumna);
    }
}

void wybierzWiersz()
{
    printf("Podaj nr. wierszu :");
    scanf("%d",&wiersz);
    while(wiersz>8||wiersz<1)
    {
        printf("Wybrano niepoprawny nr. wiersza, prosze wprowadzic poprawny nr. wiersza\n");
        scanf("%d",&wiersz);
    }
}

void licznikRuchow()
{
    printf("\nLiczba ruchow %d\n",ruch++);
}

void zamiana01Macierz()
{
    if(macierz[wiersz-1][kolumna-1]==0)
    {
        macierz[wiersz-1][kolumna-1]=1;
    }


    else  macierz[wiersz-1][kolumna-1]=0;

    if(wiersz<8)
    {
        if(macierz[wiersz][kolumna-1]==0)
        {
            macierz[wiersz][kolumna-1]=1;
        }
        else(macierz[wiersz][kolumna-1]=0);
    }


    if(kolumna<8)
    {
        if(macierz[wiersz-1][kolumna]==0)
        {
            macierz[wiersz-1][kolumna]=1;
        }
        else(macierz[wiersz-1][kolumna]=0);
    }


    if(wiersz-2>-1)
    {
        if(macierz[wiersz-2][kolumna-1]==0)
        {
            macierz[wiersz-2][kolumna-1]=1;
        }
        else(macierz[wiersz-2][kolumna-1]=0);
    }


    if(kolumna-2>-1)
    {
        if(macierz[wiersz-1][kolumna-2]==0)
        {
            macierz[wiersz-1][kolumna-2]=1;
        }
        else(macierz[wiersz-1][kolumna-2]=0);
    }
}


void zliczanieMacierz()
{
    zliczanie=0;
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
               if(macierz[i][j]==1)
               {
                    zliczanie=1+zliczanie;
               }
        }
    }

}

void komunikatWygrana()
{
    printf("WYGRALES!\n");
}