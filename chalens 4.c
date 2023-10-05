#include<stdio.h>
#include<string.h>
#include <stdlib.h>


void OperationOne(){
    abort();
}

void OperationTwo(int Register[],int d,int n)
{
    Register[d] = n;
}
void OperationThree(int Register[],int d,int n)
{
    Register[d] += n;
}
void OperationFour(int Register[],int d,int n){
    Register[d] *= n;
}
void OperationFive(int Register[],int d,int n){
    Register[d] = Register[n];
}
void OperationSix(int Register[],int d,int n){
    Register[d] += Register[n];
}
void OperationSeven(int Register[],int d,int n){
    Register[d] *= Register[n];
}
void OperationEight(int Register[],int d,int n){
    Register[d] = Register[n-1];
}
void OperationNine(int Register[],int d,int n){
    Register[d] = Register[d-1]; 
}
int main (void)
{
    
    int Registers[10] = {0,0,0,0,0,0,0,0,0,0};
    int startValue;
    int hundreder;
    int d;
    int n;
    int Ruben_bool=0;
    int reslutat = 0;
    int *pointer;
    while (Ruben_bool=0)
    {
        printf("input 3 Digt Value : ");
        scanf("%d",startValue);
        hundreder = startValue/100;
        d = (startValue - hundreder*10)/10;
        n = startValue - hundreder*10 - d*10;
        pointer = &n;
        if (hundreder == 1)
        {
            printf("100\n");
            Ruben_bool++;
        }
        if (hundreder == 2)
        {
            OperationTwo(Registers, d, n);
        }
        if (hundreder == 3)
        {
            OperationThree(Registers, d, n);
        }
        if (hundreder == 4)
        {
            OperationFour(Registers, d, n);
        }
        if (hundreder == 5)
        {
            OperationFive(Registers, d, n);
        }
        if (hundreder == 6)
        {
            OperationSix(Registers, d, n);
        }
        if (hundreder == 7)
        {
            OperationSeven(Registers, d, n);
        }
        if (hundreder == 8)
        {
            OperationEight(Registers, d, n);
        }
        if (hundreder == 9)
        {
            OperationNine(Registers, d, n);
        }
        if (hundreder == 0)
        {
            OperationTeen(Registers, d, n);
        }
        reslutat++;
    }
    printf("%d",reslutat);
    return 0;
}