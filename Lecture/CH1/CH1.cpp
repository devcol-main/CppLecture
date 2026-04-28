#include <iostream>

using namespace std;

int main()
{
    // 1. 입력 받은 숫자를 저장 할 2개의 변수를 선언
    int firstNum = 0;
    int secondNum = 0;

    cout << "첫 번째 수 입력 : ";
    cin >> firstNum;

    cout << "두 번째 수 입력 : ";
    cin >> secondNum;

    //더한 결과값 출력
    cout << "더한 결과는 : " << firstNum + secondNum << endl;

    return 0;
}