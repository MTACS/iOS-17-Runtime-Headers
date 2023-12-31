
@interface NFAccessorySession : NSObject <NFAccessorySession> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    id /* block */  _didEndCallback;
    id /* block */  _didStartCallback;
    bool  _isCallbackQueueSuspended;
    bool  _isFirstInQueue;
    NSObject<NFSessionAccessoryInterface><NSXPCProxyCreating> * _proxy;
    unsigned long long  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) bool didEnd;
@property (readonly) unsigned long long hash;
@property (readonly) bool isActive;
@property (readonly) unsigned long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didEndSession;
- (void)_didStartSession:(id)arg1;
- (void)_endProxySession;
- (id)callbackQueue;
- (void)dealloc;
- (bool)didEnd;
- (void)didEndUnexpectedly;
- (void)didStartSession:(id)arg1;
- (void)didStartSessionWithoutQueue:(id)arg1;
- (void)endSessionWithCompletion:(id /* block */)arg1;
- (id)init;
- (bool)isActive;
- (bool)isFirstInQueue;
- (id)proxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)resume;
- (void)setDidEndCallback:(id /* block */)arg1;
- (void)setDidStartCallback:(id /* block */)arg1;
- (void)setIsFirstInQueue:(bool)arg1;
- (void)setProxy:(id)arg1;
- (unsigned long long)state;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;

@end
