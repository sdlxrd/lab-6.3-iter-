#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Misha\source\repos\lab 6.3\lab 6.3\lab 6.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int p;
			int k;
			p = 15;
			k = (p - 14) * 10;
			Assert::AreEqual(k, 10);
		}
	};
}
