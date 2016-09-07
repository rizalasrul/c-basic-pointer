# Basic Theory
Pointer is a variable that is specifically used to accommodate address. Pointer is often said to be a variable that refers to objects or other variables. The reality is a pointer variable contains the address of an other object.

This is how pointer variable declared:
```c
data_type *variable_name
```
data_type can be any data type (int, char, string, etc). variable_name is a name of pointer variable. The example:
```c
int *px
```

The way how to refers pointer variables to other variables:

1. At first, the pointer is filled with the address of the variable to be appointed
2. To express the address of a variable, use the operator & (address operator) placed in front of the variable name.
3. If declared:

    ```c
    int *px, x = 10;
    ```
    
    Then &x means "the address of the variable x"

    ```c
    px = &x;
    ```
    
    means that px rated be the address of the variable x.
4. After the statement is executed then it can be said that px points to the variable x.

The result is something like this:

![alt text](https://github.com/rizalasrul/c-basic-pointer/blob/master/Images/1.png)

A location or address that has been designated by a pointer, then the value of its location can be accessed either direct or indirect through the pointer.

## POINTER TO ARRAY
The relationship between pointers and arrays in C is strong. Ingatl that the real internal array will be translated in the form of a pointer. Because the array is written without parentheses elbow is equivalent to the address of the first element (index-0) of the array.
## POINTER TO STRING
String is not a new data type in C, rather it is a set of characters (array of char). Variable array that is written without parentheses elbow is equivalent to the address of the array on the index-0.
## ARRAY TO POINTER
An array can be used to store a pointer. If declared:
```c
char *day_name[10];
```
a statement to declare an array of pointers to char. day_name array consists of 10 elements in the form of a pointer of the type char.
## POINTER TO POINTER
A pointer can refer to another pointer. If declared:
```c
int var_x = 25, *ptr1, **ptr2
```
* var_x is a variable of type int.
* ptr1 is a pointer to a variable of type int.
* ptr2 is a variable of type pointer to pointer to int.

In order ptr1 pointing to the variable var_x and ptr2 pointed to ptr1, the instructions are:
```c
ptr1 = &var_x;
ptr2 = &ptr1
```


# How This Code Work
```c
#include <stdio.h>

void rotation(int *, int *, int *);

main() 
{
	int a, b, c;

	puts("ROTATION\n");
	printf("a: ");
	scanf_s("%d", &a);
	printf("b: ");
	scanf_s("%d", &b);
	printf("c: ");
	scanf_s("%d", &c);
	puts("\n\nBefore enter rotation() function");
	printf("a: %d b: %d c: %d\n", a, b, c);
	rotation(&a, &b, &c);
	puts("After enter rotation() function");
	printf("a: %d b: %d c: %d\n", a, b, c);
}

void rotation(int *px, int *py, int *pz) {
	int temp;

	temp = *pz;
	*pz = *py;
	*py = *px;
	*px = temp;
}
```
![alt text](https://github.com/rizalasrul/c-basic-pointer/blob/master/Images/2.png)

The program will define a function assigned to conduct the rotation so that the value of a move to b, b to c, and c to a value and display the results in the main function. There is a rotation function of type void.

In the main function, occurs declaring variables a, b, and c to be included in value by the user. This function also occurs in a function call rotation with the actual parameter is the address of each of the variables a, b, and c.

In the rotation function, there is a formal parameter. Because the actual parameters sent by the function main is the address of the variables, then the catch is variable pointer. There are three formal parameter of type pointer to int named px, py, and pz each of which contains the address of the variables a, b, and c. In addition there is also a variable of type int temp. For the process of exchange, the first value in the address pz will be assingment to the variable temp. After that exchange carried out according to the program listings. Because of what happened in this function is indirect access, then that variable in the main () function is also influential.


# Conclusion
* The type pointer variable is the type of a variable that contains the address of the actual variable.
* The type pointer variable must match the type designated variable.
* The relationship between pointers and arrays in C is strong, the real cause internal array will be translated in the form of a pointer.
* Pointer variables can be string, array, or other variable types.
* A pointer may point to another pointer (pointer to pointer).
* Variable pointer can be used as a parameter in a function, as also can be used as the return value (return value) of a function.
