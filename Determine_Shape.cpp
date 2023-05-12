#include<stdio.h>


/* [Notice for C/C++]
 * - 기본 제공되는 뼈대 코드는 입출력의 이해를 돕기위해 제공되었습니다.
 * - 뼈대코드의 활용은 선택사항이며 코드를 직접 작성하여도 무관합니다.
 *
 * - 별도의 병렬 처리나 시스템콜, 네트워크/파일접근 등을 하지 마세요
 * - main은 int형으로 선언한 후 return 0를 항상 하는 것을 권유합니다
 * - 지역변수 배열 크기에 의한 Stack Overflow 에러에 주의하세요
 * - (C++) cin/cout보다 scanf/printf를 사용하기를 권장합니다. (입출력 성능에 의한 이유)
 */


int main()
{   //프로그램의 시작부 
		//첫 번째 점 P의 좌표 
	int px, py;
	//두 번째 점 Q의 좌표
	int qx, qy;
	int x, y;
	scanf("%d %d", &px, &py);
	scanf("%d %d", &qx, &qy);
	x = qx - px;
	y = qy - py;

	if (px == qx && py == qy) {
		printf("DOT");
	}
	else if (px == qx || py == qy) {
		printf("SEGMENT");
	}
	else if (x == y) {
		printf("SQUARE");
	}
	else
		printf("RECTANGLE");


	return 0;
}

//test case
/*
1 1
5 5

1 1
3 5

1 1
1 1
*/