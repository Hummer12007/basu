/* SPDX-License-Identifier: LGPL-2.1+ */
#pragma once

#include <alloca.h>
#include <stdbool.h>
#include <stddef.h>

#include "macro.h"
#include "string-util.h"
#include "time-util.h"

char* path_startswith(const char *path, const char *prefix) _pure_;
int path_compare(const char *a, const char *b) _pure_;

bool hidden_or_backup_file(const char *filename) _pure_;
