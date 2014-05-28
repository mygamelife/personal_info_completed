#include "unity.h"
#include "personal_info.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_age_range_and_return_1(void)
{	
	int ans;
	struct PersonInfo_t PersonInfo;

	ans = setAge(&PersonInfo,40);

	TEST_ASSERT_EQUAL(1 , ans);
}

void test_age_negative_value_and_return_0(void)
{	
	int ans;
	struct PersonInfo_t PersonInfo;

	ans = setAge(&PersonInfo,-40);

	TEST_ASSERT_EQUAL(0 , ans);
}

void test_age_largest_value_and_return_0(void)
{	
	int ans;
	struct PersonInfo_t PersonInfo;

	ans = setAge(&PersonInfo,140);

	TEST_ASSERT_EQUAL(0 , ans);
}

void test_height_equal_to_3_and_return_1(void)
{	
	int ans;
	struct PersonInfo_t PersonInfo;

	ans = setHeight(&PersonInfo,3);

	TEST_ASSERT_EQUAL(1 , ans);
}

void test_height_less_than_or_equal_zero_and_return_0(void)
{	
	int ans;
	struct PersonInfo_t PersonInfo;

	ans = setHeight(&PersonInfo,0);

	TEST_ASSERT_EQUAL(0 , ans);
}

void test_telephone_num_range_should_return_1(void)
{
	int ans;
	struct PersonInfo_t PersonInfo;

	ans = setTelephone(&PersonInfo,12556547);
	TEST_ASSERT_EQUAL(1 , ans);
}

void test_telephone_num_more_than_8_range_should_return_0(void)
{
	int ans;
	struct PersonInfo_t PersonInfo;

	ans = setTelephone(&PersonInfo,123456789);
	TEST_ASSERT_EQUAL(0 , ans);
}

void test_telephone_num_less_than_8_range_should_return_0(void)
{
	int ans;
	struct PersonInfo_t PersonInfo;

	ans = setTelephone(&PersonInfo,1234);
	TEST_ASSERT_EQUAL(0 , ans);
}

void test_telephone_leading_zero_should_return_0(void)
{
	int ans;
	struct PersonInfo_t PersonInfo;

	ans = setTelephone(&PersonInfo,00234);
	TEST_ASSERT_EQUAL(0 , ans);
}

void test_firstName_whether_is_empty_or_not_and_return_0(void)
{
	int ans;
	struct PersonInfo_t PersonInfo;

	ans = setFirstName(&PersonInfo,"");
	TEST_ASSERT_EQUAL(0 , ans);
}

void test_firstName_character_buffer_size_and_return_1(void)
{
	int ans;
	struct PersonInfo_t PersonInfo;

	ans = setFirstName(&PersonInfo,"Haanbferqqqqqterszdf");
	TEST_ASSERT_EQUAL(1 , ans);
}

void test_firstName1_character_buffer_size_and_return_1(void)
{
	int ans;
	struct PersonInfo_t PersonInfo;

	ans = setFirstName(&PersonInfo,"HaahAA");
	TEST_ASSERT_EQUAL(1 , ans);
}

void test_firstName_character_buffer_size_and_return_0(void)
{
	int ans;
	struct PersonInfo_t PersonInfo;

	ans = setFirstName(&PersonInfo,"ABCDFGERTYUTRWEAaSdaiyes");
	TEST_ASSERT_EQUAL(0 , ans);
}

void test_firstName_character_valid_checking_and_return_0(void)
{
	int ans;
	struct PersonInfo_t PersonInfo;

	ans = setFirstName(&PersonInfo,"234234234234");
	TEST_ASSERT_EQUAL(0 , ans);
}

void test_firstName_character1_valid_checking_and_return_0(void)
{
	int ans;
	struct PersonInfo_t PersonInfo;

	ans = setFirstName(&PersonInfo,"  abc24");
	TEST_ASSERT_EQUAL(0 , ans);
}

void test_firstName_character2_valid_checking_and_return_0(void)
{
	int ans;
	struct PersonInfo_t PersonInfo;

	ans = setFirstName(&PersonInfo,"      12");
	TEST_ASSERT_EQUAL(0 , ans);
}