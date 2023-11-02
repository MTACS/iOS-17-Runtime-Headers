
@interface DSAppSharing : NSObject {
    HKAuthorizationStore * _authorizationStore;
    HKHealthStore * _healthKitStore;
    <DSTCCStore> * _tccStore;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) HKAuthorizationStore *authorizationStore;
@property (nonatomic, retain) HKHealthStore *healthKitStore;
@property (nonatomic, retain) <DSTCCStore> *tccStore;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)addApp:(id)arg1 toMap:(id)arg2 withLocationAuthorization:(unsigned long long)arg3;
- (void)addApp:(id)arg1 toMap:(id)arg2 withService:(id)arg3;
- (void)addHealthPermissionsToAppMap:(id)arg1 handler:(id /* block */)arg2;
- (void)addLocalNetworkPermissionsToAppMap:(id)arg1 handler:(id /* block */)arg2;
- (void)addLocationPermissions:(id)arg1;
- (void)addTCCPermissionsToAppMap:(id)arg1 handler:(id /* block */)arg2;
- (void)approvedBundleIdForKappa:(id)arg1 handler:(id /* block */)arg2;
- (id)authorizationStore;
- (void)collectAppsWithAccessToService:(id)arg1 appMap:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)collectPermissionsForApps:(id)arg1 queue:(id)arg2 handler:(id /* block */)arg3;
- (id)deleteApp:(id)arg1 forTest:(bool)arg2;
- (id)healthKitStore;
- (id)initWithTCCStore:(id)arg1;
- (id)newDictionaryWithApps:(id)arg1;
- (id)removeAppsWithNoPermissions:(id)arg1;
- (void)resetBackgroundAppRefresh:(id)arg1 queue:(id)arg2 handler:(id /* block */)arg3;
- (void)resetHealthPermissionsForApp:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)resetPermission:(id)arg1 forApp:(id)arg2 handler:(id /* block */)arg3;
- (void)resetPermission:(id)arg1 forApps:(id)arg2 handler:(id /* block */)arg3;
- (void)resetPermissions:(id)arg1 forApps:(id)arg2 queue:(id)arg3 handler:(id /* block */)arg4;
- (void)resetShortcutsAutomationTimer:(id)arg1 handler:(id /* block */)arg2;
- (void)setAuthorizationStore:(id)arg1;
- (void)setHealthKitStore:(id)arg1;
- (void)setTccStore:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)tccStore;
- (id)workQueue;

@end
