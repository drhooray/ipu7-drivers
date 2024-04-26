// SPDX-License-Identifier: GPL-2.0
// Copyright (C) 2013 - 2024 Intel Corporation

#ifndef IPU_INSYS_Q_DEFS_H_INCLUDED__
#define IPU_INSYS_Q_DEFS_H_INCLUDED__

/** INYSYS queue defs - general */
/** MSG, LOG, RESERVED output queues */
#define IPU_INSYS_MAX_OUTPUT_QUEUES (3U)
/** Max number of supported virtual streams */
#define IPU_INSYS_STREAM_ID_MAX (16U)
/** DEV + MSG (for each stream) */
#define IPU_INSYS_MAX_INPUT_QUEUES (IPU_INSYS_STREAM_ID_MAX + 1U)
/** INSYS queue defs - output queues */
#define IPU_INSYS_OUTPUT_FIRST_QUEUE	(0U)
#define IPU_INSYS_OUTPUT_LAST_QUEUE	(IPU_INSYS_MAX_OUTPUT_QUEUES - 1U)
/** OUT queues */
#define IPU_INSYS_OUTPUT_MSG_QUEUE		(IPU_INSYS_OUTPUT_FIRST_QUEUE)
#define IPU_INSYS_OUTPUT_LOG_QUEUE		(IPU_INSYS_OUTPUT_FIRST_QUEUE + 1U)
#define IPU_INSYS_OUTPUT_RESERVED_QUEUE	(IPU_INSYS_OUTPUT_LAST_QUEUE)
/** INSYS queue defs - input queues */
#define IPU_INSYS_INPUT_FIRST_QUEUE	(IPU_INSYS_MAX_OUTPUT_QUEUES)
#define IPU_INSYS_INPUT_LAST_QUEUE	(IPU_INSYS_INPUT_FIRST_QUEUE + IPU_INSYS_MAX_INPUT_QUEUES - 1U)
/** IN queues */
#define IPU_INSYS_INPUT_DEV_QUEUE		(IPU_INSYS_INPUT_FIRST_QUEUE)
#define IPU_INSYS_INPUT_MSG_QUEUE		(IPU_INSYS_INPUT_FIRST_QUEUE + 1U)
#define IPU_INSYS_INPUT_MSG_MAX_QUEUE	(IPU_INSYS_MAX_INPUT_QUEUES - 1U)

#endif /* IPU_INSYS_Q_DEFS_H_INCLUDED__ */
