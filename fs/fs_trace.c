
#include <linux/string.h>
#include <linux/module.h>

int fs_trace_enable=1;
int fs_open_trace_enable=0;
int fs_locks_trace_enable=0;
int fs_readdir_trace_enable=0;
int fs_read_write_trace_enable=0;
int fs_super_trace_enable=0;
int fs_xattr_trace_enable=0;
int fs_attr_trace_enable=0;
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
int fs_mbcache_trace_enable=0;
int fs_aio_trace_enable=0;
int fs_annon_trace_enable=0;
int fs_blockdev_trace_enable=0;
int fs_chardev_trace_enable=0;
int fs_dax_trace_enable=0;
int fs_dcookies_trace_enable=0;
int fs_directio_trace_enable=0;
int fs_dropcaches_trace_enable=0;
int fs_exec_trace_enable=0;
int fs_filesystems_trace_enable=0;
int fs_fs_struct_trace_enable=0;
int fs_ioctl_trace_enable=0;
int fs_nsfs_trace_enable=0;
int fs_posixacl_trace_enable=0;
int fs_pipe_trace_enable=0;
int fs_pnode_trace_enable=0;
int fs_proc_namespace_trace_enable=0;
int fs_select_trace_enable=0;
int fs_stack_trace_enable=0;

EXPORT_SYMBOL(fs_trace_enable);
EXPORT_SYMBOL(fs_open_trace_enable);
EXPORT_SYMBOL(fs_locks_trace_enable);
EXPORT_SYMBOL(fs_readdir_trace_enable);
EXPORT_SYMBOL(fs_super_trace_enable);
EXPORT_SYMBOL(fs_read_write_trace_enable);
EXPORT_SYMBOL(fs_xattr_trace_enable);
EXPORT_SYMBOL(fs_attr_trace_enable);
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
EXPORT_SYMBOL(fs_block_dev_trace_enable);
EXPORT_SYMBOL(fs_annon_inode_trace_enable);
EXPORT_SYMBOL(fs_sync_trace_enable);
EXPORT_SYMBOL(fs_mbcache_trace_enable);
EXPORT_SYMBOL(fs_aio_trace_enable);
EXPORT_SYMBOL(fs_annon_trace_enable);
EXPORT_SYMBOL(fs_blockdev_trace_enable);
EXPORT_SYMBOL(fs_chardev_trace_enable);
EXPORT_SYMBOL(fs_dax_trace_enable);
EXPORT_SYMBOL(fs_dcookies_trace_enable);
EXPORT_SYMBOL(fs_directio_trace_enable);
EXPORT_SYMBOL(fs_dropcaches_trace_enable);
EXPORT_SYMBOL(fs_exec_trace_enable);
EXPORT_SYMBOL(fs_filesystems_trace_enable);
EXPORT_SYMBOL(fs_fs_struct_trace_enable);
EXPORT_SYMBOL(fs_ioctl_trace_enable);
EXPORT_SYMBOL(fs_nsfs_trace_enable);
EXPORT_SYMBOL(fs_posixacl_trace_enable);
EXPORT_SYMBOL(fs_pipe_trace_enable);
EXPORT_SYMBOL(fs_pnode_trace_enable);
EXPORT_SYMBOL(fs_proc_namespace_trace_enable);
EXPORT_SYMBOL(fs_select_trace_enable);
EXPORT_SYMBOL(fs_stack_trace_enable);


int fs_trace_dummy(void){

    printk(KERN_INFO "fs_trace_dummy \n");
    return 0;
}
