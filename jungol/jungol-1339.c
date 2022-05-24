int main() {
	int n;
	scanf("%d", &n);
	printf("%c", overToRight(n));

	# if 0
	if (n > 100) {
		printf("INPUT ERROR");
		return 0;
	}

	// 영어의 전체 개수
	int cnt = 0;
	for (int i = n; i > 0; i -= 2) {
		cnt += i;
	}
	cnt += 64;

	// 증가 for문
	for (int i = 0; i <= n/2; i++) {
		int temp = cnt - n + i + 1;
		for (int j = 0; j < i + 1; j++) {
			//if ()
			//printf("%d ",value);
			printf("%c", temp);
			temp -= ((n / 2) - j) * 2;
		}
		printf("\n");
	
	}
	// 감소 for문
	for (int i = 0; i < n / 2; i++) {
		int temp = cnt -(n/2) + i + 1;
		for (int j = 0; j < n / 2 - i; j++) {
			printf("%c", temp);
			temp -= ((n / 2) - j) * 2;
		}
		printf("\n");
	}
#endif

	return 0;
}