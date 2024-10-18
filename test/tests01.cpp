#include <gtest/gtest.h>
#include "../include/task.h"

TEST(basic_test_set, test01)
{
    double upspeed = 100;
    double downspeed = 10;
    double desired = 910;
    int result = task(upspeed, downspeed, desired);
    ASSERT_TRUE(result == 10);
}

TEST(basic_test_set, test_02)
{
    double upspeed = 1;
    double downspeed = 0.5;
    double desired = 1;
    int result = task(upspeed, downspeed, desired);
    ASSERT_TRUE(result == 1);
}

TEST(basic_test_set, test_03)
{
    double upspeed = 1;
    double downspeed = 0.5;
    double desired = 2;
    int result = task(upspeed, downspeed, desired);
    ASSERT_TRUE(result == 3);
}

TEST(basic_test_set, test_04)
{
    double upspeed = 2;
    double downspeed = 1;
    double desired = 3;
    int result = task(upspeed, downspeed, desired);
    ASSERT_TRUE(result == 2);
}

TEST(basic_test_set, test_05)
{
    double upspeed = 0.5;
    double downspeed = 0.25;
    double desired = 1;
    int result = task(upspeed, downspeed, desired);
    ASSERT_TRUE(result == 3);
}

TEST(basic_test_set, test_06)
{
    double upspeed = 1;
    double downspeed = 1;
    double desired = 1;
    int result = task(upspeed, downspeed, desired);
    ASSERT_TRUE(result == 1);
}

TEST(basic_test_set, test_07)
{
    double upspeed = 0;
    double downspeed = 0.5;
    double desired = 1;
    int result = task(upspeed, downspeed, desired);
    ASSERT_TRUE(result == -1);
}

TEST(basic_test_set, test_08)
{
    double upspeed = 1;
    double downspeed = 0;
    double desired = 1000;
    int result = task(upspeed, downspeed, desired);
    ASSERT_TRUE(result == 1000);
}

TEST(basic_test_set, test_09)
{
    double upspeed = 1;
    double downspeed = 0.5;
    double desired = 0;
    int result = task(upspeed, downspeed, desired);
    ASSERT_TRUE(result == 0);
}

TEST(basic_test_set, test_10)
{
    double upspeed = 1;
    double downspeed = 0.5;
    double desired = -1;
    int result = task(upspeed, downspeed, desired);
    ASSERT_TRUE(result == -1);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}