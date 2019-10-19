
#include <linux/string.h>
#include <linux/module.h>

int ext4_trace_enable=1;
EXPORT_SYMBOL(ext4_trace_enable);
int ext4_acl_trace_enable=0;
EXPORT_SYMBOL(ext4_acl_trace_enable);
int ext4_balloc_trace_enable=0;
EXPORT_SYMBOL(ext4_balloc_trace_enable);
int ext4_bitmap_trace_enable=0;
EXPORT_SYMBOL(ext4_bitmap_trace_enable);
int ext4_block_validity_trace_enable=0;
EXPORT_SYMBOL(ext4_block_validity_trace_enable);
int ext4_dir_trace_enable=0;
EXPORT_SYMBOL(ext4_dir_trace_enable);
int ext4_ext4_jbd2_trace_enable=0;
EXPORT_SYMBOL(ext4_ext4_jbd2_trace_enable);
int ext4_extents_trace_enable=0;
EXPORT_SYMBOL(ext4_extents_trace_enable);
int ext4_extents_status_trace_enable=0;
EXPORT_SYMBOL(ext4_extents_status_trace_enable);
int ext4_file_trace_enable=0;
EXPORT_SYMBOL(ext4_file_trace_enable);
int ext4_fsmap_trace_enable=0;
EXPORT_SYMBOL(ext4_fsmap_trace_enable);
int ext4_fsync_trace_enable=0;
EXPORT_SYMBOL(ext4_fsync_trace_enable);
int ext4_hash_trace_enable=0;
EXPORT_SYMBOL(ext4_hash_trace_enable);
int ext4_ialloc_trace_enable=0;
EXPORT_SYMBOL(ext4_ialloc_trace_enable);
int ext4_indirect_trace_enable=0;
EXPORT_SYMBOL(ext4_indirect_trace_enable);
int ext4_inline_trace_enable=0;
EXPORT_SYMBOL(ext4_inline_trace_enable);
int ext4_inode_trace_enable=0;
EXPORT_SYMBOL(ext4_inode_trace_enable);
int ext4_ioctl_trace_enable=0;
EXPORT_SYMBOL(ext4_ioctl_trace_enable);
int ext4_mballoc_trace_enable=0;
EXPORT_SYMBOL(ext4_mballoc_trace_enable);
int ext4_migrate_trace_enable=0;
EXPORT_SYMBOL(ext4_migrate_trace_enable);
int ext4_mmp_trace_enable=0;
EXPORT_SYMBOL(ext4_mmp_trace_enable);
int ext4_namei_trace_enable=0;
EXPORT_SYMBOL(ext4_namei_trace_enable);
int ext4_pageio_trace_enable=0;
EXPORT_SYMBOL(ext4_pageio_trace_enable);
int ext4_readpage_trace_enable=0;
EXPORT_SYMBOL(ext4_readpage_trace_enable);
int ext4_resize_trace_enable=0;
EXPORT_SYMBOL(ext4_resize_trace_enable);
int ext4_super_trace_enable=0;
EXPORT_SYMBOL(ext4_super_trace_enable);
int ext4_symlink_trace_enable=0;
EXPORT_SYMBOL(ext4_symlink_trace_enable);
int ext4_xattr_trace_enable=0;
EXPORT_SYMBOL(ext4_xattr_trace_enable);
int ext4_xattr_security_trace_enable=0;
EXPORT_SYMBOL(ext4_xattr_security_trace_enable);
int ext4_xattr_trusted_trace_enable=0;
EXPORT_SYMBOL(ext4_xattr_trusted_trace_enable);
int ext4_xattr_user_trace_enable=0;
EXPORT_SYMBOL(ext4_xattr_user_trace_enable);


int ext4_trace_dummy(void){

    printk(KERN_INFO "ext4_trace_dummy \n");
    return 0;
}
