#include<stdio.h>
#include<string.h>
/*
int main(void)

{

	struct {

		int yil;
		int ay;
		int gun;

	} dogum_gunu;

	printf("Dogum gununzu ");
	printf("gun ay yil gg aa yyyy olarak giriniz: ");
	scanf("%d %d %d", &dogum_gunu.gun, &dogum_gunu.ay, &dogum_gunu.yil);

	printf("Dogum gununuz: %d/%d/%d", dogum_gunu.gun, dogum_gunu.ay, dogum_gunu.yil);
	
	return 0;


}

*/

/*
int main(void)
{
	struct {
		int yil;
		int ay;
		int gun;
	} siz, kiz_kardes, erkek_kardes;

	printf("Dogum gununuzu gg aa yyyy seklinde giriniz: ");
	scanf("%d %d %d", &siz.gun, &siz.ay, &siz.yil);

	printf("Kiz kardesinizin dogum gununu giriniz: ");
	scanf("%d %d %d", &kiz_kardes.gun, &kiz_kardes.ay, &kiz_kardes.yil);

	printf("Erkek kardesinizin dogum gununu giriniz: ");
	scanf("%d %d %d", &erkek_kardes.gun, &erkek_kardes.ay, &erkek_kardes.yil);

	printf("Sizin dogum gununuz: %d %d %d \n", siz.gun, siz.ay, siz.yil);
	printf("Kiz kardesinizin dogum gunu: %d %d %d \n", kiz_kardes.gun, kiz_kardes.ay, kiz_kardes.yil);
	printf("Erkek kardesinizin dogum gunu: %d %d %d", erkek_kardes.gun, erkek_kardes.ay, erkek_kardes.yil);

	return 0;

}

*/


/*
int main(void)

{
	struct {
		char isim[40];
		int boy;
		struct 
		{
			int ay;
			int yil;
			int gun;

		}dogum_bilgileri;
	} kisi;

	printf("Adiniz: ");
	scanf("%s", &kisi.isim);
	printf("Boyunuz: ");
	scanf("%d", &kisi.boy);
	printf("Dogum tarihi: ");
	scanf("%d %d %d", &kisi.dogum_bilgileri.gun, &kisi.dogum_bilgileri.ay, &kisi.dogum_bilgileri.yil);

	printf("Girilen bilgiler: \n");
	printf("Adi: %s \n", kisi.isim);
	printf("Boyu %d \n", kisi.boy);
	printf("Dogum Tarihi: %d %d %d", kisi.dogum_bilgileri.gun, kisi.dogum_bilgileri.ay, kisi.dogum_bilgileri.yil);

	return 0;

}

*/



/*

int main(void)

{
	struct sahis_bilgileri
	{
		char isim[40];
		int boy;
	};

	struct sahis_bilgileri kisi_1;
	struct sahis_bilgileri kisi_2;

	strcpy(kisi_1.isim, "ERKAN");
	kisi_1.boy = 173;

	strcpy(kisi_2.isim, "ELIF");
	kisi_2.boy= 163;

	printf("Erkan ile Elifin boy farki: %d", kisi_1.boy - kisi_2.boy);
	return 0;

}


*/

int main(void)

{
	struct sahis_bilgileri
	{
		char isim[40];
		int boy;
	} kisi_1 = { "Erkan", 173 }, kisi_2 = { "Elif", 163 };

	

	printf("Erkan ile Elifin boy farki: %d", kisi_1.boy - kisi_2.boy);
	return 0;

}

