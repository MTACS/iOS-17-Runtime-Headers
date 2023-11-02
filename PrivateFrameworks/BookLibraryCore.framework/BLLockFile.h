
@interface BLLockFile : NSObject {
    unsigned long long  _backgroundTaskIdentifier;
    int  _fd;
    bool  _hasBackgroundTask;
    bool  _locked;
    NSString * _path;
}

@property (nonatomic, readonly) bool locked;
@property (nonatomic, readonly) NSString *path;

+ (id)backgroundTaskDelegate;
+ (id)iTunesSyncLockFile;
+ (id)iTunesSyncLockFilePath;
+ (void)setBackgroundTaskDelegate:(id)arg1;

- (void).cxx_destruct;
- (bool)_lock:(bool)arg1 blocking:(bool)arg2;
- (void)_registerBackgroundTask;
- (void)_unregisterBackgroundTask;
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (bool)lock:(bool)arg1;
- (bool)lockWithBlock:(id /* block */)arg1 error:(id*)arg2;
- (bool)locked;
- (id)path;
- (bool)tryLock:(bool)arg1;
- (void)unlock;

@end
