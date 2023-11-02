
@interface DTSpringBoardProcessControlService : DTProcessControlService <DTSpringBoardProcessControlServiceAuthorizedMethods>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)registerCapabilities:(id)arg1;

- (bool)_HIDEvent:(unsigned int)arg1 hold:(bool)arg2;
- (bool)_dismissTodayView;
- (id)_launchSuspendedProcessWithBundleIdentifier:(id)arg1 orDevicePath:(id)arg2 environment:(id)arg3 arguments:(id)arg4 options:(id)arg5 error:(id*)arg6;
- (bool)_triggerSiri;
- (id)launchSuspendedProcessWithDevicePath:(id)arg1 bundleIdentifier:(id)arg2 environment:(id)arg3 arguments:(id)arg4 options:(id)arg5;
- (id)processIdentifierForBundleIdentifier:(id)arg1;
- (void)sendProcessControlEvent:(id)arg1 toPid:(id)arg2;
- (bool)sendProcessControlEvent:(id)arg1 toPid:(id)arg2 error:(id*)arg3;
- (bool)showNotificiationCenterWidget:(id)arg1 withError:(id*)arg2;
- (bool)showSBWidget:(id)arg1 withError:(id*)arg2;
- (bool)simulateNotificationForBundleID:(id)arg1 payload:(id)arg2 withError:(id*)arg3;

@end
