#include <iostream>

using namespace std;

int main() {
	int T, N;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d", &N);
		int count = 0;
		int field[100][100] = { 0, };
		for (int j = 0; j < N; j++) {
			int x = 0;
			int y = 0;
			scanf("%d" "%d", &x, &y);
			for (int z = 0; z < 10; z++)
				for (int d = 0; d < 10; d++) {
					if (field[x + z][y + d] == 0)
						field[x + z][y + d] = 1;
					else
						continue;
				}
		}
		for (int a = 0; a < 100; a++)
			for (int b = 0; b < 100; b++)
				if (field[a][b] == 1)
					count++;
		printf("%d", count);
		printf("\n");
	}
	return 0;
}

//test case
/*
2
3
3 7
15 7
5 2
4
3 7
5 2
15 7
13 14
*/