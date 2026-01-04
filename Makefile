# glibc, musl, netbsd, solaris have their own gettext in libc and don't need
# these but freebsd needs to find a separate GNU libintl
#CPPFLAGS = -I /usr/local/include
#LDFLAGS = -L /usr/local/lib -lintl

# Make sure the msgfmt binary under test is in $PATH

MSGDIR=locale/es/LC_MESSAGES

check: test $(MSGDIR)/foo.mo
	./test | diff -u expected.txt -

$(MSGDIR)/foo.mo:
	mkdir -p $(MSGDIR)
	msgfmt -o $@ es.po

test: test.c
	$(CC) -o $@ $(CPPFLAGS) $< $(LDFLAGS)

clean:
	rm -fr test.o test locale
