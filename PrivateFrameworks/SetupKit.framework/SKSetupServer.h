
@interface SKSetupServer : SKSetupBase <CUActivatable, CUAuthenticatableServer> {
    id /* block */  _authCompletionHandler;
    id /* block */  _authHidePasswordHandler;
    id /* block */  _authShowPasswordHandler;
    unsigned short  _bleAdvertisePSM;
    CBAdvertiser * _bleAdvertiser;
    CBServer * _bleServer;
    bool  _completed;
    id /* block */  _invalidationHandler;
    NSString * _nanEndpointID;
    CUNANPublisher * _nanPublisher;
    id /* block */  _overallCompletionHandler;
    CWFActivity * _wifiKeepAliveActivity;
    CWFInterface * _wifiKeepAliveInterface;
    struct __WiFiManagerClient { } * _wifiManager;
}

@property (nonatomic, copy) id /* block */ authCompletionHandler;
@property (nonatomic, copy) id /* block */ authHidePasswordHandler;
@property (nonatomic, copy) id /* block */ authShowPasswordHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) id /* block */ overallCompletionHandler;
@property (nonatomic, copy) NSString *password;
@property (nonatomic) int passwordType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)arg1;
- (void)_bleAdvertiserEnsureStarted;
- (void)_bleAdvertiserEnsureStopped;
- (bool)_bleAdvertiserShouldRun;
- (void)_bleServerEnsureStarted;
- (void)_bleServerEnsureStopped;
- (void)_handleAcceptBLEConnection:(id)arg1;
- (void)_handleAcceptCommon:(id)arg1;
- (void)_handleAcceptNANData:(id)arg1 endpoint:(id)arg2;
- (void)_invalidate;
- (void)_invalidated;
- (void)_nanPublisherEnsureStarted;
- (void)_nanPublisherEnsureStopped;
- (void)_prepareSteps;
- (void)_prepareStepsOSRecovery;
- (void)_update;
- (void)_wifiKeepAliveEnsureStarted;
- (void)_wifiKeepAliveEnsureStopped;
- (void)activateWithCompletion:(id /* block */)arg1;
- (id /* block */)authCompletionHandler;
- (id /* block */)authHidePasswordHandler;
- (id /* block */)authShowPasswordHandler;
- (id)init;
- (id /* block */)invalidationHandler;
- (id /* block */)overallCompletionHandler;
- (void)reset;
- (void)setAuthCompletionHandler:(id /* block */)arg1;
- (void)setAuthHidePasswordHandler:(id /* block */)arg1;
- (void)setAuthShowPasswordHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setOverallCompletionHandler:(id /* block */)arg1;

@end
