﻿// 078_BitTest.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    // 1
    int Value = 0b00000000000000000000000000000001;

    int* Ptr = &Value;

    char* ChPtr = reinterpret_cast<char*>(Ptr);


    // 리틀에디안 빅에디안
    //    Test0    Test1    Test2    Test3
    // 0b 00000000 00000000 00000000 00000001
    //    Test0    Test1    Test2    Test3
    // 0b 00000001 00000000 00000000 00000000

    char Test0 = ChPtr[0];
    char Test1 = ChPtr[1];
    char Test2 = ChPtr[2];
    char Test3 = ChPtr[3];

    std::cout << "Hello World!\n";
}
