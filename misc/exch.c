int compute(int a,int b)
{
	int temp=a*10+b;
	return temp;
}
void main()
{
	int c=5;
	c=c+compute(9,7);
	printf("%d\n",c);
}
