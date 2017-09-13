/*
 * math.h
 *
 *  Created on: 13 Sept 2017
 * 	Last Edited: 13 Sept 2017
 *      Author: Alex Frederick
 */
 
 #include "math.h"
 #include <stdio.h>
 
 int math (int num1, int num2, char operator)									
 {
	 switch (operator){
		
		 case '+' :
			return num1 + num2;													
		 
		 case '-' : 
			return num1 - num2;													
			
		 case '*' :
			return num1 * num2;
		 
		 case '/' :
			if (num2 == 0){
				printf("Can not divide with a denominator equal to 0");
				break;
			}
			else return num1/num2;
		
		 case '%' :
			if (num2 == 0){
				printf("Can not compute modulus with a denominator equal to 0");
				break;
			}
			else return num1 % num2;
		
		 default : printf ("Unsupported operation")
	 }
	 return 0;
 }
 