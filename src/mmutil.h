/*
 * Copyright (C) 2011 Battelle Memorial Institute
 * Copyright (C) 2016 Google Inc.
 *
 * Licensed under the GNU General Public License Version 2.
 * See LICENSE for the full text of the license.
 * See DISCLAIMER for additional disclaimers.
 *
 * Author: Brandon Carpenter
 */

#ifndef _MMUTIL_H
#define _MMUTIL_H

#include <linux/mm_types.h>

char *mm_path(struct mm_struct *mm, char *buf, int buflen);
int mm_argv(struct mm_struct *mm, char *buf, int buflen);
unsigned int mm_dev(struct mm_struct *mm);

#endif /* _MMUTIL_H */
