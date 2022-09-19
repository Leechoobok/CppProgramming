#include <iostream>
using namespace std;

class Power{
	int kick;
	int punch;

public:
	Power(int kick=0, int punch=0){
        cout<<"생성~"<<kick<<punch<<endl;
		this->kick = kick; this->punch = punch;
	}
	void show();
	Power operator+(Power op2); // +연산자 함수 선언
};
void Power::show(){
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

Power Power::operator+(Power op2){
	Power tmp(5, 5); // 임시 객체 생성
	tmp.kick = this->kick + op2.kick; // kick 더하기
	tmp.punch = this->punch + op2.punch; // punch 더하기
	return tmp; // 더한 결과 리턴
}

int main(){
	Power a(3, 5), b(4, 6), c(1, 1);
	c = a + b;
	a.show();
	b.show();
	c.show();
}

/*
#include <iostream>
using namespace std;

int main(){
    cout<<"hello world"<<endl;
    int width;
    cin>>width;
}*/