#CS 9F programming assignment 1
##Simple looping and testing

##Problem

Write a C++ program that simulates an adding machine. Input to the program will be integers, submitted one per line. Input should be handled as follows: a nonzero value should be added into a subtotal; a zero value should cause the subtotal to be printed and reset to zero; two consecutive zeroes should cause the total of all values input to be printed and the program to be terminated.

Here's an example of how the program should work.
user input	program's output
| user input 	| program's output 	|
|------------	|------------------	|
| 5          	|                  	|
| 6          	|                  	|
| 0          	| subtotal = 11    	|
| -3         	|                  	|
| -2         	|                  	|
| 5          	|                  	|
| 0          	| subtotal = 0     	|
| 13         	|                  	|
| -13        	|                  	|
| 8          	|                  	|
| 0          	| subtotal = 8     	|
| 0          	| total = 19       	|
 

You may but need not use functions. However, if your main function is more than 24 lines long, you are required to split the program into more than one function to satisfy CS 9F style standards. Test your program on input that consists only of two zeroes—the output should be a 0 subtotal and a 0 total—as well as on the example above.