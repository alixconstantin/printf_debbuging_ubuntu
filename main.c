#include <stdio.h>
#include <limits.h>

// Test Unitaire debbuging : Tripouille


int main() {
    char *s2 = "test";

    // Tests avec %c
    printf(" %c %c %c \n", '0', 0, '1');
    ft_printf(" %c %c %c \n", '0', 0, '1');

    printf(" %c %c %c \n", '1', '2', '3');
    ft_printf(" %c %c %c \n", '1', '2', '3');

    printf(" %c %c %c \n", '2', '1', 0);
    ft_printf(" %c %c %c \n", '2', '1', 0);

    // Tests avec %s
    printf(" %s %s \n", "", "-");
    ft_printf(" %s %s \n", "", "-");

    printf(" %s %s \n", " - ", "");
    ft_printf(" %s %s \n", " - ", "");

    printf(" %s %s %s %s %s\n", " - ", "", "4", "", s2);
    ft_printf(" %s %s %s %s %s\n", " - ", "", "4", "", s2);

    printf(" %s %s %s %s %s \n", " - ", "", "4", "", "2 ");
    ft_printf(" %s %s %s %s %s \n", " - ", "", "4", "", "2 ");

    // Tests avec %p
    printf(" %p %p \n", (void*)LONG_MIN, (void*)LONG_MAX);
    ft_printf(" %p %p \n", (void*)LONG_MIN, (void*)LONG_MAX);

    printf(" %p %p \n", (void*)INT_MIN, (void*)INT_MAX);
    ft_printf(" %p %p \n", (void*)INT_MIN, (void*)INT_MAX);

    printf(" %p %p \n", (void*)ULONG_MAX, (void*)-ULONG_MAX);
    ft_printf(" %p %p \n", (void*)ULONG_MAX, (void*)-ULONG_MAX);

    printf(" %p %p \n", (void*)0, (void*)0);
    ft_printf(" %p %p \n", (void*)0, (void*)0);

    // Tests avec %d
    printf(" %d %d %d %d %ld %d %d\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
    ft_printf(" %d %d %d %d %ld %d %d\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);

    // Tests avec %i
    printf(" %i %i %i %i %ld %i %i\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
    ft_printf(" %i %i %i %i %ld %i %i\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);

    // Tests avec %u
    printf(" %u %u %u %u %lu %u %u\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
    ft_printf(" %u %u %u %u %lu %u %u\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);

    // Tests avec %x
    printf(" %x %x %x %x %lx %x %x\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
    ft_printf(" %x %x %x %x %lx %x %x\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);

    // Tests avec %X
    printf(" %X %X %X %X %lX %X %X\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
    ft_printf(" %X %X %X %X %lX %X %X\n", INT_MAX,
}

// Test Unitaire debbuging : Fsoares

#include <stdio.h>
#include <limits.h>

// Inclure le fichier d'en-tête de votre ft_printf
#include "ft_printf.h"

int main() {
    // Tests avec %c
    printf("a\\tb\n"); // Affichage attendu pour le test %c
    ft_printf("%c%c%c", 'a', '\t', 'b');

    printf("ac\\cb\n"); // Affichage attendu pour le test %c
    ft_printf("%cc%cc%c", 'a', '\t', 'b');

    printf("csbsa\n"); // Affichage attendu pour le test %c
    ft_printf("%cs%cs%c", 'c', 'b', 'a');

    // Tests avec %s
    printf("And somejoined\n"); // Affichage attendu pour le test %s
    ft_printf("%s%s%s", "And ", "some", "joined");

    printf("And ssome othersjoineds\n"); // Affichage attendu pour le test %s
    ft_printf("%ss%ss%ss", "And ", "some other", "joined");

    // Test avec %p
    printf("0x0\n"); // Affichage attendu pour le test %p
    ft_printf("%p", NULL);

    // Adaptez cette adresse à votre environnement de test
    printf("0x80000000000677afp0x00x7fffffff\n"); // Affichage attendu pour le test %p
    ft_printf("%pp%p%p", (void *)LONG_MAX + 423856, (void *)0, (void *)INT_MAX);

    // Test avec %d
    printf("12d-3\n"); // Affichage attendu pour le test %d
    ft_printf("%d%dd%d", 1, 2, -3);

    // Test avec %i
    printf("12i-3\n"); // Affichage attendu pour le test %i
    ft_printf("%i%ii%i", 1, 2, -3);

    // Test avec %u
    printf("12u4294967293\n"); // Affichage attendu pour le test %u
    ft_printf("%u%uu%u", 1, 2, -3);

    // Test avec %x
    printf("12xfffffffd\n"); // Affichage attendu pour le test %x
    ft_printf("%x%xx%x", 1, 2, -3);

    // Test avec %X
    printf("12xFFFFFFFD\n"); // Affichage attendu pour le test %X
    ft_printf("%X%Xx%X", 1, 2, -3);

    // Test aléatoire
    printf(",gO226E8694(P68+04p.;78742f833s#yzJG]159305389853EE7DF0L:3%eP+vh[:cT+-711149707.I+qT.1155154402h.No.1Q1oz\n"); // Affichage attendu pour le test aléatoire
    ft_printf(",gO%X(P68+04p.;%x3s#yzJG]%i%XL:3%%eP+vh[:cT+%d\tI+qT\t%ih\nNo%c1Q1oz", 577668756, 2020880259, 1593053898, 1408138736, -711149707, 1155154402, -1500765213);

    return 0;
}
