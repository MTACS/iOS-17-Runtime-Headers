
@interface MGFileWatcher : NSObject {
    id /* block */  _block;
    unsigned long long  _inode;
    struct timespec { 
        long long tv_sec; 
        long long tv_nsec; 
    }  _mtime;
    NSObject<OS_dispatch_source> * _parentSrc;
    NSString * _path;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _src;
}

- (void)cancel;
- (void)dealloc;
- (id)initWithPath:(id)arg1 block:(id /* block */)arg2;
- (bool)updateWatcher;

@end
