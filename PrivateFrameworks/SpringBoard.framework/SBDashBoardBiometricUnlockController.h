
@interface SBDashBoardBiometricUnlockController : NSObject <CSExternalEventHandling, SBBiometricUnlockBehavior, SBBiometricUnlockBehaviorConfigurationDelegate, SBBiometricUnlockBehaviorDelegate> {
    <SBBiometricUnlockBehavior> * _biometricUnlockBehavior;
    <SBBiometricUnlockBehaviorConfiguration> * _biometricUnlockBehaviorConfiguration;
    <SBBiometricUnlockBehaviorDelegate> * _biometricUnlockBehaviorDelegate;
    CSCoverSheetViewController * _coverSheetViewController;
}

@property (nonatomic) <SBBiometricUnlockBehaviorDelegate> *biometricUnlockBehaviorDelegate;
@property (nonatomic, readonly, copy) NSString *coverSheetIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long participantState;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_mesaUnlockBehavior;
- (bool)biometricUnlockBehavior:(id)arg1 requestsFeedback:(id)arg2;
- (bool)biometricUnlockBehavior:(id)arg1 requestsUnlock:(id)arg2 withFeedback:(id)arg3;
- (void)biometricUnlockBehaviorConfigurationDidChange:(id)arg1;
- (id)biometricUnlockBehaviorDelegate;
- (void)conformsToCSEventHandling;
- (id)coverSheetIdentifier;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)fillRestToOpenWithDuration:(double)arg1;
- (void)handleBiometricEvent:(unsigned long long)arg1;
- (bool)handleEvent:(id)arg1;
- (bool)hasVisibleContentToReveal;
- (id)initWithCoverSheetViewController:(id)arg1;
- (bool)isLockScreenShowingDefaultContent;
- (bool)isRestToOpenAvailable;
- (int)lockScreenWakeSource;
- (void)noteLockButtonDown;
- (void)noteMenuButtonDown;
- (void)noteMenuButtonUp;
- (long long)participantState;
- (void)resetRestToOpen;
- (void)setAuthenticated:(bool)arg1;
- (void)setBiometricUnlockBehaviorDelegate:(id)arg1;
- (void)startRestToOpenCoachingWithCompletion:(id /* block */)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (bool)wouldHandleButtonEvent:(id)arg1;

@end
