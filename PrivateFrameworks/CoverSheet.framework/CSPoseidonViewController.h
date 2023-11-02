
@interface CSPoseidonViewController : CSCoverSheetViewControllerBase <SBUIPoseidonContainerViewControllerDelegate, SBUIPoseidonContainerViewControllerLockStatusProvider> {
    <SBFAuthenticationStatusProvider> * _authenticationStatusProvider;
    <SBUIBiometricResource> * _biometricResource;
    SBUIPoseidonContainerViewController * _poseidonContainerViewController;
}

@property (nonatomic, retain) <SBFAuthenticationStatusProvider> *authenticationStatusProvider;
@property (nonatomic, retain) <SBUIBiometricResource> *biometricResource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasBiometricAuthenticationCapabilityEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isBiometricLockedOut;
@property (nonatomic, retain) SBUIPoseidonContainerViewController *poseidonContainerViewController;
@property (nonatomic, readonly) UIView *poseidonView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)aggregateAppearance:(id)arg1;
- (id)authenticationStatusProvider;
- (id)biometricResource;
- (bool)handleEvent:(id)arg1;
- (bool)hasBiometricAuthenticationCapabilityEnabled;
- (bool)isBiometricLockedOut;
- (id)poseidonContainerViewController;
- (void)poseidonContainerViewControllerCoachingStateDidChange:(id)arg1;
- (id)poseidonView;
- (void)setAuthenticationStatusProvider:(id)arg1;
- (void)setBiometricResource:(id)arg1;
- (void)setPoseidonContainerViewController:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
