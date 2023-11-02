
@interface FSItemAttributes : NSObject <NSSecureCoding> {
    struct _LIFileAttributes { 
        unsigned long long __fa_rsvd0; 
        unsigned long long fa_validmask; 
        unsigned long long fa_seqno; 
        unsigned int fa_type; 
        unsigned int fa_mode; 
        unsigned int fa_nlink; 
        unsigned int fa_uid; 
        unsigned int fa_gid; 
        unsigned int fa_bsd_flags; 
        unsigned long long fa_size; 
        unsigned long long fa_allocsize; 
        unsigned long long fa_fileid; 
        unsigned long long fa_parentid; 
        struct timespec { 
            long long tv_sec; 
            long long tv_nsec; 
        } fa_atime; 
        struct timespec { 
            long long tv_sec; 
            long long tv_nsec; 
        } fa_mtime; 
        struct timespec { 
            long long tv_sec; 
            long long tv_nsec; 
        } fa_ctime; 
        struct timespec { 
            long long tv_sec; 
            long long tv_nsec; 
        } fa_birthtime; 
        struct timespec { 
            long long tv_sec; 
            long long tv_nsec; 
        } fa_backuptime; 
        struct timespec { 
            long long tv_sec; 
            long long tv_nsec; 
        } fa_addedtime; 
        unsigned int fa_int_flags; 
        unsigned int _pad0; 
    }  attrs;
}

@property (nonatomic, readonly) bool accessTimeIsActive;
@property (nonatomic, readonly) bool addedTimeIsActive;
@property (nonatomic) unsigned long long allocSize;
@property (nonatomic, readonly) bool allocSizeIsActive;
@property (nonatomic, readonly) bool backupTimeIsActive;
@property (nonatomic, readonly) bool birthTimeIsActive;
@property (nonatomic) unsigned int bsdFlags;
@property (nonatomic, readonly) bool bsdFlagsIsActive;
@property (nonatomic, readonly) bool changeTimeIsActive;
@property (nonatomic) unsigned long long fileid;
@property (nonatomic, readonly) bool fileidIsActive;
@property (nonatomic) unsigned int gid;
@property (nonatomic, readonly) bool gidIsActive;
@property (nonatomic) unsigned int mode;
@property (nonatomic, readonly) bool modeIsActive;
@property (nonatomic, readonly) bool modifyTimeIsActive;
@property (nonatomic) unsigned int numLinks;
@property (nonatomic, readonly) bool numLinksIsActive;
@property (nonatomic) unsigned long long parentid;
@property (nonatomic, readonly) bool parentidIsActive;
@property (nonatomic) unsigned long long size;
@property (nonatomic, readonly) bool sizeIsActive;
@property (nonatomic) unsigned char type;
@property (nonatomic, readonly) bool typeIsActive;
@property (nonatomic) unsigned int uid;
@property (nonatomic, readonly) bool uidIsActive;

+ (bool)supportsSecureCoding;

- (void)accessTime:(struct timespec { long long x1; long long x2; }*)arg1;
- (bool)accessTimeIsActive;
- (void)addedTime:(struct timespec { long long x1; long long x2; }*)arg1;
- (bool)addedTimeIsActive;
- (unsigned long long)allocSize;
- (bool)allocSizeIsActive;
- (void)backupTime:(struct timespec { long long x1; long long x2; }*)arg1;
- (bool)backupTimeIsActive;
- (void)birthTime:(struct timespec { long long x1; long long x2; }*)arg1;
- (bool)birthTimeIsActive;
- (unsigned int)bsdFlags;
- (bool)bsdFlagsIsActive;
- (void)changeTime:(struct timespec { long long x1; long long x2; }*)arg1;
- (bool)changeTimeIsActive;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)fileid;
- (bool)fileidIsActive;
- (void)getLIAttributes:(struct _LIFileAttributes { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; struct timespec { long long x_14_1_1; long long x_14_1_2; } x14; struct timespec { long long x_15_1_1; long long x_15_1_2; } x15; struct timespec { long long x_16_1_1; long long x_16_1_2; } x16; struct timespec { long long x_17_1_1; long long x_17_1_2; } x17; struct timespec { long long x_18_1_1; long long x_18_1_2; } x18; struct timespec { long long x_19_1_1; long long x_19_1_2; } x19; unsigned int x20; unsigned int x21; }*)arg1;
- (unsigned int)gid;
- (bool)gidIsActive;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLIAttributes:(const struct _LIFileAttributes { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; struct timespec { long long x_14_1_1; long long x_14_1_2; } x14; struct timespec { long long x_15_1_1; long long x_15_1_2; } x15; struct timespec { long long x_16_1_1; long long x_16_1_2; } x16; struct timespec { long long x_17_1_1; long long x_17_1_2; } x17; struct timespec { long long x_18_1_1; long long x_18_1_2; } x18; struct timespec { long long x_19_1_1; long long x_19_1_2; } x19; unsigned int x20; unsigned int x21; }*)arg1;
- (unsigned int)internalFlags;
- (bool)internalFlagsIsActive;
- (unsigned int)mode;
- (bool)modeIsActive;
- (void)modifyTime:(struct timespec { long long x1; long long x2; }*)arg1;
- (bool)modifyTimeIsActive;
- (unsigned int)numLinks;
- (bool)numLinksIsActive;
- (unsigned long long)parentid;
- (bool)parentidIsActive;
- (void)reset;
- (void)setAccessTime:(struct timespec { long long x1; long long x2; }*)arg1;
- (void)setAddedTime:(struct timespec { long long x1; long long x2; }*)arg1;
- (void)setAllocSize:(unsigned long long)arg1;
- (void)setBackupTime:(struct timespec { long long x1; long long x2; }*)arg1;
- (void)setBirthTime:(struct timespec { long long x1; long long x2; }*)arg1;
- (void)setBsdFlags:(unsigned int)arg1;
- (void)setChangeTime:(struct timespec { long long x1; long long x2; }*)arg1;
- (void)setFileid:(unsigned long long)arg1;
- (void)setGid:(unsigned int)arg1;
- (void)setInternalFlags:(unsigned int)arg1;
- (void)setMode:(unsigned int)arg1;
- (void)setModifyTime:(struct timespec { long long x1; long long x2; }*)arg1;
- (void)setNumLinks:(unsigned int)arg1;
- (void)setParentid:(unsigned long long)arg1;
- (void)setSize:(unsigned long long)arg1;
- (void)setType:(unsigned char)arg1;
- (void)setUid:(unsigned int)arg1;
- (unsigned long long)size;
- (bool)sizeIsActive;
- (unsigned char)type;
- (bool)typeIsActive;
- (unsigned int)uid;
- (bool)uidIsActive;

@end
