#include "gtest/gtest.h"

#include "SensorTests.h"
#include "SensorMemoryTests.h"
#include "FuzzyOperationsTests.h"
#include "ActuatorCooperationTests.h"

GTEST_API_ int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}