
@interface HKPairedDeviceAppInstallationManager : HKWatchAppInstallationManager {
    id  _pairedDeviceRegistry;
}

- (void).cxx_destruct;
- (void)_watchAppInstallStateDidChange:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 forPairedDeviceRegistry:(id)arg2;
- (id)isWatchAppInstalledWithError:(id*)arg1;
- (void)startObserving;
- (void)stopObserving;

@end
