
@interface PSUITouchIDPasscodeController : PSUIBiometricController <BiometricKitDelegate, BiometricKitUIEnrollResultDelegate, LAUIDelegate, UIPopoverControllerDelegate> {
    LAContext * _authContext;
    BiometricKit * _highlightMatcher;
    NSObject<OS_dispatch_queue> * _highlightQueue;
}

@property (nonatomic, retain) LAContext *authContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) BiometricKit *highlightMatcher;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *highlightQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelMatching;
- (id)_fingerprintSpecifierForIdentity:(id)arg1;
- (void)_setupMatching;
- (void)addEnrollment:(id)arg1;
- (id)authContext;
- (void)biometricBindingDeleted;
- (id)biometricLogo;
- (id)biometricNameDescription;
- (void)cancelModalFlow;
- (void)cancelModalFlowWithCompletion:(id /* block */)arg1;
- (void)configureBiometricTemplateMatching;
- (void)dealloc;
- (void)enrollBiometric;
- (void)enrollResult:(int)arg1 bkIdentity:(id)arg2;
- (void)enrollmentControllerDidDismiss;
- (void)event:(long long)arg1 params:(id)arg2 reply:(id /* block */)arg3;
- (id)fingerprintSpecifiers;
- (id)headerForUseBiometricSection;
- (void)highlightFingerprintSpecifier:(id)arg1;
- (id)highlightMatcher;
- (id)highlightQueue;
- (id)init;
- (bool)isBiometricIdentityMatchingGovernmentIDTemplate:(id)arg1;
- (void)matchBiometricIdentitiesWithBiometricTemplates;
- (void)matchResult:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setAuthContext:(id)arg1;
- (void)setHighlightMatcher:(id)arg1;
- (void)setHighlightQueue:(id)arg1;
- (id)specifiers;
- (void)statusMessage:(unsigned int)arg1;
- (void)suspend;
- (void)unhighlightFingerprintSpecifiersAfterDelay:(double)arg1;
- (void)updateAddFingerprintSpecifier;
- (void)updateWithReplacedUUIDs:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;

@end
