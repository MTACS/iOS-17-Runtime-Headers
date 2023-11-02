
@interface CNProcessSharedLock : NSObject <NSLocking> {
    int  _fileDescriptor;
    <CNFileServices> * _fileServices;
    <NSLocking> * _localLock;
    long long  _localLockCount;
    NSString * _lockFilePath;
    NSString * _name;
    <CNInhibitor> * _runningBoardInhibitor;
}

@property (readonly, copy) NSString *lockFilePath;
@property (copy) NSString *name;
@property (retain) <CNInhibitor> *runningBoardInhibitor;

+ (id)os_log;
+ (id)recursiveSharedLockWithLockFilePath:(id)arg1;
+ (id)semaphoreSharedLockWithLockFilePath:(id)arg1;
+ (id)sharedLockWithLockFilePath:(id)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (bool)ensureFileDescriptorIsInvalid:(id /* block */)arg1;
- (bool)ensureFileIsLocal:(id /* block */)arg1;
- (id)errorUserInfo;
- (id)errorUserInfoWithDescription:(id)arg1;
- (id)exceptionWithName:(id)arg1 reason:(id)arg2;
- (id)init;
- (id)initWithLockFilePath:(id)arg1 localLock:(id)arg2;
- (id)initWithLockFilePath:(id)arg1 localLock:(id)arg2 fileServices:(id)arg3;
- (void)invalidate;
- (bool)isValid;
- (bool)isValidFileDescriptor;
- (void)lock;
- (id)lockFilePath;
- (void)lockRetryOnEDEADLK;
- (id)name;
- (bool)open:(id*)arg1;
- (bool)openLockFile:(id /* block */)arg1;
- (id)runningBoardInhibitor;
- (void)setName:(id)arg1;
- (void)setRunningBoardInhibitor:(id)arg1;
- (void)unlock;

@end
