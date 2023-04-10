#include <stdio.h>

//2 prototipaçao
int soma (int n1, int n2);
int subtracao (int n1, int n2);
int divisao (int n1, int n2);
int multiplicacao (int n1, int n2);

int main()
{
    int total=0;
   	int total1=0;
   	int total2=0;
   	int total3=0;
   	
    printf ("Calculadora\n");
    total = soma(5,5);
	total1 = subtracao(5,5);
	total2 = divisao(5,5);
	total3 = multiplicacao(5,5); //3 chamada
	
    printf ("Total Soma: %d\n",total);
    printf ("Total Subtracao: %d\n",total1);
    printf ("Total Divisao: %d\n",total2);
    printf ("Total Multiplicacao: %d\n",total2);
    
    
    return 0;
    }
     
//1 declaração   
int soma(int n1, int n2){
   int total = n1+n2;
   return total;
}
    
int subtracao(int n1, int n2){
	int total1 = n1-n2;
	return total1;
}
int divisao(int n1, int n2){
	int total2 = n1/n2;
	return total2;
}

int multiplicacao(int n1, int n2){
	int total3 = n1*n2;
	return total3;
}
