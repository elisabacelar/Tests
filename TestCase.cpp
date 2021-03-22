#include <gtest/gtest.h>
#include <complex>
#include <stack>
#include <regex>

// Test 1: Testing complex numbers library
TEST(StdLibTest, StdComplex)
{ 
    std::complex<double> myComplex (8.0, 6.0);

    ASSERT_EQ(8.0, std::real(myComplex));
    ASSERT_EQ(6.0, std::imag(myComplex));
    ASSERT_EQ(10.0, std::abs(myComplex));
}

// Test 2: Testing string library
TEST(StdLibTest, StdString)
{ 
    std::string str ("std::string test.");

    ASSERT_EQ(1, str.find("t"));
    ASSERT_EQ(15, str.find_last_of("t"));
    ASSERT_EQ("ring", str.substr(7,4));
}

// Test 3: Testing map container class
TEST(StdLibTest, StdMap)
{
    std::map<int, char> myMap;
    myMap.emplace(5, 'a');
    myMap.emplace(12, 'b');

    ASSERT_EQ('a', myMap[5]);
    ASSERT_EQ(2, myMap.size());
    ASSERT_EQ('b', myMap.find(12)->second);
}

// Test 4: Testing swap operation
TEST(StdLibTest, StdSwap)
{
    int x = 10, y = 20;
    std::swap(x, y);
    ASSERT_EQ(20, x);
    ASSERT_EQ(10, y);
    
    std::string str = "test";
    std::string str2;
    std::swap(str,str2);
    ASSERT_TRUE(str.empty());
}

// Auxiliar function used for sorting in descending order
bool myFunction (int i, int j) { return (i > j); }

// Test 5: Testing sort operation
TEST(StdLibTest, StdSort)
{
    int vec[] = {6, 7, 4, 5, 2, 3, 1};

    std::sort(vec, vec + 4);
    int vec2[] = {4, 5, 6, 7, 2, 3, 1};
    for(int i = 0; i < 7; i++)
    {
        ASSERT_EQ(vec2[i], vec[i]);
    }
    
    std::sort(vec, vec + 7);
    int vec3[] = {1, 2, 3, 4, 5, 6, 7};
    for(int i = 0; i < 7; i++)
    {
        ASSERT_EQ(vec3[i], vec[i]);
    }
    
    std::sort(vec, (vec + 7), myFunction);
    int vec4[] = {7, 6, 5, 4, 3, 2, 1};
    for(int i = 0; i < 7; i++)
    {
        ASSERT_EQ(vec4[i], vec[i]);
    }
}

// Test 6: Testing merge operation
TEST(StdLibTest, StdMerge)
{
    int first[] = {1, 3, 5, 7};
    int second[] = {2, 4, 6, 8};
    int result[8];
    
    std::merge(first, first + 4, second, second + 4, result);
    int answer[] = {1, 2, 3, 4, 5, 6, 7, 8};
    for(int i = 0; i < 8; i++)
    {
        ASSERT_EQ(answer[i], result[i]);
    }
    
    std::sort(first, (first + 4), myFunction);
    std::sort(second, (second + 4), myFunction);
    std::merge(first, first + 4, second, second + 4, result, myFunction);
    int answer2[] = {8, 7, 6, 5, 4, 3, 2, 1};
    ASSERT_EQ(*answer2, *result);
}

// Testing stack container class
TEST(StdLibTest, StdStack)
{
    std::stack<int> myStack;
    for(int i = 0; i < 5; i++)
    {
        myStack.push(i);
    }
    ASSERT_EQ(4, myStack.top());
    
    myStack.pop();
    ASSERT_EQ(3, myStack.top());
    
    myStack.push(13);
    ASSERT_EQ(13, myStack.top());
}

// Test 8: Testing Regular Expressions class
TEST(StdLibTest, StdRegex)
{
    std::string str = "test_1";
    std::regex a("test_[0-9]");
    ASSERT_TRUE(std::regex_match(str, a));
    
    std::regex b("[0-9]");
    ASSERT_EQ("test_one", regex_replace(str, b, "one"));
}    

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
