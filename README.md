# gettext-inttypes-test
A very simple test of gettext inttypes support

This is a standalone version of the test in PostgreSQL's
[https://github.com/postgres/postgres/blob/master/src/test/regress/regress.c regress.c] using the accompanying [https://github.com/postgres/postgres/blob/master/src/test/regress/po/es.po es.po].

Intended to test [https://github.com/sabotage-linux/gettext-tiny/pull/77 changes to Sabotage msgfmt] along with musl's built-in gettext implementation, but should also work with GNU msgfmt and GNU, Sun and NetBSD gettext.
