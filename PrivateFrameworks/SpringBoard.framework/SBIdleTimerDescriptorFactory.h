
@interface SBIdleTimerDescriptorFactory : NSObject {
    SBAlertItemsController * _alertItemsController;
    SBBacklightController * _override_backlightController;
    SBUIBiometricResource * _override_biometricResource;
    SBConferenceManager * _override_conferenceManager;
    SBIdleTimerSettings * _override_idleTimerPrototypeSettings;
    SBLockScreenManager * _override_lockScreenManager;
    SBMainWorkspace * _override_mainWorkspace;
    SBPrototypeController * _override_prototypeController;
    SBTelephonyManager * _override_telephonyManager;
    int  _previousShouldUseAttentionSensorAccess;
    SpringBoard * _springBoard;
    SBIdleTimerGlobalStateMonitor * _stateMonitor;
}

@property (getter=_alertItemsController, setter=_setAlertItemsController:, nonatomic, retain) SBAlertItemsController *alertItemsController;
@property (getter=_backlightController, setter=_setBacklightController:, nonatomic, retain) SBBacklightController *backlightController;
@property (getter=_biometricResource, setter=_setBiometricResource:, nonatomic, retain) SBUIBiometricResource *biometricResource;
@property (getter=_conferenceManager, setter=_setConferenceManager:, nonatomic, retain) SBConferenceManager *conferenceManager;
@property (getter=_idleTimerPrototypeSettings, setter=_setIdleTimerPrototypeSettings:, nonatomic, retain) SBIdleTimerSettings *idleTimerPrototypeSettings;
@property (getter=_lockScreenManager, setter=_setLockScreenManager:, nonatomic, retain) SBLockScreenManager *lockScreenManager;
@property (getter=_mainWorkspace, setter=_setMainWorkspace:, nonatomic, retain) SBMainWorkspace *mainWorkspace;
@property (getter=_prototypeController, setter=_setPrototypeController:, nonatomic, retain) SBPrototypeController *prototypeController;
@property (getter=_springBoard, setter=_setSpringBoard:, nonatomic, retain) SpringBoard *springBoard;
@property (getter=_telephonyManager, setter=_setTelephonyManager:, nonatomic, retain) SBTelephonyManager *telephonyManager;

+ (id)disabledIdleTimerDescriptor;

- (void).cxx_destruct;
- (id)_alertItemsController;
- (id)_backlightController;
- (id)_biometricResource;
- (id)_conferenceManager;
- (id)_idleTimerPrototypeSettings;
- (bool)_isIdleDurationForever:(double)arg1;
- (id)_lockScreenManager;
- (id)_mainWorkspace;
- (id)_prototypeController;
- (void)_setAlertItemsController:(id)arg1;
- (void)_setBacklightController:(id)arg1;
- (void)_setBiometricResource:(id)arg1;
- (void)_setConferenceManager:(id)arg1;
- (void)_setIdleTimerPrototypeSettings:(id)arg1;
- (void)_setLockScreenManager:(id)arg1;
- (void)_setMainWorkspace:(id)arg1;
- (void)_setPrototypeController:(id)arg1;
- (void)_setSpringBoard:(id)arg1;
- (void)_setTelephonyManager:(id)arg1;
- (bool)_shouldUseAttentionSensor;
- (id)_springBoard;
- (id)_telephonyManager;
- (void)_updateIdleTimerSettingsWarnInterval:(id)arg1 totalInterval:(double)arg2;
- (id)idleTimerDescriptorForBehavior:(id)arg1;
- (id)initWithGlobalStateMonitor:(id)arg1;
- (bool)sanitizeDescriptorForLockscreenDefaults:(id)arg1;
- (bool)sanitizeSettingsAfterInitialSetup:(id)arg1;
- (bool)sanitizeSettingsAfterSetup:(id)arg1 duration:(long long)arg2;
- (bool)sanitizeTotalDuration:(id)arg1;
- (bool)sanitizeWarnInterval:(id)arg1;
- (bool)updateIdleTimerSettingsForActiveClientConfiguration:(id)arg1;
- (bool)updateIdleTimerSettingsForAutoLockTimeout:(id)arg1;
- (bool)updateIdleTimerSettingsForBatterySaverMode:(id)arg1;
- (bool)updateIdleTimerSettingsForDefaultWarnInterval:(id)arg1;
- (bool)updateIdleTimerSettingsForDuration:(long long)arg1 descriptor:(id)arg2;
- (bool)updateIdleTimerSettingsForFaceDown:(id)arg1;
- (bool)updateIdleTimerSettingsForPowerDefaults:(id)arg1;
- (bool)updateIdleTimerSettingsForPrototypeSettings:(id)arg1;
- (bool)updateIdleTimerSettingsForSecurityDefaults:(id)arg1;
- (bool)updateIdleTimerSettingsForTelephony:(id)arg1;
- (bool)updateIdleTimerSettingsForThermalBlockedMode:(id)arg1;
- (bool)updateIdleTimerSettingsForUnlockedWithMesa:(id)arg1;
- (bool)updateIdleTimerSettingsForWarnInterval:(id)arg1;
- (bool)updateIdleTimerSettingsWithCustomTimeouts:(id)arg1 fromBehavior:(id)arg2;

@end
