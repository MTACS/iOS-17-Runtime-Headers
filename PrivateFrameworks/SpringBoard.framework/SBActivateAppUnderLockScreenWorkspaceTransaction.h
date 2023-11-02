
@interface SBActivateAppUnderLockScreenWorkspaceTransaction : SBToAppsWorkspaceTransaction {
    SBDisableActiveInterfaceOrientationChangeAssertion * _disableActiveOrientationChangeAssertion;
    <SBLockScreenEnvironment> * _lockScreenEnvironment;
}

- (void).cxx_destruct;
- (void)_activateLockScreen;
- (void)_begin;
- (void)_didComplete;
- (void)_lockScreenDidActivate;
- (void)_setupAndActivate;
- (void)dealloc;
- (id)initWithTransitionRequest:(id)arg1 lockScreenEnvironment:(id)arg2;
- (bool)shouldPerformToAppStateCleanupOnCompletion;
- (bool)shouldPlaceOutgoingScenesUnderLockOnCompletion;

@end
