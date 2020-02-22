#include<stdio.h>
#include<conio.h>
#include<iostream>

main ()
{
int panjang,lebar, tinggi, kali;
if ("sebuah kolam renang berbentuk balok dengan ukuran 15 x 24 x 3 m akan diisi air. berapa volume air yang bisa ditampung bak mandi tersebut ? ");
printf("input nilai panjang : ");
scanf("%d",&panjang);
printf("input nilai lebar : ");
scanf("%d",&lebar);
printf("input nilai tinggi : ");
scanf("%d",&tinggi);
kali=panjang*lebar*tinggi;
printf("\nvolume kolam renang = %d",kali);
getch();
return 0;
}
