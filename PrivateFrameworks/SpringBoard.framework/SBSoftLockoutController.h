
@interface SBSoftLockoutController : NSObject <CSCoverSheetViewControllerObserver, CSExternalLockProviding> {
    <SBSoftLockoutControllerDelegate> * _delegate;
    unsigned long long  _desiredBiometricLockoutState;
    SBLockScreenManager * _lockScreenManager;
    <BSInvalidatable> * _passcodeRequiredAssertion;
}

@property (nonatomic, readonly, copy) NSString *coverSheetIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBSoftLockoutControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isLocked, nonatomic, readonly) bool locked;
@property (nonatomic, readonly) long long participantState;
@property (nonatomic, readonly) bool showPasscode;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_clearPasscodeRequiredAssertion;
- (void)_createPasscodeRequiredAssertion;
- (id)coverSheetIdentifier;
- (void)coverSheetViewControllerDidDismissPasscodeLockView:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithBiometricLockoutState:(unsigned long long)arg1;
- (id)initWithBiometricLockoutState:(unsigned long long)arg1 lockScreenManager:(id)arg2;
- (bool)isLocked;
- (long long)participantState;
- (void)reload;
- (void)setDelegate:(id)arg1;
- (bool)showPasscode;
- (bool)unlockFromSource:(int)arg1;

@end
