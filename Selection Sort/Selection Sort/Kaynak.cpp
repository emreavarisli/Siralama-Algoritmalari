#include <stdlib.h>
#include <stdio.h>

int main() {
	int dizi[100];
	int elemanSayisi, i, k, atama, gecici;
	
	printf("Eleman Sayisini Giriniz: ");
	scanf_s("%d", &elemanSayisi);

	for (i = 0; i < elemanSayisi; i++)
	{
		printf("%d. Elemani Giriniz: ", i + 1);
		scanf_s("%d", &dizi[i]);
	}
	for (i = 0; i < elemanSayisi - 1; i++)
	{
		atama = i;
		for (k = i + 1; k < elemanSayisi; k++)
		{
			if (dizi[atama] > dizi[k])
				atama = k;
		}
		if (atama != i)
		{
			gecici = dizi[i];
			dizi[i] = dizi[atama];
			dizi[atama] = gecici;
		}
	}
	printf("Siralama: \n");
	for (i = 0; i < elemanSayisi; i++)
	{
		printf("%d\n", dizi[i]);
	}
	return 0;
}