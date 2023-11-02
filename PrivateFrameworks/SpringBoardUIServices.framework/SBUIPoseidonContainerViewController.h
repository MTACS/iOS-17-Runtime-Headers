
@interface SBUIPoseidonContainerViewController : UIViewController <SBUIPoseidonIconViewDelegate> {
    bool  _authenticated;
    <SBUIPoseidonContainerViewControllerLockStatusProvider> * _authenticationInformationProvider;
    bool  _bioLockout;
    <SBUIPoseidonContainerViewControllerDelegate> * _delegate;
    bool  _fingerOffSinceWake;
    _UILegibilitySettings * _legibilitySettings;
    bool  _resignActive;
    bool  _screenOn;
    SBUIPoseidonIconView * _testPoseidonIconView;
    int  _unlockSource;
}

@property (getter=isAuthenticated, nonatomic) bool authenticated;
@property (nonatomic) <SBUIPoseidonContainerViewControllerLockStatusProvider> *authenticationInformationProvider;
@property (getter=isBioLockout, nonatomic) bool bioLockout;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBUIPoseidonContainerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool fingerOffSinceWake;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) bool resignActive;
@property (getter=isScreenOn, nonatomic) bool screenOn;
@property (readonly) Class superclass;
@property (nonatomic) int unlockSource;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)_poseidonIconView;
- (void)_setCounterTransformForOrientation:(long long)arg1;
- (void)_setLocalTransformForOrientation:(long long)arg1;
- (id)_testPoseidonIconView;
- (void)_updateRotation;
- (id)authenticationInformationProvider;
- (bool)coachingActive;
- (id)delegate;
- (void)fillRestToOpenWithDuration:(double)arg1;
- (bool)fingerOffSinceWake;
- (id)initWithAuthenticationInformationProvider:(id)arg1;
- (bool)isAuthenticated;
- (bool)isBioLockout;
- (bool)isScreenOn;
- (id)legibilitySettings;
- (void)loadView;
- (void)poseidonIconViewCoachingStateDidChange:(id)arg1;
- (void)resetRestToOpen;
- (bool)resignActive;
- (void)setAuthenticated:(bool)arg1;
- (void)setAuthenticationInformationProvider:(id)arg1;
- (void)setBioLockout:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFingerOffSinceWake:(bool)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setResignActive:(bool)arg1;
- (void)setScreenOn:(bool)arg1;
- (void)setTestPoseidonIconView:(id)arg1;
- (void)setUnlockSource:(int)arg1;
- (void)showCoaching:(bool)arg1;
- (void)startRestToOpenCoaching:(bool)arg1 withCompletion:(id /* block */)arg2;
- (int)unlockSource;
- (void)updateContainsFirstRowIcons:(bool)arg1;
- (void)updateSidebarComplicationFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
