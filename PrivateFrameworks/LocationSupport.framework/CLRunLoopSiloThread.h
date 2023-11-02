
@interface CLRunLoopSiloThread : NSObject {
    bool  _shouldCancelThread;
    struct _opaque_pthread_t { long long x1; struct __darwin_pthread_handler_rec {} *x2; BOOL x3[8176]; } * _threadId;
    NSRunLoop * _underlyingRunLoop;
    NSThread * _underlyingThread;
}

@property (nonatomic, readonly) bool shouldCancelThread;
@property (nonatomic, readonly) struct _opaque_pthread_t { long long x1; struct __darwin_pthread_handler_rec {} *x2; BOOL x3[8176]; }*threadId;
@property (nonatomic, readonly) NSRunLoop *underlyingRunLoop;
@property (nonatomic, readonly) NSThread *underlyingThread;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithCurrentThread;
- (id)initWithRunLoop:(struct __CFRunLoop { }*)arg1;
- (bool)shouldCancelThread;
- (struct _opaque_pthread_t { long long x1; struct __darwin_pthread_handler_rec {} *x2; BOOL x3[8176]; }*)threadId;
- (id)underlyingRunLoop;
- (id)underlyingThread;

@end
