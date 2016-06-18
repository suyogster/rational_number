#include <stdio.h>

typedef struct {
	int numerator;
	int denominator;
	
}rational;

rational makerational(int,int);
rational add_rational(rational,rational);
rational mul_rational(rational,rational);
rational equal_rational(rational,rational);

void main(){
	
	rational r1= makerational(10,3);
	rational r2= makerational(10,3);
	rational sum= add_rational(r1,r2);
	rational mul=mul_rational(r1,r2);
	rational equal = equal_rational(r1,r2);
	printf("The rank is %d/%d\n",sum.numerator,sum.denominator);
	printf("The product is %d/%d\n",mul.numerator,mul.denominator);
}


rational makerational(int a, int b){

	rational r_number;
	r_number.numerator=a;
	r_number.denominator = b;
	return r_number;

}

rational add_rational(rational a,rational b)
{
	
	rational result;
	result.numerator=(a.numerator * b.denominator) + (b.numerator * a.denominator);
	result.denominator= (a.denominator * b.denominator);
     return result;
}

rational mul_rational(rational a, rational b){
	rational result;
	result.numerator=(a.numerator * b.numerator);
	result.denominator=(a.denominator * b.denominator);
	return result;
	
}

rational equal_rational(rational a, rational b){
	
	if (a.numerator==b.numerator && a.denominator == b.denominator){
	printf("It is Equal\n");
	}else {
	printf("It is not equal\n");
	}
}



