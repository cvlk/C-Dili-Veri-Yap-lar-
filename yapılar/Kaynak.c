#include <stdio.h>

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