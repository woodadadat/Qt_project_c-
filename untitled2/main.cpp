//new 연산자를 사용하여 Person 구조체를 동적으로 생성하고, name과 age 멤버 변수에 각각 "Alice"와 30을 할당하는 코드를 작성해보세요.
//작성한 코드에서 메모리 누수가 발생하지 않도록 delete 연산자를 사용하여 메모리를 해제하는 코드를 추가해보세요.

#include <iostream>
#include <cstring>

using namespace std;

struct Person
{
    std::string name;
    int age;
};

int main()
{
    // 1. Person 구조체 포인터 변수 선언
    Person* personPtr;

    // 2. new 연산자를 사용하여 힙 메모리에 Person 구조체 생성
    personPtr = new Person;

    // 3. 포인터 변수를 사용하여 구조체 멤버 변수에 접근하고 값 할당
    personPtr->name = "Alice";
    personPtr->age = 30;

    // 4. 결과 출력
    std::cout << "Name: " << personPtr->name << ", Age: " << personPtr->age << std::endl;

    // 5. delete 연산자를 사용하여 할당된 메모리 해제
    delete personPtr;

    return 0;
}
