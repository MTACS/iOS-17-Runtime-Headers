
@interface SVXClientActivationService : NSObject <SVXClientActivationServicing, SVXClientServiceConsuming> {
    AFAnalytics * _analytics;
    <SVXClientServiceProviding> * _clientServiceProvider;
    <SVXClientActivationServiceDelegate> * _delegate;
    SVXActivationContext * _lastButtonActivationContext;
    <SVXPerforming> * _performer;
    NSUUID * _preheatToken;
    NSMutableArray * _queuedButtonEvents;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SVXClientActivationServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activateWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)_deactivateWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)_enqueueButtonEvent:(id)arg1;
- (void)_performManualEndpointing;
- (void)_preheatTimerArrivedWithToken:(id)arg1;
- (void)_preheatWithActivationSource:(long long)arg1;
- (void)_prewarmWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)_processLastButtonActivationContext;
- (bool)_requestPermissionToActivateWithContext:(id)arg1;
- (void)_startPreheatTimer;
- (void)_stopPreheatTimer;
- (void)_transitToAutomaticEndpointingWithTimestamp:(unsigned long long)arg1;
- (void)activateWithButtonEvent:(id)arg1 userInfo:(id)arg2 completion:(id /* block */)arg3;
- (void)activateWithSystemEvent:(id)arg1 userInfo:(id)arg2 completion:(id /* block */)arg3;
- (void)activateWithText:(id)arg1 completion:(id /* block */)arg2;
- (void)activateWithUserInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)clientServiceDidChange:(bool)arg1;
- (void)deactivateWithButtonEvent:(id)arg1 userInfo:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (void)deactivateWithUserInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)deactivateWithUserInfo:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (id)delegate;
- (void)enqueueButtonEvent:(id)arg1;
- (void)handleButtonEvent:(id)arg1;
- (void)handleDidActivateWithContext:(id)arg1;
- (void)handleDidDeactivateWithContext:(id)arg1;
- (void)handleDidNotActivateWithContext:(id)arg1 error:(id)arg2;
- (void)handleRequestPermissionToActivateWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)handleWillActivateWithContext:(id)arg1;
- (void)handleWillDeactivateWithContext:(id)arg1;
- (id)initWithClientServiceProvider:(id)arg1 analytics:(id)arg2 performer:(id)arg3;
- (void)prewarmForSystemEvent:(id)arg1 completion:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;

@end
