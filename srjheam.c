#include "stdio.h"

int main() {
	int n;
	scanf("%d", &n);

	if (n == 1) {
		printf("*\n");
		return 0;
	}	

	int b = 1;
	while (b < n) {
		for (int i = 0; i < ((n - b) / 2); i++)
			printf(" ");
		for (int i = 0; i < b; i++) {
			printf("*");
		}
		printf("\n");
		b += 2;
	}
	
	for (int i = 0; i < n; i++)
		printf("*");

	printf("\n");

	b = (n % 2 == 0) ? n - 1 : n - 2;
	while (b > 1) {
	
				for (int i = 0; i < ((n - b) / 2); i++)
							printf(" ");
		for (int i = 0; i < b; i++) {
			printf("*");
		}
		printf("\n");
		b -= 2;
	}

	for (int i = 0; i < ((n - 1) / 2); i++)
		printf(" ");

	printf("*\n");
}
