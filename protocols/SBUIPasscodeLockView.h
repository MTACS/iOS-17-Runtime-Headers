
@protocol SBUIPasscodeLockView <NSObject>

@required

- (bool)allowsAutomaticBiometricPresentationTransition;
- (bool)alwaysShowPasscodeButtonForFaceIDMatchFailure;
- (void)autofillForSuccessfulMesaAttemptWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (<SBFLegibilitySettingsProvider> *)backgroundLegibilitySettingsProvider;
- (void)becomeActiveWithAnimationSettings:(BSAnimationSettings *)arg1;
- (bool)biometricPresentationAncillaryButtonsVisible;
- (bool)canPeformBiometricAuthentication;
- (UIColor *)customBackgroundColor;
- (<SBUIPasscodeLockViewDelegate> *)delegate;
- (bool)isBiometricAuthenticationAllowed;
- (bool)isScreenOn;
- (NSString *)overrideFaceIDReason;
- (NSString *)overridePasscodeButtonTitle;
- (NSString *)passcode;
- (long long)passcodeLockViewState;
- (bool)playsKeypadSounds;
- (UIView *)poseidonContainerView;
- (SBUIPoseidonContainerViewController *)poseidonContainerViewController;
- (void)reset;
- (void)resetForFailedMesaAttemptWithStatusText:(NSString *)arg1 andSubtitle:(NSString *)arg2;
- (void)resetForFailedPasscode;
- (void)resetForScreenOff;
- (void)resetForSuccess;
- (void)setAllowsAutomaticBiometricPresentationTransition:(bool)arg1;
- (void)setAllowsStatusTextUpdatingOnResignFirstResponder:(bool)arg1;
- (void)setAlwaysShowPasscodeButtonForFaceIDMatchFailure:(bool)arg1;
- (void)setBackgroundLegibilitySettingsProvider:(id <SBFLegibilitySettingsProvider>)arg1;
- (void)setBiometricAuthenticationAllowed:(bool)arg1;
- (void)setBiometricPresentationAncillaryButtonsVisible:(bool)arg1;
- (void)setCustomBackgroundColor:(UIColor *)arg1;
- (void)setDelegate:(id <SBUIPasscodeLockViewDelegate>)arg1;
- (void)setKeypadVisible:(bool)arg1 animated:(bool)arg2;
- (void)setOverrideFaceIDReason:(NSString *)arg1;
- (void)setOverridePasscodeButtonTitle:(NSString *)arg1;
- (void)setPasscodeLockViewState:(long long)arg1;
- (void)setPasscodeLockViewState:(long long)arg1 animated:(bool)arg2;
- (void)setPlaysKeypadSounds:(bool)arg1;
- (void)setPoseidonContainerView:(UIView *)arg1;
- (void)setPoseidonContainerViewController:(SBUIPoseidonContainerViewController *)arg1;
- (void)setScreenOn:(bool)arg1;
- (void)setShowsCancelButton:(bool)arg1;
- (void)setShowsEmergencyCallButton:(bool)arg1;
- (void)setShowsLockIconForFaceID:(bool)arg1;
- (void)setShowsProudLock:(bool)arg1;
- (void)setShowsStatusField:(bool)arg1;
- (void)setUnlockDestination:(NSString *)arg1;
- (void)setUsesBiometricPresentation:(bool)arg1;
- (bool)showsCancelButton;
- (bool)showsEmergencyCallButton;
- (bool)showsLockIconForFaceID;
- (bool)showsProudLock;
- (bool)showsStatusField;
- (int)style;
- (bool)supportsPoseidonCoaching;
- (NSString *)unlockDestination;
- (void)updateStatusText:(NSString *)arg1 subtitle:(NSString *)arg2 animated:(bool)arg3;
- (bool)usesBiometricPresentation;

@optional

- (double)backgroundAlpha;
- (void)noteBottomFaceHasBeenOccluded;
- (void)noteFaceHasBeenOccluded;
- (void)setBackgroundAlpha:(double)arg1;

@end
