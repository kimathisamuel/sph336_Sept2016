#include <iostream>
 
using namespace std;
 
class Line {
	public:
		void setLength( double len );
		double getLength( void );
		Line(double len);  // This is the constructor
		~Line(); // This is a destructor
 
	private:
		double length;
};

Line::Line(double len){
	cout<<"Created a line, length = "<<len<<endl;
	length = len;
}

Line::~Line(){
	cout<<"Destroying a line"<<endl;
}

void Line::setLength( double len ) {
   length = len;
}
 
double Line::getLength( void ) {
   return length;
}
