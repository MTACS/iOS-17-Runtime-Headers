
@interface SESSession : NSObject <SESSession, SESSessionCallbackInterface> {
    id /* block */  _didEndCallback;
    id /* block */  _didStartCallback;
    bool  _isQueueSuspended;
    NSObject<SESSessionInterface><NSXPCProxyCreating> * _proxy;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (void)didEndUnexpectedly:(id)arg1;
- (void)didStartSession:(id)arg1;
- (id)endRemoteSession;
- (void)endSession;
- (void)endSessionWithError:(id)arg1;
- (id)init;
- (id)proxy;
- (id)queue;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)resume;
- (void)setDidEndCallback:(id /* block */)arg1;
- (void)setDidStartCallback:(id /* block */)arg1;
- (void)setProxy:(id)arg1;
- (unsigned long long)state;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;

@end
