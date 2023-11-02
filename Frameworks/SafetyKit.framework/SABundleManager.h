
@interface SABundleManager : NSObject {
    <SAApplicationLauncher> * _applicationLauncher;
    NSObject<OS_tcc_message_options> * _options;
    NSObject<OS_tcc_server> * _server;
    NSObject<OS_tcc_service> * _service;
}

+ (id)approvedBundleIdsForService:(struct __CFString { }*)arg1;
+ (id)bundleURLForAuditToken:(struct { unsigned int x1[8]; })arg1;
+ (id)bundleURLForCurrentConnection;
+ (id)crashDetectionManager;
+ (void)getRemoteApplicationNameWithBundleId:(id)arg1 withCompletion:(id /* block */)arg2;
+ (id)locationBundle;
+ (id)reasonToAttributeName:(long long)arg1;
+ (id)remoteApplicationWithBundleId:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)approvedApps;
- (id)initWithServiceName:(struct __CFString { }*)arg1;
- (void)openApplicationInBackgroundWithBundleId:(id)arg1 withReason:(long long)arg2 completion:(id /* block */)arg3;
- (void)openApplicationInForegroundWithBundleId:(id)arg1 withReason:(long long)arg2 completion:(id /* block */)arg3;
- (id)pairedDeviceBundleIdForId:(id)arg1;
- (void)wakeApprovedAppsWithReason:(long long)arg1 completion:(id /* block */)arg2;

@end
