
@interface HKRPWatchAppInstaller : NSObject {
    NRDevice * _device;
    <HKRPWatchInstallAppsProviding> * _installAppsProviding;
    HKWatchAppAvailability * _watchAppAvailability;
}

- (void).cxx_destruct;
- (void)checkIfAppCanBeInstalledWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithDevice:(id)arg1 watchAppAvailability:(id)arg2 installAppsProviding:(id)arg3;
- (void)installAppWithCompletion:(id /* block */)arg1;

@end
