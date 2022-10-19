## ALX SOFTWARE ENGINEERING - printf Pair-Programming Project in C
##

### printf
> This is a mini-version of the normal "printf" function found in the <stdio.h> library. It allows formatting and printing of any argument given to the standard output, including printing any combination of strings, integers, characters, and other different datatypes.


### GOALS
* Implement custom printf() function similar to the one in the standard library
* Use Variadic functions to allow a varying number of arguments to be passed to the function
* Parse a format string to identify the print options

#### Handle the following conversion specifiers:
* c - char
* s - string
* % - percent
* d - decimal
* i - integer
* b - binary

### REQUIREMENTS

* Operating System: Ubuntu 20.04 LTS
* compiler: GCC using the flags -Wall -Werror -Wextra and -pedantic <br>
\t `$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c`
* coding style: [Betty Style](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl)


### BREAKDOWN OF TASKS
* Write a function that produces output according to a format.
* Handle these conversion specifiers: d and i.
* Create a `man page` for the function.
* Handle these custom conversion specifiers: `b` : the unsiged int argumment is converted to binary.
* Handle conversion specifiers `u, o x, X`
* Handle conversion specifier `p`
* Handle custom conversion specifier, `S`


### FILES DESCRIPTION:
1. **base_change** converts decimal int to octal and hex.
2. **binary.c** converts unsigned integer to binary.
3. **main.h** contains function prototypes and global variable definitions.
4. **integers.c** prints integers.
5. **man_3_printf** contains the description of the function _printf.
6. **numbers.c** functions to print unsigned int.
7. **parse_args** - contains a function that iterates through the main string to print a formatted string
8. **handle custom conversion specifier `S`. prints the string and Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters).
9. **_printf.c** is the caller function that prints formatted string from the main string and other variable arguments.


## AUTHORS
* [Tivere IDORO](https://github.com/tivereidoro)
* [Malek KHEMIRI](https://github.com/KHMalek)
##
