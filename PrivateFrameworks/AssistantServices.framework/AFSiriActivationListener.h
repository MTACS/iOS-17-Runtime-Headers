
@interface AFSiriActivationListener : NSObject <AFInvalidating, AFNotifyObserverDelegate, AFSiriActivationService, NSXPCListenerDelegate> {
    <AFSiriActivationListenerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    NSXPCListener * _xpcListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activateWithRequestInfo:(id)arg1 context:(id)arg2 completion:(id /* block */)arg3;
- (void)_deactivateForReason:(long long)arg1 options:(unsigned long long)arg2 context:(id)arg3 completion:(id /* block */)arg4;
- (void)_deliverButtonEventFromContext:(id)arg1 completion:(id /* block */)arg2;
- (void)_invalidate;
- (void)_myriadEventWithRequestInfo:(id)arg1 context:(id)arg2 completion:(id /* block */)arg3;
- (void)_prewarmWithRequestInfo:(id)arg1 context:(id)arg2 completion:(id /* block */)arg3;
- (void)_startWithDelegate:(id)arg1;
- (void)_stop;
- (oneway void)activateWithRequestInfo:(id)arg1 context:(id)arg2 completion:(id /* block */)arg3;
- (oneway void)deactivateForReason:(long long)arg1 options:(unsigned long long)arg2 context:(id)arg3 completion:(id /* block */)arg4;
- (void)dealloc;
- (oneway void)handleContext:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)handleIntent:(id)arg1 inBackgroundAppWithBundleId:(id)arg2 reply:(id /* block */)arg3;
- (oneway void)handleIntentForwardingAction:(id)arg1 inBackgroundApplicationWithBundleIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithServicePort:(long long)arg1;
- (void)invalidate;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)notifyObserver:(id)arg1 didChangeStateFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;
- (oneway void)prewarmWithRequestInfo:(id)arg1 context:(id)arg2 completion:(id /* block */)arg3;
- (void)startWithDelegate:(id)arg1;
- (void)stop;

@end
