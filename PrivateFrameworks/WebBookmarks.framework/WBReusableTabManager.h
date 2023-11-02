
@interface WBReusableTabManager : NSObject <NSCacheDelegate, WBTabGroupManagerObserver> {
    NSTimer * _cleanupTimer;
    bool  _pendingCleanup;
    bool  _reusing;
    NSCache * _uuidToTabCache;
}

@property (nonatomic, readonly, copy) NSSet *allGroupsTabsUUIDs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_addTabUUIDsFromGroup:(id)arg1 toSet:(id)arg2;
- (void)_cleanUp;
- (id)_referenceToTabWithUUID:(id)arg1;
- (void)_scheduleCleanup;
- (void)addReusableTab:(id)arg1;
- (id)allGroupsTabsUUIDs;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (void)enumerateReusableTabs:(id /* block */)arg1;
- (id)init;
- (bool)isTabSuspended:(id)arg1;
- (id)reuseTabForUUID:(id)arg1;
- (id)tabGroupManager;
- (void)tabGroupManager:(id)arg1 didRemoveTabGroupWithUUID:(id)arg2;
- (id)windowStates;

@end
