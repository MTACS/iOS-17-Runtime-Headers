
@interface ATXIntentMetadataCacheInvalidationMonitor : NSObject {
    ATXInternalAppRegistrationNotification * _appRegistrationListener;
    _ATXInternalUninstallNotification * _appUninstallListener;
    <ATXIntentMetadataCacheInvalidationDelegate> * _delegate;
    NSUserDefaults * _userDefaults;
}

- (void).cxx_destruct;
- (void)_checkForOSUpdate;
- (id)_getCurrentBuild;
- (void)_listenForAppRegistrationAndUninstall;
- (void)_notifyDelegateApplicationsDidUninstall:(id)arg1;
- (void)_notifyDelegateApplicationsDidUpdate:(id)arg1;
- (void)_notifyDelegateSystemDidUpdate;
- (void)setDelegateAndStartMonitoring:(id)arg1;
- (void)setDelegateAndStartMonitoring:(id)arg1 userDefaults:(id)arg2;

@end
