#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab-6.3.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            int B[4] = { -3,4,2,-5 };
            int S = NeSumArr(B, 4, 0);
            Assert::AreEqual(S, -8);
        }
    };
}