#include<stdio.h>
int main()
{
    char X[] ={'"','H','E','L','L','O',' ','W','O','R','L','D','"'};
    int l = sizeof (X) /sizeof (X[0]);//l=13
    int i;

    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c\n",X[l-1],X[l-2],X[l-3],X[l-4],X[l-5],X[l-6],X[l-7],X[l-8],X[l-9],X[l-10],X[l-11],X[l-12],X[l-13]);
    return 0;

}
