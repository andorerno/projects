#include <stdio.h>
#include <windows.h>

int main()

{
    int h,m,s;
    int d=1000; //1000 ms késleltetés amit később sleep func használ
    printf("Set time : \n");
    scanf("%d%d%d", &h,&m,&s);
    if(h>12 || m>60 || s>60)
    {
        printf(""ERROR ! \n");
        exit(0);
    }
    while(1) //végtelen loop, benne lévő elemek örökké ismétlődnek
    {
        s++;
        if(s>59)
        {
            m++
            s=0;
        {
        if(m>59)
        {
            h++;
            m=0;
        }
        if(h>12)
        {
            h=1;
        }
        printf("\n Clock :"");
        printf("\n %02d:%02d:%02s,h,m,s"); //idő formázása 00:00:00
        Sleep(d); //lelassítja a while loop-ot

        system("cls") 
       
    }
}