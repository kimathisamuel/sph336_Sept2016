#include"calc.h"

int main(){
	double sum, product, a=3.5, b=4.6;
	calc c;
	sum = c.add(a,b);
	product = c.multiply(a,b);
	cout<<"Sum is: "<<sum<<" Product is: "<<product<<endl;
}
