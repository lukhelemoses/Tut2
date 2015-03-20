#include "stdafx.h"
#include "CppUnitTest.h"
#include "Fraction.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
	
		TEST_METHOD(TestaddMethod)
		{
			Fraction calc;
			Assert::AreEqual(4,calc.add(3,1));
		}

		TEST_METHOD(TestsubMethod)
		{
			Fraction calc;
			Assert::AreEqual(4, calc.subtract(5, 1));
		}

		TEST_METHOD(TestdivideMethod)
		{
			Fraction calc;
			Assert::AreEqual(4, calc.add(8, 2));
		}
		TEST_METHOD(TestaddMethod)
		{
			Fraction calc;
			Assert::AreEqual(4, calc.add(3, 1));
		}

	};
}
	};
}
	};
}
	};
}