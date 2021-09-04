#include<stdio.h>
#include<stdlib.h>

void llenararreglo();
void mostrararreglo(int[]);
void ordenarburbuja(int[]);
#define TAM 20

int main(void)
{
	llenararreglo();
	system("pause");
	return 0;
}

void llenararreglo()
{
	int arr[TAM];
	int i;
	//llenado de arreglo
	for(i=0; i<20; i++)
		arr[i]=rand()%100;
		
	mostrararreglo(arr);
	printf("\n");
	ordenarburbuja(arr);
}

void mostrararreglo(int arr[])
{
	int i;
	for(i=0; i<20; i++)
		printf("\n%d",arr[i]);	
}

void ordenarburbuja(int arr[])
{
	int j,cambio;
	int flag=19;
	while(flag>0)
	{
		cambio=0;
		for(j=0; j<19; j++)
		{
			if(arr[j]>arr[j+1])
			{
				int aux=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=aux;
				cambio=j;
			}
			flag=cambio;
		}
	}
	mostrararreglo(arr);
	printf("\n");
}
