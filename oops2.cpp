#include<iostream>
using namespace std;
class rectangle{
	private :
		int length;
		int breadth;
	public:
		rectangle();
		rectangle(int length, int breadth);
		rectangle(rectangle &r);
		void setlength(int l);
		void setbreadth(int b);
		int getlength(){
			return length;
		}
		int getbreadth(){
			return breadth;
		}
		int area();
		int perimeter();
		bool isSquare();
		
};
int main(){
	rectangle rc(20,30);
	cout<<rc.area();
	cout<<rc.perimeter()<<endl;
	cout<<rc.getbreadth();
	return 0;
}
rectangle::rectangle(){
	length=0;
	breadth=0;
}
rectangle::rectangle(int length, int breadth){
	this->length=length;
	this->breadth=breadth;
}
rectangle::rectangle(rectangle &r){
	length=r.length;
	breadth=r.breadth;
}
void rectangle::setlength(int l){
	length=l;
}
void rectangle::setbreadth(int b){
	breadth=b;
}

int rectangle::area(){
	return length*breadth;
}
int rectangle::perimeter(){
	return (length+breadth)/2;
}
bool rectangle::isSquare(){
	return length==breadth;
}
