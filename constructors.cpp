#include <iostream>
using namespace std;
class student{
    public:
    int a;
    int b;
    
    student(int x,int y){
        a=x;
        b=y;
    }
    
    student(student &obj){
        a=obj.a;
        b=obj.b;
    }
    
   ~student(){
       cout<<"Destructor called";
   }
};
int main() {
	// your code goes here
    student obj1(2,3);
    student obj2(obj1);
    cout<<obj2.a;
    
	return 0;
}
