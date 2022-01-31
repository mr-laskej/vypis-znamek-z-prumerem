#include <stdio.h>

int main()
{
	FILE* vstup = fopen("znamky.txt", "r");
	if (vstup == NULL) {
		printf("ERROR: NEZDARILO SE OTEVRIT SOUBOR PRO CTENI");
		return 1;
	}
	while (!feof(vstup)) {
		char jmeno[30];
		float prum = 0;
		int znamky[9];
		fscanf(vstup, "%s", &jmeno);
		for (int i = 0; i < 9; i++) {
			fscanf(vstup, "%d", &znamky[i]);
			prum += znamky[i];
		}
		prum /= 9;
		printf("%s: %7.2f\n", jmeno, prum);

	}
}

