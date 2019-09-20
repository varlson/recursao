#include "calculo.h"

void binario(int *v, int *count, int num)
{
	if(num <= 1)
	{
		v[*count] = num;
		return;
	}else
	{
		v[*count] = num%2;
		*count = *count+1;
		num = num/2;
		binario(v, count, num);
	}
}

int multiplication(int x, int y)
{
    if(y==0)
        return 0;
    if(y == 1)
        return x;
    else
        return x+(multiplication(x, y-1));
}


int num_k_vezes(int num, int k, int count)
{
    if(num < 9)
    {
        if(num == k)
            return count+1;
        else
            return count;
    }

    if(num%10 == k)
        return num_k_vezes(num/10, k, count=count+1);
    else
        return num_k_vezes(num/10, k, count);
}