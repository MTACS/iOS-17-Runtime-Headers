
@interface MCUIAppSignerUninstallerUtilities : NSObject

+ (void)_asyncUninstallApplicationsForAppsigner:(id)arg1 withUninstaller:(id)arg2 dispatchGroup:(id)arg3;
+ (void)_asyncUninstallProvisioningProfilesForAppSigner:(id)arg1 withUninstaller:(id)arg2 dispatchGroup:(id)arg3;
+ (id)_provisioningProfileUUIDsForAppSigner:(id)arg1;
+ (void)uninstallAppSigner:(id)arg1 withUninstaller:(id)arg2 dispatchGroup:(id)arg3 completion:(id /* block */)arg4;

@end
