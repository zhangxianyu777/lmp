#ifndef BLOCK_RQ_ISSUE_H
#define BLOCK_RQ_ISSUE_H

#define TASK_COMM_LEN 256

struct event {
    long timestamp;       // 时间戳
    int dev;           // 设备号
    int sector;         // 扇区号
    int nr_sectors;     // 扇区数
    char comm[TASK_COMM_LEN]; // 进程名
};

#endif // BLOCK_RQ_ISSUE