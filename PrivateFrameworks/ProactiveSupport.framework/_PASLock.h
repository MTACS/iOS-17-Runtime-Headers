
@interface _PASLock : NSObject {
    id  _guardedData;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    struct _opaque_pthread_t { long long x1; struct __darwin_pthread_handler_rec {} *x2; BOOL x3[8176]; } * _owner;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)guardedDataAssertingLockContext;
- (id)initWithGuardedData:(id)arg1;
- (void)runWithLockAcquired:(id /* block */)arg1;
- (unsigned char)runWithLockAcquired:(id /* block */)arg1 shouldContinueBlock:(id /* block */)arg2;
- (unsigned char)tryWithLockAcquired:(id /* block */)arg1;
- (id)unsafeGuardedData;

@end
