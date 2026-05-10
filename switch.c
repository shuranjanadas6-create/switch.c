#include <stdio.h>
int main()
{
  int result ,a , b,c,d;
  char operation ;
  printf("enter the oporation(+,-,*,/,):");
  scanf(" %c",& operation);
    printf("enter the number:" );
    scanf(" %d %d %d %d",&a,&b,&c, &d);
  switch(operation) {
  case '+': result = a + b+c+d; break;
  case '-': result = a - b-c-d; break;
  case '*': result = a * b*c*d; break;
  case '/': if(b != 0 && d!=0){
  result = a / b; }
  else {
    printf("error! dvision by zero.\n"); return 1;}
      break;
      
  default: printf("Invalid operator\n");
  return 1;
}
printf("result is:%d\n",result);
return 0;
}