#include "pch.h"
#include "CppUnitTest.h"
#include "time.h"
#include "../OOPLab№1.2/Time.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(TimeTest)
	{
	public:

		TEST_METHOD(ToSecondsTest)
		{
			Time t(1, 30, 45); 

			Assert::AreEqual(t.toSeconds(), 5445U);
		}
	};
}
