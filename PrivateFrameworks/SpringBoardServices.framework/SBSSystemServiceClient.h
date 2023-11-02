
@interface SBSSystemServiceClient : SBSServiceFacilityClient {
    bool  _buttonEventServiceIsWaitingForServerMessages;
    bool  _chamoisPrefersStripHidden;
}

@property (nonatomic) bool chamoisPrefersDockHidden;
@property (nonatomic) bool chamoisPrefersStripHidden;
@property (getter=isChamoisWindowingUIEnabled, nonatomic) bool chamoisWindowingUIEnabled;
@property (readonly) bool deviceSupportsSystemAperture;
@property (nonatomic) long long passcodePolicy;
@property (readonly, copy) NSArray *systemApertureStateDump;
@property (readonly, copy) NSDictionary *widgetControllerStateDump;

+ (id)serviceFacilityIdentifier;

- (void)_handleButtonEventConsumePressMessage:(id)arg1;
- (id)acquireAssertionForReachabilityEnabled:(bool)arg1;
- (void)acquireAssertionOfType:(long long)arg1 forReason:(id)arg2 withCompletion:(id /* block */)arg3;
- (id)acquireHUDHiddenAssertionForIdentifier:(id)arg1;
- (void)addWidgetStackWithIdentifiers:(id)arg1 toPage:(int)arg2 withSizing:(int)arg3;
- (void)addWidgetWithIdentifier:(id)arg1 toPage:(int)arg2 withSizing:(int)arg3;
- (void)addWidgetsToEachPage;
- (bool)chamoisPrefersDockHidden;
- (bool)chamoisPrefersStripHidden;
- (void)clearAllUserNotifications;
- (void)countScenesForBundleIdentifier:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)deserializedStringArrayForKey:(const char *)arg1 fromPayload:(id)arg2;
- (bool)deviceSupportsSystemAperture;
- (void)disableRemoteStateDumpWithCompletion:(id /* block */)arg1;
- (void)enableRemoteStateDumpWithTimeout:(long long)arg1 completion:(id /* block */)arg2;
- (void)enterLostMode;
- (void)exitLostMode;
- (void)fetchHapticTypeForButtonKind:(long long)arg1 completion:(id /* block */)arg2;
- (void)fetchUnlockCredentialSetWithCompletion:(id /* block */)arg1;
- (void)handleMessage:(id)arg1 withType:(long long)arg2;
- (bool)isChamoisWindowingUIEnabled;
- (void)loadStashedSwitcherModelFromPath:(id)arg1;
- (long long)passcodePolicy;
- (void)requestAppSwitcherAppearanceForHiddenApplicationWithBundleIdentifier:(id)arg1 reacquiringExistingAssertion:(id)arg2 completion:(id /* block */)arg3;
- (void)requestStateDump:(unsigned long long)arg1 withCompletion:(id /* block */)arg2;
- (void)resetToHomeScreenAnimated:(bool)arg1;
- (void)setAccessoryType:(long long)arg1 attached:(bool)arg2;
- (void)setAlertsEnabled:(bool)arg1;
- (void)setAmbientPresentationState:(long long)arg1;
- (void)setApplicationBundleIdentifier:(id)arg1 blockedForScreenTime:(bool)arg2;
- (void)setButtonEventServiceIsWaitingForServerMessages:(bool)arg1;
- (void)setChamoisHideStripsEnabled:(bool)arg1;
- (void)setChamoisPrefersDockHidden:(bool)arg1;
- (void)setChamoisPrefersStripHidden:(bool)arg1;
- (void)setChamoisWindowingUIEnabled:(bool)arg1;
- (void)setEventMask:(unsigned long long)arg1 forButtonKind:(long long)arg2 priority:(long long)arg3;
- (void)setHapticType:(long long)arg1 forButtonKind:(long long)arg2;
- (void)setHiddenFeaturesEnabled:(bool)arg1;
- (void)setIdleTimerEnabled:(bool)arg1;
- (void)setMallocStackLoggingEnabled:(bool)arg1;
- (void)setOrientationLockEnabled:(bool)arg1;
- (void)setPasscodePolicy:(long long)arg1;
- (void)setReachabilityActive:(bool)arg1;
- (void)setRequestsHIDEvents:(bool)arg1 token:(id)arg2 forButtonKind:(long long)arg3;
- (void)setTestRunnerRecoveryApplicationBundleIdentifier:(id)arg1;
- (void)setUserPresenceDetectedSinceWake;
- (void)stashSwitcherModelToPath:(id)arg1;
- (void)suspendAllDisplays;
- (id)systemApertureStateDump;
- (long long)toggleStateForButtonKind:(long long)arg1;
- (id)widgetControllerStateDump;
- (void)writeStateDump:(unsigned long long)arg1 toTextFileAtPath:(id)arg2;

@end
