
@interface SCNRecursiveLock : NSObject {
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _mutex;
}

- (void)dealloc;
- (id)init;
- (void)lock;
- (void)unlock;

@end
