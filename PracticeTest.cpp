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
    bool actual = obj.isPalindrome("aa");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_not_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("Ca");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_palindrome_oneLetter)
{
    Practice obj;
    bool actual = obj.isPalindrome("a");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_palindrome_threeLetter)
{
    Practice obj;
    bool actual = obj.isPalindrome("cdc");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_palindromefourLetter)
{
    Practice obj;
    bool actual = obj.isPalindrome("abba");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_palindrome_oneLetterCaps)
{
    Practice obj;
    bool actual = obj.isPalindrome("A");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_palindrome_threeLetterCaps)
{
    Practice obj;
    bool actual = obj.isPalindrome("CDC");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_palindromefourLetterCaps)
{
    Practice obj;
    bool actual = obj.isPalindrome("AbBa");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_palindromeFiveLetterMix)
{
    Practice obj;
    bool actual = obj.isPalindrome("ABcBA");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_NotPalFourLetterMix)
{
    Practice obj;
    bool actual = obj.isPalindrome("aaDA");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_NotPalFiveLetterMix)
{
    Practice obj;
    bool actual = obj.isPalindrome("ABcdA");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, sort_increasing_first)
{
    Practice obj;
		bool actual;
		int frst = 1;
		int scnd = 3;
		int thrd = 5;
		obj.sortDescending(1,3,5);
    if ( (frst >= scnd) || (scnd >= thrd) ) {
				ASSERT_TRUE(actual);
		}
		else {
			ASSERT_FALSE(actual);
		}
}
