
@interface AFRemoteRequestWatcher : NSObject <AFSiriActivationListenerDelegate> {
    id /* block */  _activationHandler;
    id /* block */  _buttonEventHandler;
    id /* block */  _dismissalHandler;
    id /* block */  _intentForwardingActionHandler;
    id /* block */  _intentHandler;
    id /* block */  _prewarmHandler;
    NSObject<OS_dispatch_queue> * _queue;
    id /* block */  _requestHandler;
    AFSiriActivationListener * _siriActivationListener;
    id /* block */  _speechRequestHandler;
    int  _speechRequestToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dispatchSpeechRequestOptions:(id)arg1;
- (void)_setupRequestListener;
- (void)_setupSpeechRequestListener;
- (void)dealloc;
- (id)init;
- (void)setActivationHandler:(id /* block */)arg1;
- (void)setButtonEventHandler:(id /* block */)arg1;
- (void)setDismissalHandler:(id /* block */)arg1;
- (void)setIntentForwardingActionHandler:(id /* block */)arg1;
- (void)setIntentHandler:(id /* block */)arg1;
- (void)setNewRequestHandler:(id /* block */)arg1;
- (void)setNewSpeechRequestHandler:(id /* block */)arg1;
- (void)setPrewarmHandler:(id /* block */)arg1;
- (void)setRequestHandler:(id /* block */)arg1;
- (void)siriActivationListener:(id)arg1 activateWithRequestInfo:(id)arg2 context:(id)arg3 completion:(id /* block */)arg4;
- (void)siriActivationListener:(id)arg1 deactivateForReason:(long long)arg2 options:(unsigned long long)arg3 context:(id)arg4 completion:(id /* block */)arg5;
- (void)siriActivationListener:(id)arg1 handleButtonEventFromContext:(id)arg2 completion:(id /* block */)arg3;
- (void)siriActivationListener:(id)arg1 handleIntent:(id)arg2 inBackgroundAppWithBundleId:(id)arg3 reply:(id /* block */)arg4;
- (void)siriActivationListener:(id)arg1 handleIntentForwardingAction:(id)arg2 inBackgroundApplicationWithBundleIdentifier:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)siriActivationListener:(id)arg1 prewarmWithRequestInfo:(id)arg2 context:(id)arg3 completion:(id /* block */)arg4;

@end
