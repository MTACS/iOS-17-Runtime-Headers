
@interface SBSTestAutomationService : SBSAbstractSystemService

@property (nonatomic) bool chamoisPrefersDockHidden;
@property (nonatomic) bool chamoisPrefersStripHidden;
@property (getter=isChamoisWindowingUIEnabled, nonatomic) bool chamoisWindowingUIEnabled;
@property (readonly) bool deviceSupportsSystemAperture;
@property (readonly, copy) NSArray *systemApertureStateDump;
@property (readonly, copy) NSDictionary *widgetControllerStateDump;

- (id)acquireAssertionForReachabilityEnabled:(bool)arg1;
- (id)acquireHUDHiddenAssertionForIdentifier:(id)arg1;
- (void)addWidgetStackWithIdentifiers:(id)arg1 toPage:(int)arg2 withSizing:(int)arg3;
- (void)addWidgetWithIdentifier:(id)arg1 toPage:(int)arg2 withSizing:(int)arg3;
- (void)addWidgetsToEachPage;
- (bool)chamoisPrefersDockHidden;
- (bool)chamoisPrefersStripHidden;
- (void)clearAllUserNotifications;
- (void)countScenesForBundleIdentifier:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)deviceSupportsSystemAperture;
- (void)enterLostMode;
- (void)exitLostMode;
- (bool)isChamoisWindowingUIEnabled;
- (void)loadStashedSwitcherModelFromPath:(id)arg1;
- (void)resetToHomeScreenAnimated:(bool)arg1;
- (void)setAccessoryType:(long long)arg1 attached:(bool)arg2;
- (void)setAlertsEnabled:(bool)arg1;
- (void)setAmbientPresentationState:(long long)arg1;
- (void)setApplicationBundleIdentifier:(id)arg1 blockedForScreenTime:(bool)arg2;
- (void)setChamoisPrefersDockHidden:(bool)arg1;
- (void)setChamoisPrefersStripHidden:(bool)arg1;
- (void)setChamoisWindowingUIEnabled:(bool)arg1;
- (void)setHiddenFeaturesEnabled:(bool)arg1;
- (void)setIdleTimerEnabled:(bool)arg1;
- (void)setMallocStackLoggingEnabled:(bool)arg1;
- (void)setOrientationLockEnabled:(bool)arg1;
- (void)setReachabilityActive:(bool)arg1;
- (void)setTestRunnerRecoveryApplicationBundleIdentifier:(id)arg1;
- (void)setUserPresenceDetectedSinceWake;
- (void)stashSwitcherModelToPath:(id)arg1;
- (void)suspendAllDisplays;
- (id)systemApertureStateDump;
- (id)widgetControllerStateDump;

@end
