#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Win32Project1/Win32Project1.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(1, fnWin32Project1());

		}

	};
}