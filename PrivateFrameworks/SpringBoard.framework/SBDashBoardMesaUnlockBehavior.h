
@interface SBDashBoardMesaUnlockBehavior : NSObject <SBBiometricUnlockBehavior, SBMesaUnlockTriggerDelegate> {
    <SBBiometricUnlockBehaviorDelegate> * _biometricUnlockBehaviorDelegate;
    long long  _failedMesaUnlockAttempts;
    SBHomeHardwareButton * _homeHardwareButton;
    CSLockScreenMesaSettings * _mesaSettings;
    SBMesaUnlockTrigger * _trigger;
}

@property (nonatomic) <SBBiometricUnlockBehaviorDelegate> *biometricUnlockBehaviorDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_getHomeHardwareButton, setter=_setHomeHardwareButton:, nonatomic, retain) SBHomeHardwareButton *homeHardwareButton;
@property (getter=_mesaSettings, nonatomic, readonly) CSLockScreenMesaSettings *mesaSettings;
@property (readonly) Class superclass;
@property (getter=_trigger, setter=_setTrigger:, nonatomic, retain) SBMesaUnlockTrigger *trigger;

- (void).cxx_destruct;
- (id)_failureSettingsForFailAttempt:(long long)arg1;
- (id)_feedbackForBioUnlockEventThatWasSpontaneous:(bool)arg1;
- (id)_feedbackForFailureSettings:(id)arg1;
- (id)_feedbackForPasscodeEvent;
- (id)_getHomeHardwareButton;
- (void)_handleMesaFailure;
- (id)_homeHardwareButton;
- (id)_mesaSettings;
- (void)_setHomeHardwareButton:(id)arg1;
- (void)_setTrigger:(id)arg1;
- (id)_trigger;
- (id)biometricUnlockBehaviorDelegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)handleBiometricEvent:(unsigned long long)arg1;
- (id)initWithMesaSettings:(id)arg1 andUnlockTrigger:(id)arg2;
- (void)lockButtonDown;
- (void)menuButtonDown;
- (void)menuButtonUp;
- (void)mesaUnlockTriggerFired:(id)arg1;
- (void)screenOff;
- (void)screenOn;
- (void)setAuthenticated:(bool)arg1;
- (void)setBiometricUnlockBehaviorDelegate:(id)arg1;
- (void)significantUserInteractionDidOccur;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
