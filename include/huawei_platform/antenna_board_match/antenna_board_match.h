
#ifndef _ANTENNA_BOARD_MATCH
#define _ANTENNA_BOARD_MATCH
#include <linux/device.h>

struct antenna_device_ops{
    int (*get_antenna_match_status)(void);
    int (*get_antenna_board_voltage)(void);
};

enum antenna_sysfs_type {
    ANTENNA_BOARD_MATCH = 0,
    ANTENNA_BOARD_VOLTAGE,
};

struct antenna_device_info {
    struct device *dev;
    struct antenna_device_ops *ops;
};

int antenna_match_ops_register(struct antenna_device_ops *ops);
#endif


