
@interface SBUIStartupToLoginWindowAnimationController : SBUIMainScreenAnimationController <SBLoginAppContainerViewControllerObserver> {
    BKSDisplayRenderOverlay * _persistentSnapshotOverlay;
    SBWindow * _transitionWindow;
    BSTransaction * _waitForLoginAppToFinishLaunchingTransaction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cleanupAnimation;
- (id)_getTransitionWindow;
- (void)_setHidden:(bool)arg1;
- (bool)_shouldDismissBanner;
- (void)_startAnimation;
- (id)animationSettings;
- (id)initWithTransitionContextProvider:(id)arg1;
- (id)initWithTransitionContextProvider:(id)arg1 overlay:(id)arg2;
- (void)loginAppDidFinishLaunching:(id)arg1;

@end
