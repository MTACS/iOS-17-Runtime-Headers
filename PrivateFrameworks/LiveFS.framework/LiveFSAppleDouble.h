
@interface LiveFSAppleDouble : NSObject {
    unsigned long long  _ADBufferHeaderBytesValid;
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
    }  _ADFileAttributes;
    int  _ADFileErr;
    bool  _ADFileOK;
    bool  _ADFileOpen;
    NSMutableData * _ADHeaderBuffer;
    unsigned long long  _IOSize;
    struct attr_entry { unsigned int x1; unsigned int x2; unsigned short x3; unsigned char x4; unsigned char x5[1]; } * _attr_entry;
    struct attr_header { struct apple_double_header { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3[4]; unsigned short x_1_1_4; struct apple_double_entry { unsigned int x_5_2_1; unsigned int x_5_2_2; unsigned int x_5_2_3; } x_1_1_5[2]; unsigned char x_1_1_6[32]; unsigned char x_1_1_7[2]; } x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7[3]; unsigned short x8; unsigned short x9; } * _attrhdr;
    NSString * _baseFileHandle;
    unsigned long long  _baseFileID;
    bool  _emptyfinderinfo;
    struct apple_double_header { unsigned int x1; unsigned int x2; unsigned int x3[4]; unsigned short x4; struct apple_double_entry { unsigned int x_5_1_1; unsigned int x_5_1_2; unsigned int x_5_1_3; } x5[2]; unsigned char x6[32]; unsigned char x7[2]; } * _filehdr;
    struct apple_double_entry { unsigned int x1; unsigned int x2; unsigned int x3; } * _finderinfo;
    bool  _lookupFailed;
    int  _purpose;
    char * _rawAD;
    bool  _readonly;
    struct apple_double_entry { unsigned int x1; unsigned int x2; unsigned int x3; } * _rsrcfork;
    bool  _weCreatedFile;
    NSString * fileHandle;
    NSString * fileName;
    LiveFSAppleDoubleManager * manager;
    NSString * parentDirHandle;
    NSObject<OS_dispatch_semaphore> * syncSem;
}

@property (readonly) int ADFileErr;
@property (retain) NSString *baseFileHandle;
@property (retain) NSString *fileHandle;
@property (retain) NSString *fileName;
@property (retain) LiveFSAppleDoubleManager *manager;
@property (retain) NSString *parentDirHandle;
@property (readonly) int purpose;
@property (retain) NSObject<OS_dispatch_semaphore> *syncSem;

- (void).cxx_destruct;
- (int)ADFileErr;
- (id)allXattrNamesAndPosixError:(int*)arg1;
- (id)baseFileHandle;
- (int)closeFile;
- (bool)containerFileExists;
- (int)createFile;
- (void)dealloc;
- (id)description;
- (id)fileHandle;
- (id)fileName;
- (void)initEmptyResourceFork:(struct rsrcfork_header { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned char x5[112]; unsigned char x6[128]; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned short x12; unsigned char x13; unsigned char x14; unsigned short x15; unsigned short x16; unsigned short x17; }*)arg1;
- (id)initWithManager:(id)arg1 baseFileHandle:(id)arg2 name:(id)arg3 andDirectoryHandle:(id)arg4 andPurpose:(int)arg5;
- (int)linkFileToDirectory:(id)arg1 andName:(id)arg2;
- (int)loadADHeader;
- (void)loadAttrHeader;
- (int)lookupFile;
- (id)manager;
- (int)openFile;
- (id)parentDirHandle;
- (int)purpose;
- (void)reclaimFile;
- (int)removeFile;
- (int)removeXattrNamed:(id)arg1;
- (int)renameFileToDirectory:(id)arg1 andName:(id)arg2;
- (void)setBaseFileHandle:(id)arg1;
- (void)setFileHandle:(id)arg1;
- (void)setFileName:(id)arg1;
- (void)setManager:(id)arg1;
- (void)setParentDirHandle:(id)arg1;
- (void)setSyncSem:(id)arg1;
- (int)setValue:(id)arg1 forXattrNamed:(id)arg2 how:(int)arg3;
- (void)shiftDataDownAtOffset:(unsigned int)arg1 lengh:(unsigned int)arg2 howMuch:(unsigned long long)arg3;
- (void)shiftDataUp:(long long)arg1 length:(unsigned long long)arg2 howMuch:(unsigned long long)arg3;
- (void)swapAttrHeader:(struct attr_header { struct apple_double_header { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3[4]; unsigned short x_1_1_4; struct apple_double_entry { unsigned int x_5_2_1; unsigned int x_5_2_2; unsigned int x_5_2_3; } x_1_1_5[2]; unsigned char x_1_1_6[32]; unsigned char x_1_1_7[2]; } x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7[3]; unsigned short x8; unsigned short x9; }*)arg1;
- (void)swapFileHeader:(struct apple_double_header { unsigned int x1; unsigned int x2; unsigned int x3[4]; unsigned short x4; struct apple_double_entry { unsigned int x_5_1_1; unsigned int x_5_1_2; unsigned int x_5_1_3; } x5[2]; unsigned char x6[32]; unsigned char x7[2]; }*)arg1;
- (id)syncSem;
- (id)valueForXattrNamed:(id)arg1 posixError:(int*)arg2;
- (int)writeXattrInfo;

@end
