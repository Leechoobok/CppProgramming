#include <iostream>
#include <string>
using namespace std;

int main(){
    string names[5];//string 배열 선언

    for(int i=0;i<5; i++){
        cout << "이름 >> ";
        getline(cin, names[i], '\n');
    }

    string latter = name[0];
    for(int i = 1; i<5; i++){
        if(latter < names[i]){ // names[i]가 latter보다 뒤에 온다면
            latter = name[i]; // latter 문자열 변경
        }
    }
    cout << "사전에서 가장 뒤에 나오는 문자열은 " << latter << endl;
    
}