#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50

int top = -1, front = 0;  // y���n�n ilk de�eri -1 
int stack[MAX];   // max 50 eleman i�eren y���n tan�mlan�r.

/* Bir karakteri y���na itmek i�in */
void push(char a)
{
	top++;
	stack[top] = a;
}


/* y���ndaki bir ��eyi silmek i�in */
void pop()
{
	top--;
}

int main()
{
	int i, secim;
	char s[MAX], b;


	printf("************************************************************************************************************\n\n");
	printf("Program gireceginiz sayi veya kelimenin Palindrom olup olmayacagini hesaplayacak, lutfen seciminizi yapiniz!\n\n");
	printf("1- Sayi veya kelime girmek istiyorum \n2- Programi kapatmak istiyorum\n\n");
	printf("************************************************************************************************************\n\n");
	while (1) //program�n kapanmamas� i�in d�ng�ye soktuk
	{

		scanf("%d", &secim); // kullan�c�dan yapt��� se�imi int veri tipiyle ald�k
		switch (secim) // 1. veya 2. durumun hangisini se�tiysek ona g�re i�lem yapar
		{
		case 1:
			printf("Lutfen kelime veya sayi giriniz: \n");
			scanf("%s", s); //char veri tipiyle s olarak kullan�cdan veriyi ald�k
			for (i = 0; s[i] != 0; i++)
			{
				b = s[i];
				push(b);
			}
			for (i = 0; i < (strlen(s) / 2); i++)
			{
				if (stack[top] == stack[front])
				{
					pop();
					front++;
				}
				else
				{
					printf("%s Uzgunum, Girilen veri palindrom degildir! \n\n", s);

					break;
				}
			}
			if ((strlen(s) / 2) == front)
				printf("%s Tebrikler! Girilen veri palindromdur.\n\n", s);
			printf("1- Tekrar sayi veya kelime girmek istiyorum \n2- Programi kapatmak istiyorum\n\n");
			front = 0;
			top = -1;
			break;
		case 2:
			exit(0);
		default:
			printf("Yanlis secim yaptiniz. Lutfen seciminizi tekrar yapiniz: \n");
		}
	}

}



