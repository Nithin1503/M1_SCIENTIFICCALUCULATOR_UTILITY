#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{ int operation, j, x, y;
  float p, q, answer;
  printf("*****WELCOME TO SCIENTIFIC CALCULATOR*****");
  printf("\nSelect your operation from 1 to 18 given below:\n");
  printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
  printf("5. Modulus\n6. Sin(P)\n7. Cos(P)\n8. Tan(P)\n");
  printf("9. Cosec(P)\n10. Cot(P)\n11. Sec(P)\n12. Square root\n");
  printf("13. Cuberoot\n14. Power\n15. Squares of a numbers\n16. Cubes of a numbers\n");
  printf("17. log10(P)\n18. Factorial\n ");
  printf("Enter the operation number you want to perform:\n");
  scanf("%d",&operation);
  switch(operation){
  	case 1:
  	printf("Enter the value of P:");
  	scanf("%f",&p);
  	printf("Enter the value of Q:");
  	scanf("%f",&q);
  	answer = p+q;
  	printf("\nAnswer:%.2f", answer);
  	break;
  	case 2:
  	printf("Enter the value of P:");
  	scanf("%f",&p);
  	printf("Enter the value of Q:");
  	scanf("%f",&q);
  	answer = p-q;
  	printf("\nAnswer:%.2f", answer);
  	break;
  	case 3:
  	printf("Enter the value of P:");
  	scanf("%f",&p);
  	printf("Enter the value of Q:");
  	scanf("%f",&q);
  	answer = p*q;
  	printf("\nAnswer:%.2f", answer);
  	break;
  	case 4:
  	printf("Enter the value of P:");
  	scanf("%f",&p);
  	printf("Enter the value of Q:");
  	scanf("%f",&q);
  	answer= p/q;
  	printf("\nAnswer:%.2f", answer);
  	break;
  	case 5:
  	printf("Enter the value of X:");
  	scanf("%d",&x);
  	printf("Enter the value of Q:");
  	scanf("%d",&y);
  	answer = x%y;
  	printf("\nAnswer:%.2f", answer);
  	break;
  	case 6:
  	printf("Enter the value of P:");
  	scanf("%f",&p);
  	answer = sin(p*3.14159/180);
  	printf("\nAnswer:%.2f", answer);
  	break;
  	case 7:
  	printf("Enter the value of P:");
  	scanf("%f",&p);
  	answer = cos(p*3.14159/180);
  	printf("\nAnswer:%.2f", answer);
  	break;
  	case 8:
  	printf("Enter the value of P:");
  	scanf("%f",&p);
  	if (p==90||p==270){
  		printf("Answer is undefined");
	  }
	else{
		answer = tan(p*3.14159/180);
  	printf("\nAnswer:%.2f", answer);}
  	break;
  	case 9:
  	printf("Enter the value of P:");
  	scanf("%f",&p);
  	if (p==0||p==180||p==360){
  		printf("Answer is undefined");
	  }
	else{
  	answer = 1/sin(p*3.14159/180);
  	printf("\nAnswer:%.2f", answer);}
  	break;
  	case 10:
  	printf("Enter the value of P:");
  	scanf("%f",&p);
  	if (p==0||p==180||p==360){
  		printf("Answer is undefined");
	  }
	else{
  	answer = 1/tan(p*3.14159/180);
  	printf("\nAnswer:%.2f", answer);}
  	break;
  	case 11:
  	printf("Enter the value of P:");
  	scanf("%f",&p);
  	if (p==90||p==270){
  		printf("Answer is undefined");
	  }
	else{
  	answer = 1/cos(p*3.14159/180);
  	printf("\nAnswer:%.2f", answer);}
  	break;
  	case 12:
  	printf("Enter the value of P:");
  	scanf("%f",&p);
  	answer = sqrt(p);
  	printf("\nAnswer:%.2f", answer);
  	break;
  	case 13:
	printf("Enter the value of X:");
  	scanf("%d",&x);
  	answer = cbrt(x);
  	printf("\nAnswer:%.2f", answer);
  	break;
  	case 14:
  	printf("Enter the value of P:");
  	scanf("%f",&p);
  	printf("Enter the value of Q:");
  	scanf("%f",&q);
  	answer = pow(p,q);
  	printf("\nAnswer:%.2f", answer);
  	break;
  	case 15:
  	printf("Enter the value of P:");
  	scanf("%f",&p);
  	answer = pow(p,2);
  	printf("\nAnswer:%.2f", answer);
  	break;
  	case 16:
  	printf("Enter the value of P:");
  	scanf("%f",&p);
  	answer = pow(p,3);
  	printf("\nAnswer:%.2f", answer);
  	break;
  	case 17:
  	printf("Enter the value of P:");
  	scanf("%f",&p);
  	answer = log10(p);
  	printf("\nAnswer:%.2f", answer);
  	break;
	case 18:
  	printf("Enter the number you want to find the factorial of X:");
  	scanf("%d",&x);	
  	if (x<0)
  	{ printf("\n Please enter the positive number to find the factorial");
  	  
	  }
	  else{
	  int i, fact=1;
	  for(i=1;i<=x;i++){
	   fact= fact*i; 
	   }
	  printf("\n");
	  printf("factorial of number is:%d\n", fact);}
	break;
	default:
	printf("\nInvalid operation");
	}
	 }
  
