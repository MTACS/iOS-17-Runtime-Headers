
@interface ICLWorkspace : NSObject

+ (id)_connectionToInstallationDaemonWithError:(id*)arg1;
+ (id)defaultWorkspace;

- (id)bundleIDsForContainerizedContentWithError:(id*)arg1;
- (id)bundleRecordsForLaunchServicesWithWrapperURL:(id)arg1 forBundleIdentifier:(id)arg2 withError:(id*)arg3;
- (id)bundleRecordsWithFrameworkURL:(id)arg1 options:(id)arg2 withError:(id*)arg3;
- (id)containerizedAppBundleRecordsForIdentity:(id)arg1 inDomain:(unsigned long long)arg2 options:(id)arg3 withError:(id*)arg4;
- (id)diskUsageForLaunchServicesWithBundleIDs:(id)arg1 options:(id)arg2 withError:(id*)arg3;
- (bool)enumerateBuiltInSystemContentWithBlock:(id /* block */)arg1 error:(id*)arg2;
- (bool)enumerateCryptexContentWithBlock:(id /* block */)arg1 error:(id*)arg2;
- (id)infoForLaunchServicesWithWrapperURL:(id)arg1 forBundleIdentifier:(id)arg2 withError:(id*)arg3;
- (id)init;
- (void)triggerRegistrationForContainerizedContentWithOptions:(id)arg1 completion:(id /* block */)arg2;
- (bool)triggerRegistrationForContainerizedContentWithOptions:(id)arg1 withError:(id*)arg2;
- (void)triggerRegistrationForDiskImageContentWithOptions:(id)arg1 completion:(id /* block */)arg2;

@end
