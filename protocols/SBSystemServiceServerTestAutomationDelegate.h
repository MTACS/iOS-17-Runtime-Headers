
@protocol SBSystemServiceServerTestAutomationDelegate <SBSystemServiceServerDelegate>

@required

- (void)systemServiceServer:(SBSystemServiceServer *)arg1 addWidgetsToEachPageForClient:(id <FBSServiceFacilityClientHandle>)arg2;
- (void)systemServiceServer:(SBSystemServiceServer *)arg1 clearAllUserNotificationsForClient:(id <FBSServiceFacilityClientHandle>)arg2;
- (void)systemServiceServer:(SBSystemServiceServer *)arg1 client:(id <FBSServiceFacilityClientHandle>)arg2 addWidgetStackWithIdentifiers:(NSArray *)arg3 toPage:(long long)arg4 withSizing:(long long)arg5;
- (void)systemServiceServer:(SBSystemServiceServer *)arg1 client:(id <FBSServiceFacilityClientHandle>)arg2 addWidgetWithIdentifier:(NSString *)arg3 toPage:(long long)arg4 withSizing:(long long)arg5;
- (void)systemServiceServer:(void *)arg1 client:(void *)arg2 countScenesForBundleIdentifier:(void *)arg3 withCompletion:(void *)arg4; // needs 4 arg types, found 9: SBSystemServiceServer *, <FBSServiceFacilityClientHandle> *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)systemServiceServer:(void *)arg1 client:(void *)arg2 getChamoisPrefersDockHiddenWithCompletion:(void *)arg3; // needs 3 arg types, found 8: SBSystemServiceServer *, <FBSServiceFacilityClientHandle> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)systemServiceServer:(void *)arg1 client:(void *)arg2 getChamoisPrefersStripHiddenWithCompletion:(void *)arg3; // needs 3 arg types, found 8: SBSystemServiceServer *, <FBSServiceFacilityClientHandle> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)systemServiceServer:(void *)arg1 client:(void *)arg2 getDeviceSupportsSystemAperture:(void *)arg3; // needs 3 arg types, found 8: SBSystemServiceServer *, <FBSServiceFacilityClientHandle> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)systemServiceServer:(void *)arg1 client:(void *)arg2 getIsChamoisWindowingUIEnabledWithCompletion:(void *)arg3; // needs 3 arg types, found 8: SBSystemServiceServer *, <FBSServiceFacilityClientHandle> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)systemServiceServer:(SBSystemServiceServer *)arg1 client:(id <FBSServiceFacilityClientHandle>)arg2 loadStashedSwitcherModelFromPath:(NSString *)arg3;
- (void)systemServiceServer:(SBSystemServiceServer *)arg1 client:(id <FBSServiceFacilityClientHandle>)arg2 port:(BSMachPortSendRight *)arg3 acquireAssertionForReachabilityEnabled:(bool)arg4;
- (void)systemServiceServer:(SBSystemServiceServer *)arg1 client:(id <FBSServiceFacilityClientHandle>)arg2 port:(BSMachPortSendRight *)arg3 acquireHUDHiddenAssertionForIdentifier:(NSString *)arg4;
- (void)systemServiceServer:(SBSystemServiceServer *)arg1 client:(id <FBSServiceFacilityClientHandle>)arg2 resetToHomeScreenAnimated:(bool)arg3;
- (void)systemServiceServer:(SBSystemServiceServer *)arg1 client:(id <FBSServiceFacilityClientHandle>)arg2 setAccessoryType:(long long)arg3 attached:(bool)arg4;
- (void)systemServiceServer:(SBSystemServiceServer *)arg1 client:(id <FBSServiceFacilityClientHandle>)arg2 setAlertsEnabled:(bool)arg3;
- (void)systemServiceServer:(SBSystemServiceServer *)arg1 client:(id <FBSServiceFacilityClientHandle>)arg2 setAmbientPresentationState:(long long)arg3;
- (void)systemServiceServer:(SBSystemServiceServer *)arg1 client:(id <FBSServiceFacilityClientHandle>)arg2 setApplicationBundleIdentifier:(NSString *)arg3 blockedForScreenTime:(bool)arg4;
- (void)systemServiceServer:(SBSystemServiceServer *)arg1 client:(id <FBSServiceFacilityClientHandle>)arg2 setChamoisPrefersDockHidden:(bool)arg3;
- (void)systemServiceServer:(SBSystemServiceServer *)arg1 client:(id <FBSServiceFacilityClientHandle>)arg2 setChamoisPrefersStripHidden:(bool)arg3;
- (void)systemServiceServer:(SBSystemServiceServer *)arg1 client:(id <FBSServiceFacilityClientHandle>)arg2 setChamoisWindowingUIEnabled:(bool)arg3;
- (void)systemServiceServer:(SBSystemServiceServer *)arg1 client:(id <FBSServiceFacilityClientHandle>)arg2 setHiddenFeaturesEnabled:(bool)arg3;
- (void)systemServiceServer:(SBSystemServiceServer *)arg1 client:(id <FBSServiceFacilityClientHandle>)arg2 setIdleTimerEnabled:(bool)arg3;
- (void)systemServiceServer:(SBSystemServiceServer *)arg1 client:(id <FBSServiceFacilityClientHandle>)arg2 setMallocStackLoggingEnabled:(bool)arg3;
- (void)systemServiceServer:(SBSystemServiceServer *)arg1 client:(id <FBSServiceFacilityClientHandle>)arg2 setOrientationLockEnabled:(bool)arg3;
- (void)systemServiceServer:(SBSystemServiceServer *)arg1 client:(id <FBSServiceFacilityClientHandle>)arg2 setReachabilityActive:(bool)arg3;
- (void)systemServiceServer:(SBSystemServiceServer *)arg1 client:(id <FBSServiceFacilityClientHandle>)arg2 setTestRunnerRecoveryApplicationBundleIdentifier:(NSString *)arg3;
- (void)systemServiceServer:(SBSystemServiceServer *)arg1 client:(id <FBSServiceFacilityClientHandle>)arg2 stashSwitcherModelToPath:(NSString *)arg3;
- (void)systemServiceServer:(SBSystemServiceServer *)arg1 enterLostModeForClient:(id <FBSServiceFacilityClientHandle>)arg2;
- (void)systemServiceServer:(SBSystemServiceServer *)arg1 exitLostModeForClient:(id <FBSServiceFacilityClientHandle>)arg2;
- (NSArray *)systemServiceServer:(SBSystemServiceServer *)arg1 getSystemApertureStateDumpForClient:(id <FBSServiceFacilityClientHandle>)arg2;
- (NSDictionary *)systemServiceServer:(SBSystemServiceServer *)arg1 getWidgetControllerStateDump:(id <FBSServiceFacilityClientHandle>)arg2;
- (void)systemServiceServer:(SBSystemServiceServer *)arg1 setUserPresenceDetectedSinceWakeForClient:(id <FBSServiceFacilityClientHandle>)arg2;
- (void)systemServiceServer:(SBSystemServiceServer *)arg1 suspendAllDisplaysForClient:(id <FBSServiceFacilityClientHandle>)arg2;

@end
