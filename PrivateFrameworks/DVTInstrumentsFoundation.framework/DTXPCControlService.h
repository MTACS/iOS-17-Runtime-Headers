
@interface DTXPCControlService : DTProcessControlService <DTXPCControlServiceRequests>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)registerCapabilities:(id)arg1;

- (id)initWithChannel:(id)arg1;
- (id)launchSuspendedProcessWithDevicePath:(id)arg1 bundleIdentifier:(id)arg2 environment:(id)arg3 arguments:(id)arg4 options:(id)arg5;
- (void)messageReceived:(id)arg1;
- (void)observeServicesWithIdentifier:(id)arg1 requestingProcess:(int)arg2 environment:(id)arg3 arguments:(id)arg4 options:(id)arg5;
- (void)requestDebugLaunchOfDaemonWithSpecifier:(id)arg1 programPath:(id)arg2 environment:(id)arg3 arguments:(id)arg4 options:(id)arg5;
- (void)stopObservationsForIdentifier:(id)arg1 requestingProcess:(int)arg2;

@end
