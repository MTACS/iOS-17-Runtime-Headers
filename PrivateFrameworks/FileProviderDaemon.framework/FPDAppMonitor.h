
@interface FPDAppMonitor : NSObject {
    FPAppRegistry * _appRegistry;
    NSDictionary * _defaultProviderByAppBundleID;
    int  _didChangeDefaultProviderToken;
    int  _didChangeProvidersToken;
    bool  _monitoring;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    FPDServer * _server;
}

@property (nonatomic, readonly, copy) FPAppRegistry *appRegistry;
@property (getter=isMonitoring) bool monitoring;
@property (nonatomic, readonly) FPDServer *server;

- (void).cxx_destruct;
- (id)_appMetadataIfMonitoringIsNeeded:(id)arg1;
- (void)_didChangeDefaultSaveLocationInUserDefaults;
- (void)_didChangeListOfProviders;
- (void)_didChangeLocale:(id)arg1;
- (void)_didRegisterApps:(id)arg1;
- (void)_didUnregisterApps:(id)arg1;
- (void)_populateListOfMonitoredApps;
- (int)_registerForNotification:(id)arg1 handler:(id /* block */)arg2;
- (void)_updateDefaultProviderByAppBundleID;
- (id)_updateDefaultProviderDomainID;
- (id)appRegistry;
- (void)dumpStateTo:(id)arg1;
- (id)initWithServer:(id)arg1;
- (bool)isMonitoring;
- (id)listOfPlaceholderApps;
- (id)server;
- (void)setMonitoring:(bool)arg1;
- (void)startMonitoring;
- (void)stopMonitoring;

@end
