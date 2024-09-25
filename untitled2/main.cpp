#include <iostream>

// antarctica_years_end 구조체 정의
struct antarctica_years_end
{
    int year;
    // 실제로는 더 많은 흥미로운 데이터가 있겠죠!
};

int main()
{
    // antarctica_years_end 구조체 변수 3개 선언
    antarctica_years_end s01, s02, s03;

    // s01 구조체의 year 멤버 변수에 1998 할당
    s01.year = 1998;

    // antarctica_years_end 구조체 포인터 변수 pa 선언, s02의 주소 할당
    antarctica_years_end * pa = &s02;

    // pa 포인터를 통해 s02 구조체의 year 멤버 변수에 1999 할당
    pa->year = 1999;

    // antarctica_years_end 구조체 배열 trio 선언 (크기 3)
    antarctica_years_end trio[3];

    // trio 배열의 첫 번째 요소(trio[0])의 year 멤버 변수에 2003 할당
    trio[0].year = 2003;

    // trio 배열의 첫 번째 요소(trio[0])의 year 멤버 변수 값 출력
    std::cout << trio->year << std::endl;

    // const antarctica_years_end 구조체 포인터 배열 arp 선언 (크기 3), s01, s02, s03의 주소 할당
    const antarctica_years_end * arp[3] = {&s01, &s02, &s03};

    // arp 배열의 두 번째 요소(arp[1])가 가리키는 구조체의 year 멤버 변수 값 출력
    std::cout << arp[1]->year << std::endl;

    // const antarctica_years_end 구조체 포인터의 포인터 변수 ppa 선언, arp 배열의 시작 주소 할당
    const antarctica_years_end ** ppa = arp;

    // C++11 자동 타입 추론 기능을 사용하여 ppb 변수 선언, arp 배열의 시작 주소 할당
    auto ppb = arp;
    // 또는 명시적으로 const antarctica_years_end ** ppb = arp; 로 선언할 수도 있음

    // ppa가 가리키는 포인터가 가리키는 구조체의 year 멤버 변수 값 출력 (즉, arp[0]->year)
    std::cout << (*ppa)->year << std::endl;

    // ppb + 1 (즉, arp[1])이 가리키는 포인터가 가리키는 구조체의 year 멤버 변수 값 출력
    std::cout << (*(ppb+1))->year << std::endl;

    // std::cin.get();
    return 0;
}
