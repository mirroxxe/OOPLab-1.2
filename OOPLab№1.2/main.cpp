#include "time.h"

int main() {
    Time t1, t2;

    t1.Init(12, 30, 45);
    t1.Display();

    t2.Read();
    t2.Display();

    // Операції додавання та віднімання секунд
    Time t3 = t1.operator+(60);  
    t3.Display();

    Time t4 = t2.operator-(30);  
    t4.Display();

    // Переведення в секунди та хвилини
    std::cout << "t1 in seconds: " << t2.toSeconds() << std::endl;
    std::cout << "t2 in minutes: " << t2.toMinutes() << std::endl;

    return 0;
}