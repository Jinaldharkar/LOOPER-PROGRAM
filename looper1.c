#include<stdio.h>
#include<conio.h>

void main()
{
  char alpha = 'a';
  
  do 
  {
  	printf("%c ",alpha);
  	alpha = alpha +4;  //a+4 = three alphabets and it will print fourth char which is E 
//  	                   a,b,c,d,e 
//  	                   e+4=i
  }                   
  while (alpha <= 'z');
  
  
}
