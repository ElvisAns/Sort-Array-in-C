#include <stdio.h>
#include <stdlib.h>

int numbers[5];
int comparaison_function(const void* a, const void* b)
{
int l=*(const int *)a;
int r=*(const int *)b;
if(l>r) return -1;
if(r>l) return 1;
return 0;
}


main(){
int n1,n2,n3,n4,n5;
printf("Enter numbers\n");
printf("n1:\n");
scanf("%d",&n1);
printf("n2:\n");
scanf("%d",&n2);
printf("n3:\n");
scanf("%d",&n3);
printf("n4:\n");
scanf("%d",&n4);
printf("n5:\n");
scanf("%d",&n5);
numbers[0]=n1;
numbers[1]=n2;
numbers[2]=n3;
numbers[3]=n4;
numbers[4]=n5;

int xx=0;
printf("\nBefore sorting the array was are\n");
for(xx=4;xx>=0;xx--)
printf("%d\t",numbers[xx]);

int size=sizeof numbers/ sizeof *numbers;
qsort(numbers,size,sizeof(int),comparaison_function);
printf("\nSorted numbers are\n");
int yy=0;

for(yy=4;yy>=0;yy--)
printf("%d\t",numbers[yy]);
}
