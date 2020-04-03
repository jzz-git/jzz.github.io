#include<stdio.h>
#include<math.h>
#include<windows.h> 
int main(){
  int a,b,c;
  printf("一元二次方程计算器 结果只是小数！根号无法运算！ 化简形式：ax的平方+bx+c=0 by：jzz\n请输入系数a,b,c的值，用空格分开:");
  scanf("%d%d%d",&a,&b,&c);
  double delta,x1,x2,m,n;
  delta=b*b-4*a*c;
  if(delta>0){
  	x1=(-b+sqrt(delta))/(2*a);
  	x2=(-b-sqrt(delta))/(2*a);
	printf("计算完成：原方程的的解为x1=%f,x2=%f\n",x1,x2);
  }
   if(delta==0){
  	x1=(-b)/(2*a);
  	x2=x1;
  	printf("计算完成：原方程的的解为x1=%f,x2=%f\n",x1,x2);
  }
   
 if(delta<0){
 	m=(-b)/(2*a);
  	n=sqrt(-delta)/(2*a);
  	printf("计算完成：原方程的的解为:x1=%8.4f+%8.4fi ; x2=%8.4f-%8.4fi\n ",m,n,m,n);
  }
  system("pause");
  return 0;
}
