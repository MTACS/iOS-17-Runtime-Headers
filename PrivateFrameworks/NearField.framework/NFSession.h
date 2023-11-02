
@interface NFSession : NSObject <NFSession> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    id /* block */  _didEndCallback;
    id /* block */  _didStartCallback;
    bool  _isCallbackQueueSuspended;
    bool  _isFirstInQueue;
    NSObject<NFSessionInterface><NSXPCProxyCreating> * _proxy;
    <NFSessionDelegate> * _sessionDelegate;
    NFTimer * _sessionKillSwitch;
    unsigned long long  _state;
}

@property (readonly) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) bool didEnd;
@property (readonly) unsigned long long hash;
@property (readonly) bool isActive;
@property <NFSessionDelegate> *sessionDelegate;
@property (readonly) unsigned long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_endProxySession;
- (void)_invokeDidEndSession;
- (void)_invokeDidStartCallback:(id)arg1;
- (id)activateWithToken:(id)arg1;
- (id)callbackQueue;
- (id)createSessionHandoffToken:(id*)arg1;
- (void)dealloc;
- (bool)didEnd;
- (void)didEndUnexpectedly;
- (void)didStartSession:(id)arg1;
- (void)didStartSessionWithoutQueue:(id)arg1;
- (void)endSession;
- (void)endSessionAndStartNextSession:(id)arg1 completion:(id /* block */)arg2;
- (void)endSessionWithCompletion:(id /* block */)arg1;
- (void)handleSessionResumed;
- (void)handleSessionSuspended:(id)arg1;
- (id)init;
- (bool)isActive;
- (bool)isFirstInQueue;
- (bool)isTimeLimited;
- (void)prioritizeSession;
- (id)proxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)resume;
- (id)sessionDelegate;
- (void)setDidEndCallback:(id /* block */)arg1;
- (void)setDidStartCallback:(id /* block */)arg1;
- (void)setIsFirstInQueue:(bool)arg1;
- (void)setProxy:(id)arg1;
- (void)setSessionDelegate:(id)arg1;
- (void)setSessionTimeLimit:(double)arg1;
- (unsigned long long)state;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;

@end
