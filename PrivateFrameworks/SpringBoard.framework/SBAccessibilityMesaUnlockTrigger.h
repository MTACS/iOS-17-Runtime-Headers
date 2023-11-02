
@interface SBAccessibilityMesaUnlockTrigger : SBMesaUnlockTrigger <SBMesaUnlockTriggerDelegate> {
    SBMesaUnlockTrigger * _baseTrigger;
    <SBBiometricUnlockBehaviorConfigurationDelegate> * _behaviorConfigurationDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)bioUnlock;
- (void)fingerOff;
- (void)fingerOn;
- (id)initWithUnlockBehaviorConfigurationDelegate:(id)arg1 baseTrigger:(id)arg2;
- (void)menuButtonDown;
- (void)menuButtonUp;
- (void)mesaUnlockTriggerFired:(id)arg1;
- (void)screenOff;
- (void)significantUserInteractionOccurred;

@end
