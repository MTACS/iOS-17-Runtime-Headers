
@interface _UIViewServiceInterface : NSObject <NSXPCConnectionDelegate> {
    _Atomic bool  _isTerminated;
    _UIRemoteViewService * _service;
    NSString * _serviceBundleIdentifier;
    NSXPCConnection * _serviceConnection;
    BKSProcessAssertion * _serviceProcessAssertion;
    _UIAsyncInvocation * _terminateInvocation;
    NSError * _terminationError;
    id /* block */  _terminationHandler;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _terminationStateLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct { unsigned int x1[8]; } serviceAuditToken;
@property (nonatomic, readonly) int servicePID;
@property (readonly) Class superclass;

+ (id)connectToViewService:(id)arg1 deputyInterfaces:(id)arg2 connectionHandler:(id /* block */)arg3;
+ (id)connectToViewServiceWithBundleIdentifier:(id)arg1 deputyInterfaces:(id)arg2 connectionHandler:(id /* block */)arg3;
+ (void)initialize;

- (id)_initWithConnectionInfo:(struct { id x1; id x2; })arg1 service:(id)arg2 deputyInterfaces:(id)arg3;
- (id)_initWithConnectionInfo:(struct { id x1; id x2; })arg1 serviceBundleIdentifier:(id)arg2 deputyInterfaces:(id)arg3;
- (id)_initWithConnectionInfo:(struct { id x1; id x2; })arg1 serviceBundleIdentifier:(id)arg2 service:(id)arg3 deputyInterfaces:(id)arg4;
- (void)_objc_initiateDealloc;
- (void)_terminateUnconditionallyThen:(id /* block */)arg1;
- (id)_terminateWithError:(id)arg1;
- (id)connectToDeputyWithInterface:(id)arg1 fromExportedHostingObject:(id)arg2 connectionHandler:(id /* block */)arg3;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(bool)arg3;
- (void)dealloc;
- (id)disconnect;
- (struct { unsigned int x1[8]; })serviceAuditToken;
- (int)servicePID;
- (void)setTerminationHandler:(id /* block */)arg1;

@end
