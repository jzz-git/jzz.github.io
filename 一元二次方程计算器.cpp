#include<stdio.h>
#include<math.h>
#include<windows.h> 
int main(){
  int a,b,c;
  printf("һԪ���η��̼����� ���ֻ��С���������޷����㣡 ������ʽ��ax��ƽ��+bx+c=0 by��jzz\n������ϵ��a,b,c��ֵ���ÿո�ֿ�:");
  scanf("%d%d%d",&a,&b,&c);
  double delta,x1,x2,m,n;
  delta=b*b-4*a*c;
  if(delta>0){
  	x1=(-b+sqrt(delta))/(2*a);
  	x2=(-b-sqrt(delta))/(2*a);
	printf("������ɣ�ԭ���̵ĵĽ�Ϊx1=%f,x2=%f\n",x1,x2);
  }
   if(delta==0){
  	x1=(-b)/(2*a);
  	x2=x1;
  	printf("������ɣ�ԭ���̵ĵĽ�Ϊx1=%f,x2=%f\n",x1,x2);
  }
   
 if(delta<0){
 	m=(-b)/(2*a);
  	n=sqrt(-delta)/(2*a);
  	printf("������ɣ�ԭ���̵ĵĽ�Ϊ:x1=%8.4f+%8.4fi ; x2=%8.4f-%8.4fi\n ",m,n,m,n);
  }
  system("pause");
  return 0;
}
