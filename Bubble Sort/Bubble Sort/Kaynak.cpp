#include <stdlib.h>
#include <stdio.h>

int main() {
	int dizi[100];
	int elemanSayisi, i, k, gecici;

	printf("Eleman Sayisini Giriniz: ");
	scanf_s("%d", &elemanSayisi);

	for (i = 0; i < elemanSayisi; i++)
	{
		printf("%d. Elemani Giriniz: ", i + 1);
		scanf_s("%d", &dizi[i]);
	}
	for (i = 0; i < elemanSayisi - 1; i++)
	{
		for (k = 0; k < elemanSayisi - i - 1; k++)
		{
			if (dizi[k] > dizi[k + 1])
			{
				gecici = dizi[k];
				dizi[k] = dizi[k + 1];
				dizi[k + 1] = gecici;
			}
		}
	}
	printf("Siralama: \n");
	for (i = 0; i < elemanSayisi; i++)
	{
		printf("%d\n", dizi[i]);
	}
	return 0;
}