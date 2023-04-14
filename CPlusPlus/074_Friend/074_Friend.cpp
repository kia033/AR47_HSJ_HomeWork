﻿// 074_Friend.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class B;
class A
{
    // 특정 클래스에서 자신의 접근제한 지정자를
    // 취소시키는 문법
    friend B;

private:
    int Value = 0;
};

class B
{
public:
    void Function(A& _Other)
    {
        _Other.Value = 20;
    }
};

class C
{

};

int main()
{
    A NewA;
    B NewB;

    NewB.Function(NewA);

    std::cout << "Hello World!\n";
}
