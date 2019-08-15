#include <iostream>
#include <gtest/gtest.h>
#include "foo.hpp"
#include "foo.cpp"

class FooTest : public ::testing::Test {
protected:
  Foo<int> foo;
};

TEST_F(FooTest, TestAdd) {
  EXPECT_EQ(2, foo.add(1, 1));
  EXPECT_EQ(3, foo.add(1, 2));
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
