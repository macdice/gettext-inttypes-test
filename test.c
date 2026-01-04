#include <inttypes.h>
#include <libintl.h>
#include <locale.h>
#include <stdint.h>
#include <stdio.h>

#define println(x, y) printf(gettext(x), y); printf("\n");

int
main()
{
		setlocale(LC_MESSAGES, "es_ES.UTF-8");
		bindtextdomain("foo", "./locale");
		textdomain("foo");

		/* Extracted from https://github.com/postgres/postgres/blob/master/src/test/regress/regress.c */
        println("translated PRId64 = %" PRId64, (int64_t) 424242424242);
        println("translated PRId32 = %" PRId32, (int32_t) -1234);
        println("translated PRIdMAX = %" PRIdMAX, (intmax_t) -123456789012);
        println("translated PRIdPTR = %" PRIdPTR, (intptr_t) -9999);
        println("translated PRIu64 = %" PRIu64, (uint64_t) 424242424242);
        println("translated PRIu32 = %" PRIu32, (uint32_t) -1234);
        println("translated PRIuMAX = %" PRIuMAX, (uintmax_t) 123456789012);
        println("translated PRIuPTR = %" PRIuPTR, (uintptr_t) 9999);
        println("translated PRIx64 = %" PRIx64, (uint64_t) 424242424242);
        println("translated PRIx32 = %" PRIx32, (uint32_t) -1234);
        println("translated PRIxMAX = %" PRIxMAX, (uintmax_t) 123456789012);
        println("translated PRIxPTR = %" PRIxPTR, (uintptr_t) 9999);
        println("translated PRIX64 = %" PRIX64, (uint64_t) 424242424242);
        println("translated PRIX32 = %" PRIX32, (uint32_t) -1234);
        println("translated PRIXMAX = %" PRIXMAX, (uintmax_t) 123456789012);
        println("translated PRIXPTR = %" PRIXPTR, (uintptr_t) 9999);
        return 0;
}
