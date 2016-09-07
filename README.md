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
    int *px, x = 10;
    ```
    
    means that px rated be the address of the variable x.
4. After the statement is executed then it can be said that px points to the variable x.

