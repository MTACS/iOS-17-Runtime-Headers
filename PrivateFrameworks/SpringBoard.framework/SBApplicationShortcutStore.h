
@interface SBApplicationShortcutStore : NSObject {
    NSString * _bundleIdentifier;
    NSArray * _cachedApplicationShortcutItems;
    NSArray * _cachedLanguages;
    unsigned long long  _cachedVersion;
    FBSApplicationDataStore * _dataStore;
    bool  _isDirty;
    bool  _isLoaded;
    NSObject<OS_dispatch_queue> * _saveQueue;
    NSLock * _stateLock;
}

@property (nonatomic, readonly, copy) NSArray *applicationShortcutItems;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly, copy) NSArray *languages;
@property (nonatomic, readonly) unsigned long long version;

+ (void)clearStore;

- (void).cxx_destruct;
- (id)_applicationShortcutItemsFromPlistArray:(id)arg1;
- (id)_plistArrayFromApplicationShortcutItems:(id)arg1;
- (void)_saveQueue_save;
- (void)_stateLock_loadFromStoreIfNeeded;
- (void)_stateLock_markDirty;
- (bool)_stateLock_truncateIfNeeded:(id)arg1;
- (id)applicationShortcutItems;
- (id)bundleIdentifier;
- (id)description;
- (id)initWithBundleIdentifier:(id)arg1;
- (void)invalidateCache;
- (id)languages;
- (void)saveSynchronously;
- (void)setApplicationShortcutItems:(id)arg1 withLanguages:(id)arg2 version:(unsigned long long)arg3;
- (void)truncateIfNecessary;
- (unsigned long long)version;

@end
