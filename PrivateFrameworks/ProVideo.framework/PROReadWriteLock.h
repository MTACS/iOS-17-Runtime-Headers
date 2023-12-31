
@interface PROReadWriteLock : NSObject <NSLocking> {
    struct _opaque_pthread_rwlock_t { 
        long long __sig; 
        BOOL __opaque[192]; 
    }  lock;
}

- (void)dealloc;
- (id)init;
- (void)lock;
- (void)lockForReading;
- (void)lockForWriting;
- (void)unlock;

@end
