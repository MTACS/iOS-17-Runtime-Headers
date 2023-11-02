
@interface SKSetupAppleIDSignInServer : SKSetupBase {
    CBAdvertiser * _bleAdvertiser;
    CBServer * _bleServer;
    bool  _completed;
}

- (void).cxx_destruct;
- (void)_activate;
- (void)_bleAdvertiserEnsureStarted;
- (void)_bleAdvertiserEnsureStopped;
- (bool)_bleAdvertiserShouldRun;
- (void)_bleServerAcceptConnecton:(id)arg1;
- (void)_bleServerEnsureStarted;
- (void)_bleServerEnsureStopped;
- (void)_invalidate;
- (void)_oobEnsureStarted;
- (void)_prepareSteps;
- (void)_run;
- (id)descriptionWithLevel:(int)arg1;
- (id)init;

@end
