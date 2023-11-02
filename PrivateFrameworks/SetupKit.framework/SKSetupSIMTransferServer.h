
@interface SKSetupSIMTransferServer : SKSetupBase {
    CBAdvertiser * _bleAdvertiser;
    CBServer * _bleServer;
    bool  _useSecondTrigger;
}

@property (nonatomic) bool useSecondTrigger;

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
- (void)_run;
- (id)descriptionWithLevel:(int)arg1;
- (id)init;
- (void)setUseSecondTrigger:(bool)arg1;
- (bool)useSecondTrigger;

@end
