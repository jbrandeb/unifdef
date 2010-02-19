/* Copyright 2004 Bob Proulx <bob@proulx.com>
   You may freely use, modify and/or distribute this file. */

#include <stdio.h>
#include <stdlib.h>

#if FOO
int foo() { return 0; }
#else
#error FOO not defined
#endif

#if BAR
int foo() { return 0; }
#elif FOO
int bar() { return 0; }
#else
#error FOO not defined
#endif

int main()
{
  foo();
  bar();
}