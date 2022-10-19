## ALX SOFTWARE ENGINEERING - printf Pair-Programming Project in C
##

### printf
> This is a mini-version of the normal `printf()` function found in the `<stdio.h>` library. It allows formatting and printing of any argument given to the standard output, including printing any combination of strings, integers, characters, and other different datatypes.


### GOALS
* Implement custom `printf()` function similar to the one in the standard library
* Use Variadic functions to allow a varying number of arguments to be passed to the function
* Parse format string to identify the print options

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
`$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c`
* coding style: [Betty Style](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl)


### BREAKDOWN OF TASKS
* Write a function that produces output according to a format.
* Handle these conversion specifiers: d and i.
* Create a `man page` for the function.
* Handle these custom conversion specifiers: `b` : the unsiged int argumment is converted to binary.
* Handle conversion specifiers `u, o x, X`
* Handle conversion specifier `p`
* Handle custom conversion specifier, `S`
<br>

## AUTHORS
* [Tivere IDORO](https://github.com/tivereidoro)
* [Malek KHEMIRI](https://github.com/KHMalek)
##
