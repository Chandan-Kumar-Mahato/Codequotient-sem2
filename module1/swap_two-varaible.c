#include <stdio.h>
/* Include other headers as needed */
void swap(int *a,int* b)
{
	int temp ;
  temp = *b;
  *b = *a;
  *a = temp;
}
int main()
{
  int x,y;
  scanf("%d%d",&x,&y);
  swap(&x,&y);
printf("%d\n%d",x,y);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}