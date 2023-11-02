
@interface SBDashBoardPearlUnlockBehavior : NSObject <SBBiometricUnlockBehavior, SBMesaUnlockTriggerDelegate> {
    <SBBiometricUnlockBehaviorDelegate> * _biometricUnlockBehaviorDelegate;
    CSLockScreenPearlSettings * _pearlSettings;
    SBMesaUnlockTrigger * _trigger;
}

@property (nonatomic) <SBBiometricUnlockBehaviorDelegate> *biometricUnlockBehaviorDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (getter=_trigger, setter=_setTrigger:, nonatomic, retain) SBMesaUnlockTrigger *trigger;

- (void).cxx_destruct;
- (id)_feedbackForBioUnlockEventThatWasSpontaneous:(bool)arg1;
- (id)_feedbackForFailureSettings:(id)arg1;
- (id)_feedbackForPasscodeEvent;
- (void)_handlePearlFailure;
- (void)_setTrigger:(id)arg1;
- (id)_trigger;
- (id)biometricUnlockBehaviorDelegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)handleBiometricEvent:(unsigned long long)arg1;
- (id)initWithPearlSettings:(id)arg1 andUnlockTrigger:(id)arg2;
- (void)mesaUnlockTriggerFired:(id)arg1;
- (void)setBiometricUnlockBehaviorDelegate:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
