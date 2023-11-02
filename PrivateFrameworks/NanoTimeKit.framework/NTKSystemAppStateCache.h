
@interface NTKSystemAppStateCache : NSObject <LSApplicationWorkspaceObserverProtocol, NTKSystemAppStateCache> {
    NSMutableSet * _cachedAppStateBundleId;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSMutableSet * _removedSystemApps;
    NSMutableSet * _restrictedSystemApps;
    NSString * _tinCanBundleID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_deviceDidPair;
- (void)_queue_applicationsDidChange:(id)arg1 state:(unsigned long long)arg2;
- (id)_queue_cachedAppStateBundleId;
- (void)_queue_deviceDidPair;
- (void)_queue_initializeRemovedSystemApps;
- (void)_queue_initializeRestrictedSystemApps;
- (id)_queue_removedSystemApps;
- (id)_queue_restrictedSystemApps;
- (void)_queue_tinCanSettingsChanged;
- (void)_queue_verifyStateForAppBundleId:(id)arg1;
- (void)_tinCanSettingsChanged;
- (void)applicationInstallsDidStart:(id)arg1;
- (void)applicationStateDidChange:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)dealloc;
- (id)init;
- (bool)isRemovedSystemApp:(id)arg1;
- (bool)isRestrictedSystemApp:(id)arg1;
- (void)prewarmGizmoDaemon;
- (id)removedSystemApps;
- (id)restrictedSystemApps;

@end
