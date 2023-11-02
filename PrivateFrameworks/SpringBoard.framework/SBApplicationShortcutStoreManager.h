
@interface SBApplicationShortcutStoreManager : NSObject {
    NSLock * _stateLock;
    NSMutableDictionary * _storesKeyedByBundleIdentifier;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_installedAppsDidChange:(id)arg1;
- (id)_stateLock_storeForBundleIdentifier:(id)arg1;
- (id)applicationShortcutItemsForBundleIdentifier:(id)arg1 withVersion:(unsigned long long)arg2;
- (void)dealloc;
- (id)init;
- (void)invalidateCache;
- (void)saveSynchronously;
- (void)setApplicationShortcutItems:(id)arg1 forBundleIdentifier:(id)arg2 withVersion:(unsigned long long)arg3;

@end
