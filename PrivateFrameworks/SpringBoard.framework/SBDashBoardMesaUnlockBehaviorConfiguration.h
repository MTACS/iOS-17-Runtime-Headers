
@interface SBDashBoardMesaUnlockBehaviorConfiguration : NSObject <SBBiometricUnlockBehaviorConfiguration, SBLiftToWakeObserver> {
    SBUIBiometricResource * _biometricResource;
    Class  _currentTriggerClass;
    <SBBiometricUnlockBehaviorConfigurationDelegate> * _delegate;
    SBLiftToWakeController * _liftToWakeController;
    CSLockScreenSettings * _prototypeSettings;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBBiometricUnlockBehaviorConfigurationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_accessibilityOptionsChanged:(id)arg1;
- (Class)_currentUnlockTriggerClass;
- (void)_evaluateTriggerClass;
- (Class)_expectedTriggerClassIncludingAccessibility:(bool)arg1;
- (bool)_isAccessibilityRestingUnlockPreferenceEnabled;
- (id)_liftToWakeController;
- (void)_setLiftToWakeController:(id)arg1;
- (id)_unlockTriggerWithClass:(Class)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithLiftToWakeController:(id)arg1 biometricResource:(id)arg2 lockScreenPrototypeSettings:(id)arg3;
- (void)liftToWakeControllerEnablementDidChange:(id)arg1;
- (id)newBehaviorForCurrentConfiguration;
- (void)setDelegate:(id)arg1;

@end
