#include <stdio.h>
int busca_bee(int *a ,int inicio, int final, int x);
int menor=0, maior=0;
int main()
{
	int alt_n, alt_q,i=0;
	scanf("%d",&alt_n);
	int ladys[alt_n];
	for(i=0; i<alt_n; i++)
	{
		scanf("%d",&ladys[i]);
	}
	scanf("%d",&alt_q);
	int chimp[alt_q];
	for(i = 0; i < alt_q; i++)
	{
		scanf("%d",&chimp[i]);
	}

	/*printf("%d %d\n",alt_n, alt_q);
	for(i = 0; i < alt_n; ++i)
	{
		printf("%d ",ladys[i]);
	}
	printf("\n");
	for(i = 0; i < alt_n; ++i)
	{
		printf("%d ",chimp[i]);
	}*/
	int aux;

	for(i = 0; i < alt_q; i++)
	{
		menor=0, maior=0;
		aux = busca_bee(ladys,0,alt_n,chimp[i]);
		printf("%d\n",aux);

	}

return 0;
}

int busca_bee(int *a ,int inicio, int final, int x)
{
	if(inicio>final) return -1;
	int mid = (inicio+final)/2;
	if(x == a[mid])
	{
		return mid;
	}
	else if(x > a[mid])
	{
		return busca_bee(a,mid+1,final,x);
	}
	else
	{
		return busca_bee(a,inicio,mid,x);
	}
}