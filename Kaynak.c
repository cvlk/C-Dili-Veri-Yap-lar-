#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50

int top = -1, front = 0;  // yýðýnýn ilk deðeri -1 
int stack[MAX];   // max 50 eleman içeren yýðýn tanýmlanýr.

/* Bir karakteri yýðýna itmek için */
void push(char a)
{
	top++;
	stack[top] = a;
}


/* yýðýndaki bir öðeyi silmek için */
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
	while (1) //programýn kapanmamasý için döngüye soktuk
	{

		scanf("%d", &secim); // kullanýcýdan yaptýðý seçimi int veri tipiyle aldýk
		switch (secim) // 1. veya 2. durumun hangisini seçtiysek ona göre iþlem yapar
		{
		case 1:
			printf("Lutfen kelime veya sayi giriniz: \n");
			scanf("%s", s); //char veri tipiyle s olarak kullanýcdan veriyi aldýk
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



