#include<stdio.h>


/* [Notice for C/C++]
 * - 기본 제공되는 뼈대 코드는 입출력의 이해를 돕기위해 제공되었습니다.
 * - 뼈대코드의 활용은 선택사항이며 코드를 직접 작성하여도 무관합니다.
 *
 * - 데이터의 입력과 출력은 stdin과 stdout을 통하고 scanf와 printf를 사용하세요
 * - 별도의 병렬 처리나 시스템콜, 네트워크/파일접근 등을 하지 마세요
 * - main은 int형으로 선언한 후 return 0를 항상 하는 것을 권유합니다
 * - 지역변수 배열 크기에 의한 Stack Overflow 에러에 주의하세요
 * - (C++) cin/cout보다 scanf/printf를 사용하기를 권장합니다. (입출력 성능에 의한 이유)
 */

#include <cmath>

double max(double a, double b);
int main()
{   //프로그램의 시작부 
	int N;
	scanf("%d", &N);
	int x[N], y[N];
	for (int i = 0; i < N; i++) {
		scanf("%d %d", &x[i], &y[i]);
	}

	double max_area = 0;

	for (int j = 0; j < N; j++) {
		for (int z = j + 1; z < N; z++) {
			double dx = x[z] - x[j];
			double dy = y[z] - y[j];
			double distance = dx * dx + dy * dy;
			distance = sqrt(distance); //가능한 모든 쌍의 거리

			for (int i = z + 1; i < N; i++) {
				double dx2 = x[i] - x[j];
				double dy2 = y[i] - y[j]; //세번째 좌표와의 거리
				double distance2 = dx * dx + dy * dy;
				distance2 = sqrt(distance);

				if (dx * dx2 + dy * dy2 == 0) {
					double side = sqrt(dx2 * dx2 + dy2 * dy2);
					double area = side * side;
					max_area = max(max_area, area);
				}

				if (dx * dx2 + dy * dy2 == distance) {
					double side = sqrt(dx2 * dx2 + dy2 * dy2);
					double area = distance * side;
					max_area = max(max_area, area);
				}
			}

		}
	}
	printf("%0.2f", max_area);
	return 0;

}

double max(double a, double b) {
	double returnNum;
	if (a > b)
		returnNum = a;
	else
		returnNum = b;
	return returnNum;
}

//test case
/*
5
0 2
2 0
2 2
0 0
1 1

10
0 0
10 10
89 76
97 79
86 84
94 87
53 14
54 27
40 15
41 28
*/