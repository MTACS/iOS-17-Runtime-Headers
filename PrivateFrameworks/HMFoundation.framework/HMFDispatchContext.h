
@interface HMFDispatchContext : NSObject <HMFAsyncContext> {
    bool  _alwaysDispatch;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly) NSObject<OS_dispatch_queue> *queue;

+ (void)blessWithImplicitContext:(id)arg1;

- (void).cxx_destruct;
- (void)assertIsExecuting;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;
- (id)initWithQueue:(id)arg1 alwaysDispatch:(bool)arg2;
- (void)performBlock:(id /* block */)arg1;
- (id)queue;

@end
