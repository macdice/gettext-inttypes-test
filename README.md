# gettext-inttypes-test
A very simple test of gettext inttypes support

This is a standalone version of the test in PostgreSQL's
[regress.c](https://github.com/postgres/postgres/blob/master/src/test/regress/regress.c) using the accompanying [es.po](https://github.com/postgres/postgres/blob/master/src/test/regress/po/es.po).

Intended to test [changes to Sabotage msgfmt](https://github.com/sabotage-linux/gettext-tiny/pull/77) along with musl's built-in gettext implementation, but should also work with GNU msgfmt and GNU, Sun and NetBSD gettext.

Make sure the msgfmt binary under test is found in PATH, and then `make` should succeed, or fail and print any unexpected differences.  On an Alpine system it needs the `musl-libintl` package which supplies the libintl.h header.
