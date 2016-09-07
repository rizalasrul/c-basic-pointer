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
