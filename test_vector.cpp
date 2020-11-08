#include <iostream>
#include <vector>
#include <string>
#include "gtest/gtest.h"

// Test vector with Integers
std::vector <int> test_1; // Global Vector For Testing. 

TEST(Vector , IntEmptyVector ) {

    ASSERT_EQ(test_1.size(), 0);
    EXPECT_EQ(test_1.size(), 0);

}

TEST(Vector, IntElements_in_EmptyVector ) {


    ASSERT_EQ(test_1.empty(), 1);
    EXPECT_EQ(test_1.empty(), 1);
}

TEST(Vector, IntIntegers_FirstElement) {

    // Testing Single Element in vector

    test_1.push_back(1);
    // Check if index[0] == 1
    ASSERT_EQ(test_1[0], 1 ) << "Element at index 0 is 1";
    EXPECT_EQ(test_1[0], 1) << "Element at index 0 is 1";

}

TEST(Vector, IntGeneralUpperBoundaryTesting ) {

    // Push int max to the vector
    test_1.push_back(INT_MAX);

    // Check the max boundaries 
    ASSERT_EQ(test_1[1], INT_MAX) << " Boundary testing of max of int";
    EXPECT_EQ(test_1[1], INT_MAX) << " Boundary testing of max of int";




}

TEST(Vector, IntGeneralLowerBoundaryTesting ) {

    // Check the minimum boundaries 
    // Push int min to the vector
    test_1.push_back(INT_MIN);

    // Check the minimum boundaries of int
    ASSERT_EQ(test_1[2], INT_MIN);
    EXPECT_EQ(test_1[2], INT_MIN);

}

TEST(Vector, IntUpperBoundaryRobustTesting) {

    // Check the max boundaries 
    ASSERT_NE(test_1[1], INT_MAX + 1) << " Boundary testing of max of int";
    EXPECT_NE(test_1[1], INT_MAX + 1) << " Boundary testing of max of int";

}

TEST(Vector, IntLowerBoundaryRobustTesting) {

    // Check the minimum boundaries 
    // Push int min to the vector
    test_1.push_back(INT_MIN);
    // Check the minimum boundaries of int
    ASSERT_NE(test_1[2], INT_MIN-1);
    EXPECT_NE(test_1[2], INT_MIN-1);
}
    
// Test vector with float
// Testing Single Element in vector
std::vector <float> test_2;

TEST(Vector, FloatElementsinVector ) {

    test_2.push_back(1.567);

    // Check if index[0] == 1
    ASSERT_FLOAT_EQ(test_2[0], 1.567 ) << "Element at index 0 is 1";
    EXPECT_FLOAT_EQ(test_2[0], 1.567 ) << "Element at index 0 is 1";
    ASSERT_NE(test_2[0], -0.2) << "Element at index 0 is not 1.567";

}

TEST(Vector, FloatGenUpperBoundary ) {

    // Push int max to the vector
    test_2.push_back(FLT_MAX);

    // Check the max boundaries 
    ASSERT_EQ(test_2[1], FLT_MAX) << " Boundary testing of max of int";
    EXPECT_EQ(test_2[1], FLT_MAX) << " Boundary testing of max of int";

}

TEST(Vector, FloatGenLowerBoundary ) {

    // Check the minimum boundaries 
    // Push int min to the vector
    test_2.push_back(FLT_MIN);

    // Check the minimum boundaries of int
    ASSERT_EQ(test_2[2], FLT_MIN);
    EXPECT_EQ(test_2[2], FLT_MIN);

}
TEST(Vector, FloatEmptyVector) {


    // Clear the vector 
    test_1.clear();

    // Test the cleared vector
    ASSERT_NE(test_1[0], 6.0) << " Value at index 0 is not equal to 6";
    EXPECT_NE(test_1[0], 6.0) << " Value at index 0 is not equal to 6";

}

// Testing Single Element in vector
std::vector <std::string> test_3;

// Test vector with String
TEST(Vector, StringwithSingleElement) { 

    // Test a single string character
    test_3.push_back("a"); 

    // Check if index[0] == a
    ASSERT_EQ(test_3[0], "a" ) << "Element at index 0 is a";
    EXPECT_EQ(test_3[0], "a" ) << "Element at index 0 is a";
    ASSERT_NE(test_3[0], "b") << "Element at index 0 is not a";


}

TEST(Vector, StringSpecialCaseBoundaryTesting ) {

    // Push \0 to the vector.
    test_3.push_back("\0");

    // Check the max boundaries 
    ASSERT_EQ(test_3[1], "\0") << " Boundary testing of string with backspace 0";
    EXPECT_EQ(test_3[1], "\0") << " Boundary testing of string with backspace 0";

}

TEST(Vector, StringwithNoElement) {
    // Test vector with no character string.  
    // Push int min to the vector.
    test_3.push_back("");

    // Check the minimum boundaries of int.
    ASSERT_EQ(test_3[2], "") << " Testing no character string ";
    EXPECT_EQ(test_3[2], "") << " Testing no character string ";

}

TEST(Vector, TestemptyStringVector) {

    // Clear the vector 
    test_3.clear();

    // Test the cleared vector
    ASSERT_NE(test_3[0], "t") << " Value at index 0 is not equal to 6";
    EXPECT_NE(test_3[0], "t") << " Value at index 0 is not equal to 6";
}

int main(int argc, char **argv ) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
