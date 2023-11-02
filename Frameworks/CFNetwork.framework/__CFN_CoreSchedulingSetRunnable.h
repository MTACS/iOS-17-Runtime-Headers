
@interface __CFN_CoreSchedulingSetRunnable : NSObject {
    long long  _count;
    long long  _performCount;
    struct __CFRunLoopSource { } * _pinnedSource;
    struct __CFRunLoop { } * _rl;
    NSObject<OS_dispatch_semaphore> * _sem;
    id /* block */  _setup;
    struct _opaque_pthread_t { long long x1; struct __darwin_pthread_handler_rec {} *x2; BOOL x3[8176]; } * _tid;
}

+ (void)_run:(id)arg1;

- (void)dealloc;

@end
