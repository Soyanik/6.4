#define SAZE_ARRAY 20
#include <stdio.h>
#include <math.h>
int main() {
	int A[SAZE_ARRAY];
	double B[SAZE_ARRAY];
	int i;
	for (int i=2; i<SAZE_ARRAY; i ++ ) {
		A[0] = 0;
		A[1] = 1; 
		A[2] = 1; 
		A[i] = A[i-1] + A[i-2];
		printf("%d.\n",A[i]);
	}
	for (int i=0; i<SAZE_ARRAY-1; i ++ ) {
		A[i] =A[i+1];
	}
	A[19]=0;
	for (int i=0; i<SAZE_ARRAY; i ++ ) {
		printf("%d.\n",A[i]);
	}
	return 0;
}
