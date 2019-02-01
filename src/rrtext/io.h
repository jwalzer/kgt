/*
 * Copyright 2014-2017 Katherine Flavel
 *
 * See LICENCE for the full copyright terms.
 */

#ifndef KGT_RRTEXT_IO_H
#define KGT_RRTEXT_IO_H

struct ast_rule;

#define rrtext_rrd_unsupported 0

extern int prettify;

void
rrtext_output(const struct ast_rule *);

#endif
