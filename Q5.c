//Q =Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>

int main(){
int celsius ;
float fehraenheit;
scanf ("%d",&celsius);
printf ("temprature in celsius= %d\n",celsius);
printf ("temprature in fahrenheit=%d",(celsius*9/5)+32);
    return 0;
}
/*PS C:\Users\Arya_Vardhan\OneDrive\Desktop\100 days coding> gcc Q5.c
PS C:\Users\Arya_Vardhan\OneDrive\Desktop\100 days coding> ./a.exe 
Fahrenheit=32
temprature in celsius= 3715072
temprature in fahrenheit=6687161
PS C:\Users\Arya_Vardhan\OneDrive\Desktop\100 days coding> gcc Q5.c
PS C:\Users\Arya_Vardhan\OneDrive\Desktop\100 days coding> ./a.exe 
100
temprature in celsius= 100
temprature in fahrenheit=212*/