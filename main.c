#include "calculo.h"

int main(int argc, char const *argv[])
{
	
	int num, size=0;
	int v[10];

	scanf("%d", &num);
	binario(v, &size, num);

	for(int i=size;i>-1;i--)
	{
		printf("%d ", v[i]);
	}
	printf("\n\n");

	int x, y;
	scanf("%d %d", &x, &y);
	printf("%d", multiplication(x, y));
	printf("\n");

	scanf("%d", &x);
	scanf("%d", &y);
	printf("\n%d\n", num_k_vezes(x, y, 0));

	return 0;
}