
@interface _UIViewServiceInterfaceConnectionRequest : NSObject {
    NSError * _cancellationError;
    _UIAsyncInvocation * _cancellationInvocation;
    id /* block */  _connectionHandler;
    bool  _isCancelled;
    NSObject<OS_dispatch_queue> * _queue;
    _UIRemoteViewService * _service;
    NSString * _serviceBundleIdentifier;
    BKSProcessAssertion * _serviceProcessAssertion;
    NSXPCConnection * _serviceSessionConnection;
    bool  _serviceSessionConnectionResumed;
    int  _sessionRequestNotifyToken;
}

+ (id)_connectToViewServiceWithBundleIdentifier:(id)arg1 service:(id)arg2 connectionHandler:(id /* block */)arg3;
+ (id)connectToViewService:(id)arg1 connectionHandler:(id /* block */)arg2;
+ (id)connectToViewServiceWithBundleIdentifier:(id)arg1 connectionHandler:(id /* block */)arg2;
+ (void)initialize;

- (void)_cancelUnconditionallyThen:(id /* block */)arg1;
- (void)_cancelWithError:(id)arg1;
- (void)_createAndEstablishConnection;
- (void)_createPlugInProcessAssertion;
- (void)_createProcessAssertion;
- (void)_createProcessAssertionForPID:(int)arg1 orBundleIdentifier:(id)arg2 acquiredHandler:(id /* block */)arg3;
- (void)_didConnectToService;
- (void)_establishConnection;
- (void)_launchService;
- (void)_objc_initiateDealloc;
- (void)dealloc;

@end
