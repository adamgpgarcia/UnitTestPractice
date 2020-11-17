/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("racecar");
    ASSERT_TRUE(actual);

}

TEST(PracticeTest, is_non_character)
{
    Practice obj;
    bool actual = obj.isPalindrome("$!^");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_blank_entry)
{
    Practice obj;
    bool actual = obj.isPalindrome("");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_mixed_value)
{
    Practice obj;
    bool actual = obj.isPalindrome("ss^!^ss");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_easy_sort)
{
    int first = 1;
    int second = 2;
    int third = 3;
    Practice obj;
    bool actual = obj.sortDescending(first, second, third);
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_complex_sort)
{
    int first = 10;
    int second = 1;
    int third = 13;

    Practice obj;
    bool actual = obj.sortDescending(first, second, third);
    ASSERT_TRUE(actual);
}


