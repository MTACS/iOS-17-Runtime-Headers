
@interface SMBDirEntry : NSObject {
    struct smbfattr { 
        unsigned long long fa_valid_mask; 
        unsigned int fa_attr; 
        unsigned long long fa_size; 
        unsigned long long fa_data_alloc; 
        struct timespec { 
            long long tv_sec; 
            long long tv_nsec; 
        } fa_atime; 
        struct timespec { 
            long long tv_sec; 
            long long tv_nsec; 
        } fa_chtime; 
        struct timespec { 
            long long tv_sec; 
            long long tv_nsec; 
        } fa_mtime; 
        struct timespec { 
            long long tv_sec; 
            long long tv_nsec; 
        } fa_crtime; 
        unsigned long long fa_ino; 
        struct timespec { 
            long long tv_sec; 
            long long tv_nsec; 
        } fa_reqtime; 
        int fa_vtype; 
        unsigned long long fa_uid; 
        unsigned long long fa_gid; 
        unsigned long long fa_permissions; 
        unsigned long long fa_nlinks; 
        unsigned int fa_flags_mask; 
        unsigned int fa_unix; 
        unsigned int fa_reparse_tag; 
        unsigned short fa_fstatus; 
        unsigned int fa_created_disp; 
        unsigned long long fa_rsrc_size; 
        unsigned long long fa_rsrc_alloc; 
        unsigned char fa_finder_info[32]; 
        unsigned int fa_max_access; 
    }  _attributes;
    NSString * _name;
    unsigned int  _ntstatus;
}

@property struct smbfattr { unsigned long long x1; unsigned int x2; unsigned long long x3; unsigned long long x4; struct timespec { long long x_5_1_1; long long x_5_1_2; } x5; struct timespec { long long x_6_1_1; long long x_6_1_2; } x6; struct timespec { long long x_7_1_1; long long x_7_1_2; } x7; struct timespec { long long x_8_1_1; long long x_8_1_2; } x8; unsigned long long x9; struct timespec { long long x_10_1_1; long long x_10_1_2; } x10; int x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned short x19; unsigned int x20; unsigned long long x21; unsigned long long x22; unsigned char x23[32]; unsigned int x24; } attributes;
@property (copy) NSString *name;
@property unsigned int ntstatus;

- (void).cxx_destruct;
- (struct smbfattr { unsigned long long x1; unsigned int x2; unsigned long long x3; unsigned long long x4; struct timespec { long long x_5_1_1; long long x_5_1_2; } x5; struct timespec { long long x_6_1_1; long long x_6_1_2; } x6; struct timespec { long long x_7_1_1; long long x_7_1_2; } x7; struct timespec { long long x_8_1_1; long long x_8_1_2; } x8; unsigned long long x9; struct timespec { long long x_10_1_1; long long x_10_1_2; } x10; int x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned short x19; unsigned int x20; unsigned long long x21; unsigned long long x22; unsigned char x23[32]; unsigned int x24; })attributes;
- (id)name;
- (unsigned int)ntstatus;
- (void)setAttributes:(struct smbfattr { unsigned long long x1; unsigned int x2; unsigned long long x3; unsigned long long x4; struct timespec { long long x_5_1_1; long long x_5_1_2; } x5; struct timespec { long long x_6_1_1; long long x_6_1_2; } x6; struct timespec { long long x_7_1_1; long long x_7_1_2; } x7; struct timespec { long long x_8_1_1; long long x_8_1_2; } x8; unsigned long long x9; struct timespec { long long x_10_1_1; long long x_10_1_2; } x10; int x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned short x19; unsigned int x20; unsigned long long x21; unsigned long long x22; unsigned char x23[32]; unsigned int x24; })arg1;
- (void)setName:(id)arg1;
- (void)setNtstatus:(unsigned int)arg1;

@end
