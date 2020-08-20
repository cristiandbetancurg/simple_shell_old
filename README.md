#Synopsis

This is a simple mini shell created for Holberto Scholl in the C language, whose shell replicates the functionalities of the UNIX system

# How to install it?

You must clone, download or copy the files and these must then be compiled with GCC and the following flags: -Wall -Wextra -Werror -pedantic -Wno-format.



# Interactive mode

In interactive mode, just run the program and wait for the message to appear. From there, you can freely type commands, exiting with the command "exit" or ctrl-D.

# Non-interactive mode

In non-interactive mode, repeat the desired command and enter it into the program like this:

`` sh
echo "ls" | ./shell
''

In non-interactive mode, the program will close after finishing the desired commands.



# External programs

Our shell can run external programs by typing their absolute paths (/ bin / ls) or executable name (ls), IF their directory is included in the PATH.


### Included Files

- main.c - functions for calling the shell and initializing the shell struct
- shell.c - functions for running the basic shell logic
- shell_helpers.c - functions for helping the shell run
- split_string.c - functions for splitting string from the user
- string_helpers1.c - functions for manipulating strings
- string_helpers2.c - functions for manipulating strings
- built_ins.c - functions for built-ins
- built_in_helpers.c - functions for helping the built-in functions
- help.c - functions for the help built-in
- help2.c - functions for the help built-in
- cd.c - functions for the cd built-in
- cd2.c - functions for the cd built-in
- check_path.c - functions for checking the path of an executable
- error_handler.c - functions for dealing with errors
- free.c - functions for freeing allocated memory
- holberton.h - header file


# Examples

```sh
$ ls -l
total 8
drwxrwxr-x 1 vagrant vagrant Aug 19 22:23 directory_1
drwxrwxr-x 2 vagrant vagrant Aug 19 23:30 directory_2
```

```sh
$ /bin/pwd
/home/vagrant/shell
```

```sh
$ hello world
./hsh: 1: hello: not found
```

```sh
$ help env
env: env
	Print the environment.
```

### Credits

Code by Cristian Betancur & Diego Urdaneta
