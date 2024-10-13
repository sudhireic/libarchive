/*
 * SPDX-License-Identifier: BSD-2-Clause
 *
 * Copyright (c) 2003-2017 Tim Kientzle
 * All rights reserved.
 */

/* Every test program should #include "test.h" as the first thing. */

#define KNOWNREF	"test_basic.zip.uu"
#define ENVBASE "BSDUNZIP" /* Prefix for environment variables. */
#define	PROGRAM "bsdunzip" /* Name of program being tested. */
#define PROGRAM_ALIAS "unzip" /* Generic alias for program */
#undef	LIBRARY		  /* Not testing a library. */
#undef	EXTRA_DUMP	  /* How to dump extra data */
#undef	EXTRA_ERRNO	  /* How to dump errno */
/* How to generate extra version info. */
#define	EXTRA_VERSION     (systemf("%s --version", testprog) ? "" : "")

#include "test_common.h"
