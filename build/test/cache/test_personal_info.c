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



 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((ans)), (((void *)0)), (_U_UINT)19, UNITY_DISPLAY_STYLE_INT);

}



void test_age_negative_value_and_return_0(void)

{

 int ans;

 struct PersonInfo_t PersonInfo;



 ans = setAge(&PersonInfo,-40);



 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((ans)), (((void *)0)), (_U_UINT)29, UNITY_DISPLAY_STYLE_INT);

}



void test_age_largest_value_and_return_0(void)

{

 int ans;

 struct PersonInfo_t PersonInfo;



 ans = setAge(&PersonInfo,140);



 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((ans)), (((void *)0)), (_U_UINT)39, UNITY_DISPLAY_STYLE_INT);

}



void test_height_equal_to_3_and_return_1(void)

{

 int ans;

 struct PersonInfo_t PersonInfo;



 ans = setHeight(&PersonInfo,3);



 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((ans)), (((void *)0)), (_U_UINT)49, UNITY_DISPLAY_STYLE_INT);

}



void test_height_less_than_or_equal_zero_and_return_0(void)

{

 int ans;

 struct PersonInfo_t PersonInfo;



 ans = setHeight(&PersonInfo,0);



 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((ans)), (((void *)0)), (_U_UINT)59, UNITY_DISPLAY_STYLE_INT);

}



void test_telephone_num_range_should_return_1(void)

{

 int ans;

 struct PersonInfo_t PersonInfo;



 ans = setTelephone(&PersonInfo,12556547);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((ans)), (((void *)0)), (_U_UINT)68, UNITY_DISPLAY_STYLE_INT);

}



void test_telephone_num_more_than_8_range_should_return_0(void)

{

 int ans;

 struct PersonInfo_t PersonInfo;



 ans = setTelephone(&PersonInfo,123456789);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((ans)), (((void *)0)), (_U_UINT)77, UNITY_DISPLAY_STYLE_INT);

}



void test_telephone_num_less_than_8_range_should_return_0(void)

{

 int ans;

 struct PersonInfo_t PersonInfo;



 ans = setTelephone(&PersonInfo,1234);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((ans)), (((void *)0)), (_U_UINT)86, UNITY_DISPLAY_STYLE_INT);

}



void test_telephone_leading_zero_should_return_0(void)

{

 int ans;

 struct PersonInfo_t PersonInfo;



 ans = setTelephone(&PersonInfo,00234);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((ans)), (((void *)0)), (_U_UINT)95, UNITY_DISPLAY_STYLE_INT);

}



void test_firstName_whether_is_empty_or_not_and_return_0(void)

{

 int ans;

 struct PersonInfo_t PersonInfo;



 ans = setFirstName(&PersonInfo,"");

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((ans)), (((void *)0)), (_U_UINT)104, UNITY_DISPLAY_STYLE_INT);

}



void test_firstName_character_buffer_size_and_return_1(void)

{

 int ans;

 struct PersonInfo_t PersonInfo;



 ans = setFirstName(&PersonInfo,"Haanbferqqqqqterszdf");

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((ans)), (((void *)0)), (_U_UINT)113, UNITY_DISPLAY_STYLE_INT);

}



void test_firstName1_character_buffer_size_and_return_1(void)

{

 int ans;

 struct PersonInfo_t PersonInfo;



 ans = setFirstName(&PersonInfo,"HaahAA");

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((ans)), (((void *)0)), (_U_UINT)122, UNITY_DISPLAY_STYLE_INT);

}



void test_firstName_character_buffer_size_and_return_0(void)

{

 int ans;

 struct PersonInfo_t PersonInfo;



 ans = setFirstName(&PersonInfo,"ABCDFGERTYUTRWEAaSdaiyes");

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((ans)), (((void *)0)), (_U_UINT)131, UNITY_DISPLAY_STYLE_INT);

}



void test_firstName_character_valid_checking_and_return_0(void)

{

 int ans;

 struct PersonInfo_t PersonInfo;



 ans = setFirstName(&PersonInfo,"234234234234");

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((ans)), (((void *)0)), (_U_UINT)140, UNITY_DISPLAY_STYLE_INT);

}



void test_firstName_character1_valid_checking_and_return_0(void)

{

 int ans;

 struct PersonInfo_t PersonInfo;



 ans = setFirstName(&PersonInfo,"  abc24");

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((ans)), (((void *)0)), (_U_UINT)149, UNITY_DISPLAY_STYLE_INT);

}



void test_firstName_character2_valid_checking_and_return_0(void)

{

 int ans;

 struct PersonInfo_t PersonInfo;



 ans = setFirstName(&PersonInfo,"      12");

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((ans)), (((void *)0)), (_U_UINT)158, UNITY_DISPLAY_STYLE_INT);

}
