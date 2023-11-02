
@interface PinnedTabsManager : NSObject {
    NSCountedSet * _activeProfileIdentifiers;
    WBCollectionConfiguration * _collectionConfiguration;
    NSHashTable * _observers;
    NSMutableSet * _pendingUpdatedProfileIdentifiers;
    NSMutableArray * _pinnedTabs;
    NSMutableDictionary * _pinnedTabsByProfileIdentifier;
    NSMutableDictionary * _pinnedTabsByUUID;
    NSMutableDictionary * _pinnedTabsByUUIDAndProfileIdentifier;
    NSMutableArray * _privatePinnedTabs;
    NSMutableDictionary * _privatePinnedTabsByUUID;
    WBTabCollection * _tabCollection;
    unsigned long long  _updateFlags;
    long long  _updateSuppressionCount;
}

@property (nonatomic, readonly, copy) WBCollectionConfiguration *collectionConfiguration;
@property (nonatomic, readonly, copy) NSArray *pinnedTabs;
@property (nonatomic, readonly, copy) NSArray *privatePinnedTabs;
@property (nonatomic, readonly) WBTabCollection *tabCollection;

- (void).cxx_destruct;
- (void)_cacheTab:(id)arg1 inContainer:(id)arg2;
- (void)_clearPinnedTabsForProfileWithIdentifier:(id)arg1;
- (void)_loadPinnedTabsForProfileWithIdentifier:(id)arg1;
- (void)_notifyObserversAfterUpdatesIfNeeded;
- (int)_pinnedTabsFolderIDForContainer:(id)arg1;
- (id)_tabWithUUID:(id)arg1 inContainer:(id)arg2;
- (id)_tabsByUUIDInContainer:(id)arg1;
- (id)_tabsInContainer:(id)arg1;
- (void)_updateCache;
- (void)addPinnedTabsObserver:(id)arg1;
- (void)appendTab:(id)arg1 inContainer:(id)arg2;
- (id)collectionConfiguration;
- (id)initWithBrowserState:(id)arg1 collectionConfiguration:(id)arg2;
- (void)moveTab:(id)arg1 toTabGroup:(id)arg2 afterTab:(id)arg3;
- (void)notifyObserversOfUpdatedPinnedTabsInContainer:(id)arg1;
- (void)notifyObserversOfUpdatedPinnedTabsInProfileWithIdentifier:(id)arg1;
- (void)notifyObserversOfUpdatedPinnedTabsIsPrivate:(bool)arg1;
- (void)performUpdatesUsingBlock:(id /* block */)arg1;
- (id)pinnedTabs;
- (id)pinnedTabsInContainer:(id)arg1;
- (id)privatePinnedTabs;
- (void)removePinnedTabsObserver:(id)arg1;
- (void)removeTabWithUUID:(id)arg1 persist:(bool)arg2;
- (id)tabCollection;
- (void)updatePinnedTabWithUUID:(id)arg1 inContainer:(id)arg2 usingBlock:(id /* block */)arg3;
- (void)updatePinnedTabsInContainer:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)willDeselectProfileWithIdentifier:(id)arg1;
- (void)willSelectProfileWithIdentifier:(id)arg1;

@end
