#include <stdio.h>
#include <string.h>
#include "personal_info.h"

int setAge(PersonInfo *info , int age)
{
	info->age = age;

    if(info->age > 130) //check if age greater than 130
	return 0;

	else if(info->age < 0) //check if age is negative value
	return 0;

	else
	return 1;
}

int setHeight(PersonInfo *info , float height)
{
	info->height = height;

	if(info->height > 3) //check meters if it is greater than 3
	return 0;

	else if(info->height <= 0) //if less than or equal 0
	return 0;

	else
	return 1;
}

int setTelephone(PersonInfo *info , unsigned long int telephone)
{
	info->telephone = telephone;

	if((info->telephone/10000000)==0) //check if telephone is leading zero
	return 0;

	else if((info->telephone/10000000)>9) //check if telephone is 8-digit long
	return 0;

	else
	return 1;
}

int setFirstName(PersonInfo *info, char *name)
{
	int found = 0, char_size=0;
	
	while(*name != '\0') //read characters from pointer until terminate '\0' is found
	{
		if(*name >= 65 &&  *name <= 90)
		{
			found = 0;
		}
		
		else if(*name >= 97 &&  *name <= 122)
		{
			found = 0;
		}
		
		else if(*name == ' ')
		{
			found = 0;
		}
		
		else found = 1;
		
		char_size++; //update character size
		*name++; //increament the point by 1
	}
	
	if(found == 1)
	{
		return 0;
	}
	
	else if(char_size == 0)		//check if *name is empty
	{			
		return 0;
	}
	
	else if(char_size > 21)		//if character size greather than 21 is invalid
	{			
		return 0;
	}
	
	else
	strcpy(info->firstName, name); //insert name to data structure
	return 1;			
}

int setLastName(PersonInfo *info, char *name)
{
	int found = 0, char_size=0;
	
	while(*name != '\0') //read characters from pointer until terminate '\0' is found
	{
		if(*name >= 65 &&  *name <= 90)
		{
			found = 0;
		}
		
		else if(*name >= 97 &&  *name <= 122)
		{
			found = 0;
		}
		
		else if(*name == ' ')
		{
			found = 0;
		}
		
		else found = 1;
		
		char_size++; //update character size
		*name++; //increament the point by 1
	}
	
	if(found == 1)
	{
		return 0;
	}
	
	else if(char_size == 0)		//check if *name is empty
	{			
		return 0;
	}
	
	else if(char_size > 21)		//if character size greather than 21 is invalid
	{			
		return 0;
	}
	
	else
	strcpy(info->firstName, name); //insert name to data structure
	return 1;			
}
