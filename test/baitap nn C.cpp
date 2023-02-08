#include<stdio.h>
int main() {
	unsigned int n;
	printf("Nhap so tu nhien n: ");
	scanf("%d", &n);
	unsigned int s = 0, s1 = 0, s2 = 0;
	unsigned int i;

	for (i = 1; i <= n; i++) {
		s += i;
		if (i % 2 == 0) {
			s1 += i;
		}
		else {
			s2 += i;
		}
	}
	printf(" S = %d\n", s);
	printf("S1 = %d\n", s1);
	printf("S2 = %d", s2);
	return 0;
