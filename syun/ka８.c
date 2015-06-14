#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
  char *s1 ;
  char *s2 = "log";
  char *s3 = "sin";
  char *s4 = "cos";
  char *s5 = "tan";
  char *s6 = "sqrt";
  char *s7 = "exp";
  int ret;
  double x,xt,a,n,sum=0;

  printf("Which function > ");  
  scanf("%s",s1);//関数入力

  printf("Input region > ");  
  scanf("%lf", &a);
  scanf("%lf", &n);//範囲の入力


  printf("input tics > ");  
  scanf("%lf", &xt);

  ret = strcmp( s1, s2 );//logの積分
  if( ret == 0 ){
    for(x=a; x<n; x+=xt)       sum += xt * log(x);
    printf("Integrate of log(x) : %f\n", sum);
  }

  ret = strcmp( s1, s3 );//sinの積分
  if( ret == 0 ){
    for(x=a; x<n; x+=xt)       sum += xt * sin(x);
    printf("Integrate of sin(x) : %f\n", sum);
  }
  
  ret = strcmp( s1, s4 );//cosの積分                                                  
  if( ret == 0 ){
    for(x=a; x<n; x+=xt)       sum += xt * cos(x);
    printf("Integrate of cos(x) : %f\n", sum);
  }

  ret = strcmp( s1, s5 );//tanの積分                                                  
  if( ret == 0 ){
    for(x=a; x<n; x+=xt)       sum += xt * tan(x);
    printf("Integrate of tan(x) : %f\n", sum);
  }
  ret = strcmp( s1, s6 );//sqrtの積分                                             
  if( ret == 0 ){
    for(x=a; x<n; x+=xt)       sum += xt * sqrt(x);
    printf("Integrate of sqrt(x) : %f\n", sum);
  }

  ret = strcmp( s1, s7 );//expの積分                                                
  if( ret == 0 ){
    for(x=a; x<n; x+=xt)       sum += xt * exp(x);
    printf("Integrate of exp(x) : %lf\n", sum);
  }


  return 0;
}
