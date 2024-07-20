#include "calculator.h"
#include <gtest/gtest.h>

TEST(CalculatorTest, Addition) {
    Calculator calc;
    EXPECT_DOUBLE_EQ(calc.add(1, 1), 2);
    EXPECT_DOUBLE_EQ(calc.add(-1, 1), 0);
    EXPECT_DOUBLE_EQ(calc.add(-1, -1), -2);
}

TEST(CalculatorTest, Subtraction) {
    Calculator calc;
    EXPECT_DOUBLE_EQ(calc.subtract(1, 1), 0);
    EXPECT_DOUBLE_EQ(calc.subtract(-1, 1), -2);
    EXPECT_DOUBLE_EQ(calc.subtract(-1, -1), 0);
}

TEST(CalculatorTest, Multiplication) {
    Calculator calc;
    EXPECT_DOUBLE_EQ(calc.multiply(2, 3), 6);
    EXPECT_DOUBLE_EQ(calc.multiply(-2, 3), -6);
    EXPECT_DOUBLE_EQ(calc.multiply(-2, -3), 6);
}

TEST(CalculatorTest, Division) {
    Calculator calc;
    EXPECT_DOUBLE_EQ(calc.divide(6, 3), 2);
    EXPECT_DOUBLE_EQ(calc.divide(-6, 3), -2);
    EXPECT_DOUBLE_EQ(calc.divide(-6, -3), 2);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
