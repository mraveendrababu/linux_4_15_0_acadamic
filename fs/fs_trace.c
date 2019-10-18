
#include <linux/string.h>
#include <linux/module.h>

int fs_trace_enable=1;
int fs_open_trace_enable=0;
int fs_locks_trace_enable=0;
int fs_readdir_trace_enable=0;
int fs_read_write_trace_enable=0;
int fs_super_trace_enable=0;
int fs_xattr_trace_enable=0;
int fs_namei_trace_enable=0;
int fs_namespace_trace_enable=0;
int fs_mpage_trace_enable=0;
int fs_mount_trace_enable=0;
int fs_inode_trace_enable=0;
int fs_buffer_trace_enable=0;
int fs_fs_writeback_trace_enable=0;
int fs_fs_pin_trace_enable=0;
int fs_dcache_trace_enable=0;
int fs_splice_trace_enable=0;
int fs_file_trace_enable=0;
int fs_fhandle_trace_enable=0;
int fs_fcntl_trace_enable=0;
int fs_annon_inode_trace_enable=0;
int fs_block_dev_trace_enable=0;
int fs_sync_trace_enable=0;

EXPORT_SYMBOL(fs_trace_enable);
EXPORT_SYMBOL(fs_open_trace_enable);
EXPORT_SYMBOL(fs_locks_trace_enable);
EXPORT_SYMBOL(fs_readdir_trace_enable);
EXPORT_SYMBOL(fs_super_trace_enable);
EXPORT_SYMBOL(fs_read_write_trace_enable);
EXPORT_SYMBOL(fs_xattr_trace_enable);
EXPORT_SYMBOL(fs_namespace_trace_enable);
EXPORT_SYMBOL(fs_namei_trace_enable);
EXPORT_SYMBOL(fs_mpage_trace_enable);
EXPORT_SYMBOL(fs_mount_trace_enable);
EXPORT_SYMBOL(fs_inode_trace_enable);
EXPORT_SYMBOL(fs_buffer_trace_enable);
EXPORT_SYMBOL(fs_fs_pin_trace_enable);
EXPORT_SYMBOL(fs_fs_writeback_trace_enable);
EXPORT_SYMBOL(fs_dcache_trace_enable);
EXPORT_SYMBOL(fs_splice_trace_enable);
EXPORT_SYMBOL(fs_file_trace_enable);
EXPORT_SYMBOL(fs_fhandle_trace_enable);
EXPORT_SYMBOL(fs_fcntl_trace_enable);
EXPORT_SYMBOL(fs_block_dev_enable);
EXPORT_SYMBOL(fs_annon_inode_enable);


int fs_trace_dummy(){

    printk(KERN_INFO "fs_trace_dummy \n");
    return 0;
}
