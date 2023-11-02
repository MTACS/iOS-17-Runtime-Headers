
@interface SLSWActionDispatcher : NSObject {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)_sendAction:(id)arg1 toProcess:(id)arg2 completion:(id /* block */)arg3;
- (id)bundleIDForProcess:(id)arg1 error:(id*)arg2;
- (id)callbackQueue;
- (void)dispatchAction:(id)arg1 toProcess:(id)arg2 completion:(id /* block */)arg3;
- (void)dispatchAction:(id)arg1 withAssertionForProcess:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithQueue:(id)arg1;
- (id)workQueue;

@end
