# Generated automatically from Makefile.in by configure.
# NOTE: Makefile.in is converted into Makefile by the configure script
# in the parent directory.  Once configure has run, you can recreate
# the Makefile by running just config.status.

# === Variables set by config.stat ===

VERSION=	2.0

srcdir=		.

CC=		gcc
RANLIB=		ranlib
AR=		ar

DEFS=		-DHAVE_CONFIG_H
LIBOBJS=	 thread.o getopt.o
LIBS=		-lpthread -ldl  -lutil
DLINCLDIR=	/
DYNLOADFILE=	dynload_shlib.o

# Machine-dependent subdirectories
MACHDEP=	linux5


# === Other things that are customizable but not by configure ===

INCLDIR=	$(srcdir)/../Include
OPT=		-g -O2 -Wall -Wstrict-prototypes -fPIC
CFLAGS=		$(OPT) -I$(INCLDIR) -I.. $(DEFS)

MKDEP=		mkdep
SHELL=		/bin/sh


# === Fixed definitions ===

AROBJS=		\
		bltinmodule.o exceptions.o \
		ceval.o compile.o codecs.o \
		errors.o \
		frozen.o frozenmain.o \
		getargs.o getcompiler.o getcopyright.o getmtime.o \
		getplatform.o getversion.o graminit.o \
		import.o importdl.o \
		marshal.o modsupport.o mystrtoul.o \
		pyfpe.o pystate.o pythonrun.o \
		structmember.o sysmodule.o \
		traceback.o \
		$(DYNLOADFILE) \
		$(LIBOBJS)
OBJS=		$(AROBJS) sigcheck.o

LIBRARY=	../libpython$(VERSION).a


# === Rules ===

all:		$(OBJS)

# This target is used by the master Makefile to add the objects to the library
add2lib:	$(OBJS)
		$(AR) cr $(LIBRARY) $(AROBJS)
		if test ! -f ../Modules/hassignal; \
		then echo adding sigcheck.o; $(AR) r $(LIBRARY) sigcheck.o; \
		else echo leaving sigcheck.o out; fi
		touch add2lib

clean:
		-rm -f *.o core *~ [@,#]* *.old *.orig *.rej add2lib

clobber:	clean
		-rm -f *.a tags TAGS

Makefile:	$(srcdir)/Makefile.in ../config.status
		(cd ..; CONFIG_FILES=Python/Makefile CONFIG_HEADERS= \
		$(SHELL) config.status)

getplatform.o:	getplatform.c Makefile
		$(CC) -c $(CFLAGS) -DPLATFORM='"$(MACHDEP)"' \
		      $(srcdir)/getplatform.c

importdl.o:	importdl.c
		$(CC) -c $(CFLAGS) -I$(DLINCLDIR) $(srcdir)/importdl.c

depend:
		$(MKDEP) $(CFLAGS) `echo $(OBJS) | tr ' ' '\012' | \
					sed 's|\(.*\)\.o|$(srcdir)/\1.c|'`

.PRECIOUS:	Makefile

bltinmodule.o: bltinmodule.c
ceval.o: ceval.c
codecs.o: codecs.c
compile.o: compile.c
dup2.o: dup2.c
dynload_aix.o: dynload_aix.c
dynload_beos.o: dynload_beos.c
dynload_dl.o: dynload_dl.c
dynload_hpux.o: dynload_hpux.c
dynload_mac.o: dynload_mac.c
dynload_next.o: dynload_next.c
dynload_os2.o: dynload_os2.c
dynload_shlib.o: dynload_shlib.c
dynload_stub.o: dynload_stub.c
dynload_win.o: dynload_win.c
exceptions.o: exceptions.c
errors.o: errors.c
fmod.o: fmod.c
frozen.o: frozen.c
frozenmain.o: frozenmain.c
getargs.o: getargs.c
getcompiler.o: getcompiler.c
getcopyright.o: getcopyright.c
getcwd.o: getcwd.c
getmtime.o: getmtime.c
getopt.o: getopt.c
getplatform.o: getplatform.c
getversion.o: getversion.c ../Include/patchlevel.h
graminit.o: graminit.c
import.o: import.c
importdl.o: importdl.c
marshal.o: marshal.c
memmove.o: memmove.c
modsupport.o: modsupport.c
mystrtoul.o: mystrtoul.c
pyfpe.o: pyfpe.c
pystate.o: pystate.c
pythonrun.o: pythonrun.c
sigcheck.o: sigcheck.c
strerror.o: strerror.c
strtod.o: strtod.c
structmember.o: structmember.c
sysmodule.o: sysmodule.c ../Include/patchlevel.h
thread.o: thread.c
traceback.o: traceback.c

# DO NOT DELETE THIS LINE -- mkdep uses it.
# DO NOT PUT ANYTHING AFTER THIS LINE, IT WILL GO AWAY.
# IF YOU PUT ANYTHING HERE IT WILL GO AWAY
