int add(int num)
{
	if(num==1)
	return num;
	int sum=0;
	return sum=num+add(num-1);
	}
void power_fac(int a, int b, int c, long int *power, long int *fac)
{
	long int res = 1;
	for (int i = 1; i <= b; i++)
	{
		res = res * a;
	}
	*power = res;
	res = 1;
	for (int i = 1; i <= c; i++)
	{
		res = res * i;
	}
	*fac = res;
    return;
}
int binary(int num,int*ptr,int k)
{
	if(num==0)
	{
		return k;
	}
	*(ptr+k)=num%2;
	k++;
	num=num/2;
	return binary(num,ptr,k);
	}
