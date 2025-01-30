#include "CUTE/cute/cute.h"
#include "CUTE/cute/cute_counting_listener.h"
#include "CUTE/cute/cute_runner.h"
// подключение модуля с тестируемым кодом
#include "Uym_mathtask.h"

using namespace cute;

void testCalkRectangleArea () {
    // входные значения
    int a = 3;
    b = 5;
    // ожидаемый результат
    int expected = 15;

    // получение значения с помощью тестируемого кода
    int actual = CalcRectangleArea(a,b);

    // сравнение ожидаемого результата с полученным
    ASSERT_EQUAL(expected, actual);
}

int main() {
    /**/ // создаём тестовый набор
    s.push_back(CUTE(testCalkRectangleArea));

    //создаем listener и runner
    ide_listener<> listener;
    makeRunner(listener)(s, "Test CalcRectangleAre");

    return 0;
}