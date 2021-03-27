#include <stdio.h>
#include <stdlib.h>

int main()
{
  int biology,chemistry,physics,maths,kannada,english,marks[100];
  float Average;total;
  printf("Enter the marks of 6 subjects:\n'");
  scanf("%d,%d,%d,%d,%d,%d",&biology,&chemistry,&physics,&maths,&english);
  Total=biology+chemistry+physics+maths+kannada+english;
  Average=Total/6;
  printf("Total marks=%2f\n",Total);
  printf("Average marks=%2f\n",Average);
  return 0;
}
