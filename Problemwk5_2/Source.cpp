#include <stdio.h>
#include <string.h>
int main() {
	char num[100];
	int i = 0, factset = 0;
	int fact;
	long factoutput = 1;
	printf("Enter the number (n!) : ");
	scanf_s("%s", num, sizeof(num));
	while (i < strlen(num)) {
		if (num[i] >= '0' && num[i] <= '9') {
			fact = factset * 10 + (num[i] - '0');
			factset = 1;
		}
		if (num[i] == '!') {
			int j = 1;
			for (j = 1; j <= fact; j++) {
				factoutput = factoutput * j;
			}
			break;
		}
		

		i++;
	}
	if (fact != 1 && factoutput == 1) {
		printf("put ! after the number");
	}
	else {
		printf("%d! = %ld", fact, factoutput);

	}
	return 0;
}