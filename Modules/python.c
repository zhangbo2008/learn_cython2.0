/* Minimal main program -- everything is loaded from the library */

#include "Python.h"

extern DL_EXPORT(int) Py_Main(int, char **);

int
main(int argc, char **argv)
{
	printf("python解释器的入口");
	return Py_Main(argc, argv);
}
