
@interface __NSCFLocalDownloadFile : NSObject {
    bool  _createdPlaceholder;
    int  _error;
    <__NSCFLocalDownloadFileOpener> * _fileProvider;
    id /* block */  _finishCompletion;
    bool  _finished;
    NSString * _path;
    NSString * _protectionType;
    bool  _skipUnlink;
    struct stat { 
        int st_dev; 
        unsigned short st_mode; 
        unsigned short st_nlink; 
        unsigned long long st_ino; 
        unsigned int st_uid; 
        unsigned int st_gid; 
        int st_rdev; 
        struct timespec { 
            long long tv_sec; 
            long long tv_nsec; 
        } st_atimespec; 
        struct timespec { 
            long long tv_sec; 
            long long tv_nsec; 
        } st_mtimespec; 
        struct timespec { 
            long long tv_sec; 
            long long tv_nsec; 
        } st_ctimespec; 
        struct timespec { 
            long long tv_sec; 
            long long tv_nsec; 
        } st_birthtimespec; 
        long long st_size; 
        long long st_blocks; 
        int st_blksize; 
        unsigned int st_flags; 
        unsigned int st_gen; 
        int st_lspare; 
        long long st_qspare[2]; 
    }  _stat;
    bool  _truncateFile;
    NSObject<OS_dispatch_queue> * _workQueue;
    NSObject<OS_dispatch_io> * _writeIO;
}

@property (retain) NSString *path;

- (void)dealloc;
- (id)path;
- (void)setPath:(id)arg1;

@end
