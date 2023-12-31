
@interface ICRWLock : NSObject {
    struct _opaque_pthread_rwlock_t { 
        long long __sig; 
        BOOL __opaque[192]; 
    }  _rwLock;
}

- (void)dealloc;
- (id)init;
- (void)readLock;
- (int)tryReadLock;
- (void)unlock;
- (void)writeLock;

@end
