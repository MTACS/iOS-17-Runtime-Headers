
@interface SGSqliteDatabaseSharedLock : NSObject {
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    long long  _writeTransactionDepth;
}

@property (nonatomic, readonly) long long writeTransactionDepth;

- (void)dealloc;
- (id)init;
- (void)runWithLockAcquired:(id /* block */)arg1;
- (long long)writeTransactionDepth;

@end
