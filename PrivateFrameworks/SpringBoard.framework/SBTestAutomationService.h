
@interface SBTestAutomationService : NSObject <SBSystemServiceServerTestAutomationDelegate> {
    NSMutableDictionary * _accessoriesByType;
    FBServiceClientAuthenticator * _clientAuthenticator;
    <BSInvalidatable> * _idleTimerAssertion;
    NSHashTable * _inFlightAnimationTransactions;
    NSHashTable * _reachabilityEnabledAssertions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_authenticateClient:(id)arg1;
- (unsigned long long)_iconGridSizeClassFromClientArgument:(long long)arg1;
- (id)init;
- (void)systemServiceServer:(id)arg1 addWidgetsToEachPageForClient:(id)arg2;
- (void)systemServiceServer:(id)arg1 clearAllUserNotificationsForClient:(id)arg2;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 addWidgetStackWithIdentifiers:(id)arg3 toPage:(long long)arg4 withSizing:(long long)arg5;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 addWidgetWithIdentifier:(id)arg3 toPage:(long long)arg4 withSizing:(long long)arg5;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 countScenesForBundleIdentifier:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 getChamoisPrefersDockHiddenWithCompletion:(id /* block */)arg3;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 getChamoisPrefersStripHiddenWithCompletion:(id /* block */)arg3;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 getDeviceSupportsSystemAperture:(id /* block */)arg3;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 getIsChamoisWindowingUIEnabledWithCompletion:(id /* block */)arg3;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 loadStashedSwitcherModelFromPath:(id)arg3;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 port:(id)arg3 acquireAssertionForReachabilityEnabled:(bool)arg4;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 port:(id)arg3 acquireHUDHiddenAssertionForIdentifier:(id)arg4;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 resetToHomeScreenAnimated:(bool)arg3;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 setAccessoryType:(long long)arg3 attached:(bool)arg4;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 setAlertsEnabled:(bool)arg3;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 setAmbientPresentationState:(long long)arg3;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 setApplicationBundleIdentifier:(id)arg3 blockedForScreenTime:(bool)arg4;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 setChamoisPrefersDockHidden:(bool)arg3;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 setChamoisPrefersStripHidden:(bool)arg3;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 setChamoisWindowingUIEnabled:(bool)arg3;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 setHiddenFeaturesEnabled:(bool)arg3;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 setIdleTimerEnabled:(bool)arg3;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 setMallocStackLoggingEnabled:(bool)arg3;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 setOrientationLockEnabled:(bool)arg3;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 setReachabilityActive:(bool)arg3;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 setTestRunnerRecoveryApplicationBundleIdentifier:(id)arg3;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 stashSwitcherModelToPath:(id)arg3;
- (void)systemServiceServer:(id)arg1 enterLostModeForClient:(id)arg2;
- (void)systemServiceServer:(id)arg1 exitLostModeForClient:(id)arg2;
- (id)systemServiceServer:(id)arg1 getSystemApertureStateDumpForClient:(id)arg2;
- (id)systemServiceServer:(id)arg1 getWidgetControllerStateDump:(id)arg2;
- (void)systemServiceServer:(id)arg1 setUserPresenceDetectedSinceWakeForClient:(id)arg2;
- (void)systemServiceServer:(id)arg1 suspendAllDisplaysForClient:(id)arg2;

@end
