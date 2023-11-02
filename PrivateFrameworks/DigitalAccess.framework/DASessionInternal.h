
@interface DASessionInternal : NSObject {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    id  _delegate;
    bool  _isCallbackQueueSuspended;
    bool  _isFirstInQueue;
    NSObject<NSXPCProxyCreating> * _proxy;
}

@property (readonly) id delegate;
@property bool isFirstInQueue;
@property (setter=setProxy:, retain) id proxy;

- (void).cxx_destruct;
- (void)closeProxy;
- (void)dealloc;
- (id)delegate;
- (void)dispatchBlockOnCallback:(id /* block */)arg1;
- (id)initWithDelegate:(id)arg1;
- (bool)isFirstInQueue;
- (id)proxy;
- (void)resume;
- (void)setIsFirstInQueue:(bool)arg1;
- (void)setProxy:(id)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;

@end
