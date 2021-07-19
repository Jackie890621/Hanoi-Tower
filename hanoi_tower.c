#include <stdio.h>
int main ()
{
	unsigned long ans = 1, mul = 2;
	int i = 0, n[100];
	while (scanf("%d", &n[i]) != EOF) {
		i++;
	}
	for (int j = 0; j < i; j++) {
		while (n[j] > 0){
			if ((n[j] & 1) == 1) {
				ans = ((ans % 100000007) * mul) % 100000007;
			}
			mul = ((mul % 100000007) * mul) % 100000007;
			n[j] >>= 1;
		}
		printf("%lu\n", ans - 1);
		ans = 1;
		mul = 2;
	}
	return 0;
}
