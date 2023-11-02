
@interface DNDSAppInfoCache : NSObject <DNDSKeybagStateObserver, LSApplicationWorkspaceObserverProtocol> {
    NSMutableDictionary * _appInfoByBundleIdentifier;
    NSMutableSet * _inflightBundleIdentifiers;
    <DNDSKeybagStateProviding> * _keybag;
    NSSet * _monitoredBundleIdentifiers;
    NSObject<OS_dispatch_queue> * _queue;
    NSSet * _relevantBundleIdentifiers;
    NSURLSession * _urlSession;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_fallbackAppInfoByBundleIdentifier;

- (void).cxx_destruct;
- (id)_cacheURL;
- (id)_fallbackAppInfoForBundleIdentifier:(id)arg1;
- (void)_fetchAppStoreInfoForBundleIdentifiers:(id)arg1 timeoutInterval:(double)arg2 limit:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (void)_fetchIconForAppInfo:(id)arg1 timeoutInterval:(double)arg2 completionHandler:(id /* block */)arg3;
- (void)_fetchIconsForAppInfo:(id)arg1 timeoutInterval:(double)arg2 completionHandler:(id /* block */)arg3;
- (id)_installedBundleIdentifiers;
- (id)_parseAppStoreResponseForBundleIdentifiers:(id)arg1 response:(id)arg2 data:(id)arg3 error:(id)arg4;
- (id)_queue_bundleIdentifiersWithMissingInfo;
- (void)_queue_fetchMissingAppInfo;
- (void)_queue_monitorBundleIdentifiers:(id)arg1;
- (void)_queue_read;
- (void)_queue_removeCachedDataForAppInfo:(id)arg1;
- (void)_queue_removeUnusedAppInfo;
- (void)_queue_write;
- (id)_sanitizeAppInfo:(id)arg1;
- (id)appInfoForBundleIdentifier:(id)arg1;
- (id)appInfoForBundleIdentifiers:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (id)initWithKeybag:(id)arg1;
- (void)keybagDidUnlockForTheFirstTime:(id)arg1;
- (void)monitorApplicationIdentifiers:(id)arg1;

@end
