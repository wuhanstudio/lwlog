/*
 * @file test.c
 * 
 * @author Akagi201
 * @date 2014/11/30
 * 
 * test program for lwlog.h
 */

/* Set LOG_LEVEL and LOG_COLOR before including lwlog.h */

#define LOG_COLOR (1) // 0: off, 1: on, default: 1
#define LOG_LEVEL (7) // -1: off, 0~7: different log levels, default: 7

#include <rtthread.h>
#include "lwlog.h"

int lwlog_demo(int argc, char const *argv[])
{
    lwlog_emerg("This a emerge log.");
    lwlog_alert("This a alert log.");
    lwlog_crit("This a crit log.");
    lwlog_err("This a err log.");
    lwlog_warning("This a warning log.");
    lwlog_notice("This a notice log.");
    lwlog_info("This a info log.");
    lwlog_debug("This a debug log.");

	return 0;
}
MSH_CMD_EXPORT(lwlog_demo, lwlog demo);
