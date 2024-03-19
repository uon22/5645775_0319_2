#include <studio.h>
#include <time.h>

long testTime(void) {
	return 0;
}
int main(int argc, char* argv[]) {

	int sum = 0;
	clock_t start, end;

	start = clock();
	//함수작성

	Double Power_ITER(Double x, int n) {
		int i;
		double result = 1.0;
		for (i = 0; i < n; i++)
			result = result * x;
		return(result);
	}

	double Power_RECUR(double x, int n) {
		if (n == 0) return 1;
		else if ((n % 2 == 0)) return Power_RECUR(x ^ 2, n / 2);
		else return x * (Power_RECUR(x ^ 2, (n - 1) / 2));
	}

	end = clock();
	printf("걸린시간 : %f |n"), (float)(end - start) / CLOCKS_PER_SEC);

	return 0;
}