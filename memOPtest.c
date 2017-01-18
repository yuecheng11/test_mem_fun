#include<stdio.h>
#include<memory.h>
#include <string.h>
typedef signed char INIT8;
typedef signed int INT32;

INT32 main(void)
{
	INIT8 szTestStr[100] = "AAAAAAAAAA";

	INIT8 szCopySty[100] = "BBBBBBBB";
		
	printf("The original string is : %s\n",szTestStr);

	//memset(szTestStr,'B',strlen(szTestStr));

	//printf("The original string is : %s\n",szTestStr);

	memcpy(szTestStr,szCopySty,strlen(szCopySty));
	
	printf("The new string is : %s\n",szTestStr);

	
	
        

	return 0;
}


