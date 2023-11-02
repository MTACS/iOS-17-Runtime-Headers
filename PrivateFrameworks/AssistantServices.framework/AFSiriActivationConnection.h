
@interface AFSiriActivationConnection : NSObject <AFInvalidating, AFSiriActivationService> {
    NSObject<OS_dispatch_queue> * _queue;
    long long  _servicePort;
    NSXPCConnection * _xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_connection;
- (void)_connectionInterrupted;
- (void)_connectionInvalidated;
- (void)_invalidate;
- (oneway void)activateWithRequestInfo:(id)arg1 context:(id)arg2 completion:(id /* block */)arg3;
- (oneway void)deactivateForReason:(long long)arg1 options:(unsigned long long)arg2 context:(id)arg3 completion:(id /* block */)arg4;
- (void)dealloc;
- (oneway void)handleContext:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)handleIntent:(id)arg1 inBackgroundAppWithBundleId:(id)arg2 reply:(id /* block */)arg3;
- (oneway void)handleIntentForwardingAction:(id)arg1 inBackgroundApplicationWithBundleIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (id)initWithServicePort:(long long)arg1;
- (void)invalidate;
- (oneway void)prewarmWithRequestInfo:(id)arg1 context:(id)arg2 completion:(id /* block */)arg3;

@end
