
@interface SBSystemServiceServer : FBSServiceFacility {
    <SBSystemServiceServerAppSwitcherDelegate> * _appSwitcherDelegate;
    <SBSystemServiceServerBiometricsDelegate> * _biometricsDelegate;
    <SBSystemServiceServerHardwareButtonDelegate> * _hardwareButtonDelegate;
    <SBSystemServiceServerSoftwareUpdateDelegate> * _softwareUpdateDelegate;
    <SBSystemServiceServerStateDumpDelegate> * _stateDumpDelegate;
    <SBSystemServiceServerTestAutomationDelegate> * _testAutomationDelegate;
}

@property (nonatomic) <SBSystemServiceServerAppSwitcherDelegate> *appSwitcherDelegate;
@property (nonatomic) <SBSystemServiceServerBiometricsDelegate> *biometricsDelegate;
@property (nonatomic) <SBSystemServiceServerHardwareButtonDelegate> *hardwareButtonDelegate;
@property (nonatomic) <SBSystemServiceServerSoftwareUpdateDelegate> *softwareUpdateDelegate;
@property (nonatomic) <SBSystemServiceServerStateDumpDelegate> *stateDumpDelegate;
@property (nonatomic) <SBSystemServiceServerTestAutomationDelegate> *testAutomationDelegate;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_handleBiometricsFetchUnlockCredentialSetMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleHardwareButtonAcquireAssertionMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleHardwareButtonGetHapticType:(id)arg1 fromClient:(id)arg2;
- (void)_handleHardwareButtonGetToggleButtonState:(id)arg1 fromClient:(id)arg2;
- (void)_handleHardwareButtonSetHapticType:(id)arg1 fromClient:(id)arg2;
- (void)_handleHardwareButtonSetPressEventMask:(id)arg1 fromClient:(id)arg2;
- (void)_handleHardwareButtonSetRequestsHIDEvents:(id)arg1 fromClient:(id)arg2;
- (void)_handleLoadStashedSwitcherModelFromPath:(id)arg1 fromClient:(id)arg2;
- (void)_handleRequestAppSwitcherAppearanceForHiddenApp:(id)arg1 fromClient:(id)arg2;
- (void)_handleSoftwareUpdateGetPasscodePolicy:(id)arg1 fromClient:(id)arg2;
- (void)_handleSoftwareUpdateSetPasscodePolicy:(id)arg1 fromClient:(id)arg2;
- (void)_handleStashSwitcherModelToPath:(id)arg1 fromClient:(id)arg2;
- (void)_handleStateDumpServiceClientMessageTypeDisableRemoteStateDump:(id)arg1 fromClient:(id)arg2;
- (void)_handleStateDumpServiceClientMessageTypeEnableRemoteStateDump:(id)arg1 fromClient:(id)arg2;
- (void)_handleStateDumpServiceClientMessageTypeStateDump:(id)arg1 fromClient:(id)arg2;
- (void)_handleStateDumpServiceClientMessageTypeStateDumpToFile:(id)arg1 fromClient:(id)arg2;
- (void)_handleTestAutomationAddSpecificWidgetStackToPageWithSize:(id)arg1 fromClient:(id)arg2;
- (void)_handleTestAutomationAddSpecificWidgetToPageWithSize:(id)arg1 fromClient:(id)arg2;
- (void)_handleTestAutomationAddWidgetsToEachPage:(id)arg1 fromClient:(id)arg2;
- (void)_handleTestAutomationBlockApplicationForScreenTime:(id)arg1 fromClient:(id)arg2;
- (void)_handleTestAutomationClearAllUserNotifications:(id)arg1 fromClient:(id)arg2;
- (void)_handleTestAutomationEnterLostMode:(id)arg1 fromClient:(id)arg2;
- (void)_handleTestAutomationExitLostMode:(id)arg1 fromClient:(id)arg2;
- (void)_handleTestAutomationGetChamoisPrefersDockHidden:(id)arg1 fromClient:(id)arg2;
- (void)_handleTestAutomationGetChamoisPrefersStripHidden:(id)arg1 fromClient:(id)arg2;
- (void)_handleTestAutomationGetChamoisWindowingUIEnabled:(id)arg1 fromClient:(id)arg2;
- (void)_handleTestAutomationGetDeviceSupportsSystemAperture:(id)arg1 fromClient:(id)arg2;
- (void)_handleTestAutomationGetScencesForBundleIdentifier:(id)arg1 fromClient:(id)arg2;
- (void)_handleTestAutomationGetSystemApertureStateDump:(id)arg1 fromClient:(id)arg2;
- (void)_handleTestAutomationGetWidgetControllerStateDump:(id)arg1 fromClient:(id)arg2;
- (void)_handleTestAutomationRequestHUDHiddenAssertion:(id)arg1 fromClient:(id)arg2;
- (void)_handleTestAutomationRequestReachabilityEnabledAssertion:(id)arg1 fromClient:(id)arg2;
- (void)_handleTestAutomationResetToHomeScreen:(id)arg1 fromClient:(id)arg2;
- (void)_handleTestAutomationSetAccessoryAttachedState:(id)arg1 fromClient:(id)arg2;
- (void)_handleTestAutomationSetAlertState:(id)arg1 fromClient:(id)arg2;
- (void)_handleTestAutomationSetAmbientPresentationState:(id)arg1 fromClient:(id)arg2;
- (void)_handleTestAutomationSetChamoisPrefersDockHidden:(id)arg1 fromClient:(id)arg2;
- (void)_handleTestAutomationSetChamoisPrefersStripHidden:(id)arg1 fromClient:(id)arg2;
- (void)_handleTestAutomationSetChamoisWindowingUIEnabled:(id)arg1 fromClient:(id)arg2;
- (void)_handleTestAutomationSetHiddenFeatureState:(id)arg1 fromClient:(id)arg2;
- (void)_handleTestAutomationSetIdleTimerState:(id)arg1 fromClient:(id)arg2;
- (void)_handleTestAutomationSetMallocStackLoggingState:(id)arg1 fromClient:(id)arg2;
- (void)_handleTestAutomationSetOrientationLockState:(id)arg1 fromClient:(id)arg2;
- (void)_handleTestAutomationSetReachabilityActiveState:(id)arg1 fromClient:(id)arg2;
- (void)_handleTestAutomationSetTestRunnerRecoveryApplicationBundleIdentifier:(id)arg1 fromClient:(id)arg2;
- (void)_handleTestAutomationSetUserPresenceDetectedSinceWake:(id)arg1 fromClient:(id)arg2;
- (void)_handleTestAutomationSuspendAllDisplays:(id)arg1 fromClient:(id)arg2;
- (id)_init;
- (id)appSwitcherDelegate;
- (id)biometricsDelegate;
- (void)dealloc;
- (id)hardwareButtonDelegate;
- (void)noteClientDidDisconnect:(id)arg1;
- (void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3;
- (void)setAppSwitcherDelegate:(id)arg1;
- (void)setBiometricsDelegate:(id)arg1;
- (void)setHardwareButtonDelegate:(id)arg1;
- (void)setSoftwareUpdateDelegate:(id)arg1;
- (void)setStateDumpDelegate:(id)arg1;
- (void)setTestAutomationDelegate:(id)arg1;
- (id)softwareUpdateDelegate;
- (id)stateDumpDelegate;
- (id)testAutomationDelegate;

@end
