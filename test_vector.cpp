#include <iostream>
#include <vector>
#include <string>
#include "gtest/gtest.h"

// Test vector with Integers
TEST(Vector, Integers) {

    // Testing Single Element in vector
    std::vector <int> test_1;

    test_1.push_back(1);

    // Check if index[0] == 1
    ASSERT_EQ(test_1[0], 1 ) << "Element at index 0 is 1";
    EXPECT_EQ(test_1[0], 1) << "Element at index 0 is 1";

    // Push int max to the vector
    test_1.push_back(INT_MAX);

    // Check the max boundaries 
    ASSERT_EQ(test_1[1], INT_MAX) << " Boundary testing of max of int";
    EXPECT_EQ(test_1[1], INT_MAX) << " Boundary testing of max of int";

    // Check the minimum boundaries 
    // Push int min to the vector
    test_1.push_back(INT_MIN);

    // Check the minimum boundaries of int
    ASSERT_EQ(test_1[2], INT_MIN);
    EXPECT_EQ(test_1[2], INT_MIN);

}

// Test vector with float
TEST(Vector, Float) {


    // Testing Single Element in vector
    std::vector <float> test_1;

    test_1.push_back(1.567);

    // Check if index[0] == 1
    ASSERT_FLOAT_EQ(test_1[0], 1.567 ) << "Element at index 0 is 1";
    EXPECT_FLOAT_EQ(test_1[0], 1.567 ) << "Element at index 0 is 1";
    ASSERT_NE(test_1[0], -0.2) << "Element at index 0 is not 1.567";

   
    // Push int max to the vector
    
    test_1.push_back(FLT_MAX);

    // Check the max boundaries 
    ASSERT_EQ(test_1[1], FLT_MAX) << " Boundary testing of max of int";
    EXPECT_EQ(test_1[1], FLT_MAX) << " Boundary testing of max of int";

    // Check the minimum boundaries 
    // Push int min to the vector
    test_1.push_back(FLT_MIN);

    // Check the minimum boundaries of int
    ASSERT_EQ(test_1[2], FLT_MIN);
    EXPECT_EQ(test_1[2], FLT_MIN);

    // Clear the vector 
    test_1.clear();

    // Test the cleared vector
    ASSERT_NE(test_1[0], 6.0) << " Value at index 0 is not equal to 6";
    EXPECT_NE(test_1[0], 6.0) << " Value at index 0 is not equal to 6";


}

TEST(Vector, String) { 



    // Testing Single Element in vector
    std::vector <std::string> test_1;

    // Test a single string character
    test_1.push_back("a"); 

    // Check if index[0] == a
    ASSERT_EQ(test_1[0], "a" ) << "Element at index 0 is a";
    EXPECT_EQ(test_1[0], "a" ) << "Element at index 0 is a";
    ASSERT_NE(test_1[0], "b") << "Element at index 0 is not a";


   
    // Push \0 to the vector.
    test_1.push_back("\0");

    // Check the max boundaries 
    ASSERT_EQ(test_1[1], "\0") << " Boundary testing of string with backspace 0";
    EXPECT_EQ(test_1[1], "\0") << " Boundary testing of string with backspace 0";

    // Test vector with no character string.  
    // Push int min to the vector.
    test_1.push_back("");

    // Check the minimum boundaries of int.
    ASSERT_EQ(test_1[2], "") << " Testing no character string ";
    EXPECT_EQ(test_1[2], "") << " Testing no character string ";



    // Test

    // Clear the vector 
    test_1.clear();

    // Test the cleared vector
    ASSERT_NE(test_1[0], "t") << " Value at index 0 is not equal to 6";
    EXPECT_NE(test_1[0], "t") << " Value at index 0 is not equal to 6";



}

int main(int argc, char **argv ) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}