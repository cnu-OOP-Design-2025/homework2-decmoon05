#include "homework2-1.h"
#include <iostream>
/* TODO IntClac 네임스페이스 및 함수 정의하기 */
namespace IntCalc
{
    int add(int x, int y)
    {
        return x + y;
    }
    int subtract(int x, int y)
    {
        return x - y;
    }
    int multiply(int x, int y)
    {
        return x * y;
    }
    int divide(int x, int y)
    {
        return x / y;
    }
}

/* TODO FloatClac 네임스페이스 및 함수 정의하기 */
namespace FloatCalc
{
    float add(float x, float y)
    {
        return x + y;
    }
    float subtract(float x, float y)
    {
        return x - y;
    }
    float multiply(float x, float y)
    {
        return x * y;
    }
    float divide(float x, float y)
    {
        return x / y;
    }

}
