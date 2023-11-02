
@protocol PDCApplicationEnvironment <NSObject>

@required

- (NSEnumerator *)allApplications;
- (<PDCApplicationIdentity> *)applicationIdentityForIdentityString:(NSString *)arg1;
- (<PDCApplicationRecord> *)applicationRecordForBundleIdentifier:(NSString *)arg1;
- (<PDCApplicationEnvironmentMonitoringHandle> *)monitorAppEventsWithDelegate:(id <PDCApplicationEnvironmentMonitoring>)arg1 onQueue:(NSObject<OS_dispatch_queue> *)arg2;

@end
