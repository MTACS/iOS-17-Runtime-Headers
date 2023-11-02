
@interface DTPosixSpawnProcessControlService : DTProcessControlService

+ (int)posixSpawnWithPath:(id)arg1 environment:(id)arg2 arguments:(id)arg3 options:(id)arg4 fileDescriptorHandler:(id /* block */)arg5;
+ (void)registerCapabilities:(id)arg1;

- (int)cleanupPid:(int)arg1;
- (id)launchSuspendedProcessWithDevicePath:(id)arg1 bundleIdentifier:(id)arg2 environment:(id)arg3 arguments:(id)arg4 options:(id)arg5;

@end
