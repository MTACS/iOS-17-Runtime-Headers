
@interface SKSetupClient : SKSetupBase <CUActivatable, CUAuthenticatableClient> {
    id /* block */  _activateCompletion;
    id /* block */  _authCompletionHandler;
    id /* block */  _authPromptHandler;
    id /* block */  _invalidationHandler;
    CUNANEndpoint * _nanEndpoint;
    CUNANSubscriber * _nanSubscriber;
    id /* block */  _overallCompletionHandler;
}

@property (nonatomic, copy) id /* block */ authCompletionHandler;
@property (nonatomic, copy) id /* block */ authPromptHandler;
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
- (void)_activateBLEWithCompletion:(id /* block */)arg1;
- (void)_activateNANContinueWithError:(id)arg1;
- (void)_activateNANWithCompletion:(id /* block */)arg1;
- (void)_activateOOBWithCompletion:(id /* block */)arg1;
- (void)_activateWithCompletion:(id /* block */)arg1;
- (void)_completeWithError:(id)arg1;
- (void)_invalidate;
- (void)_invalidateSteps;
- (void)_invalidated;
- (void)_prepareSteps;
- (void)_prepareStepsOSRecovery;
- (void)_run;
- (void)_setupConnectionCommon:(id)arg1;
- (void)activateWithCompletion:(id /* block */)arg1;
- (id /* block */)authCompletionHandler;
- (id /* block */)authPromptHandler;
- (id)init;
- (id /* block */)invalidationHandler;
- (id /* block */)overallCompletionHandler;
- (void)setAuthCompletionHandler:(id /* block */)arg1;
- (void)setAuthPromptHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setOverallCompletionHandler:(id /* block */)arg1;
- (void)tryPassword:(id)arg1;

@end
