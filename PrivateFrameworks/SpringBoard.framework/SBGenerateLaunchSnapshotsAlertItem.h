
@interface SBGenerateLaunchSnapshotsAlertItem : SBAlertItem {
    id /* block */  _handler;
}

@property (nonatomic, copy) id /* block */ handler;

- (void).cxx_destruct;
- (bool)behavesSuperModally;
- (void)configure:(bool)arg1 requirePasscodeForActions:(bool)arg2;
- (bool)forcesModalAlertAppearance;
- (id /* block */)handler;
- (id)initWithHandler:(id /* block */)arg1;
- (void)regenerateApplications:(id)arg1;
- (void)setHandler:(id /* block */)arg1;
- (bool)shouldShowInLockScreen;

@end
