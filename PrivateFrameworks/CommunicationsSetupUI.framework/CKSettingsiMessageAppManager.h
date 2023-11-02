
@interface CKSettingsiMessageAppManager : NSObject {
    NSArray * _alliMessageApps;
    NSArray * _deletableAppsWithiMessageApp;
    NSArray * _deletableiMessageOnlyApps;
    NSArray * _highMemoryPayloadProviderExtensions;
    id  _highMemoryPayloadProviderExtensionsMonitoringContext;
    NSArray * _payloadProviderExtensions;
    id  _payloadProviderExtensionsMonitoringContext;
}

@property (nonatomic, readonly) NSArray *alliMessageApps;
@property (nonatomic, readonly) NSArray *deletableAppsWithiMessageApp;
@property (nonatomic, readonly) NSArray *deletableiMessageOnlyApps;
@property (readonly) bool haveDeletableApps;
@property (nonatomic, readonly) NSArray *highMemoryPayloadProviderExtensions;
@property (nonatomic, retain) id highMemoryPayloadProviderExtensionsMonitoringContext;
@property (nonatomic, readonly) NSArray *payloadProviderExtensions;
@property (nonatomic, retain) id payloadProviderExtensionsMonitoringContext;

- (void).cxx_destruct;
- (id)_beginMonitoringExtensionPoint:(id)arg1;
- (void)_clearCacheForDerivableiMessageAppLists;
- (void)_endMonitoringExtensionInstallation;
- (id)_loadiMessageAppsSyncronouslyForExtensionPoint:(id)arg1;
- (void)_notifyForInstalledAppChange;
- (id)alliMessageApps;
- (id)appWithBundleID:(id)arg1;
- (void)dealloc;
- (id)deletableAppsWithiMessageApp;
- (id)deletableiMessageOnlyApps;
- (id)extensionAttributesForExtensionPoint:(id)arg1;
- (bool)haveDeletableApps;
- (id)highMemoryPayloadProviderExtensions;
- (id)highMemoryPayloadProviderExtensionsMonitoringContext;
- (id)init;
- (id)payloadProviderExtensions;
- (id)payloadProviderExtensionsMonitoringContext;
- (void)setHighMemoryPayloadProviderExtensionsMonitoringContext:(id)arg1;
- (void)setPayloadProviderExtensionsMonitoringContext:(id)arg1;

@end
