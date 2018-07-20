/*PROGRAM BubbleSort1*/
//Mengurutkan data larik dengan mengecek satu per satu dan diapungkan yang paling terkecil

#include<stdio.h>			//file header

/*DEKLARASI TIPE BENTUKAN BARU*/
typedef int LarikInt [100];		//LarikInt bentukan dari tipe Array integer

/*DEKLARASI PROTOTYPE*/
void BacaLarik (LarikInt L, int n);			//BacaLarik
void BubbleSort1(LarikInt L, int n);		//BubbleSort1
void TampilkanLarik (LarikInt L, int n);	//TampilkanLarik

main()
{
	/*DEKLARASI*/
	int n;			//masukkan
	LarikInt L;		//array data
	
	/*DESKRIPSI*/
	printf("\t\tPROGRAM BUBBLESORT1\n\n");		//judul program
	printf("Masukkan n : "); scanf("%i", &n);	//masukkan banyak data
	
	BacaLarik(L, n);		//pemanggilan BacaLarik
	BubbleSort1(L, n);		//pemanggilan BubbleSort1
	TampilkanLarik(L, n);	//pemanggilan TampilkanLarik

}

void BacaLarik (LarikInt L, int n)	//prosedur BacaLarik
{
	/*DEKLARASI*/
	int i;		//pencacah
	
	/*DESKRIPSI*/	
	for(i=0; i<n; i++)	//perulangan untuk menyimpan array
	{
		printf("Masukkan Data ke-%i : ", i+1); scanf("%i", &L[i]);	//masukkan data array tiap indeksnya
	}
}


void BubbleSort1(LarikInt L, int n)	//prosedur BubbleSort1
{
	/*DEKLARASI*/
	int i;		//pencacah
	int k;		//pencacah
	int temp;	//penyimpan nilai sementara
	
	/*DESKRIPSI*/
	for(i=0; i<n-1; i++)	//perulangan untuk per pass nya
	{
		for (k=n-1; k>i; k--)	//perulangan untuk mengecek data dalam larik
		{
			if(L[k]<L[k-1])		//kondisi jika nilai yang akan dipindahkan adalah lebih besar
			{
				temp=L[k];		//proses pertukaran
				L[k]=L[k-1];
				L[k-1]=temp;
			}
		}
	}
}

void TampilkanLarik (LarikInt L, int n)	//prosedur TampilkanLarik
{
	/*DEKLARASI*/
	int i;	//pencacah	
	
	/*DESKRIPSI*/
	for(i=0; i<n; i++)	//perulangan untuk mencetak
	{
		printf("Data ke-%i : %i\n", i+1, L[i]);
	}
}

