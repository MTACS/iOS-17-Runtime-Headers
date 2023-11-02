
@interface BRItemCollectionGatherer : NSObject <FPItemCollectionItemIDBasedDelegate> {
    <NSObject> * _accountTokenDidChangeNotificationObserver;
    unsigned long long  _appLibrariesLookupAttempts;
    NSMutableSet * _boostedAppLibraries;
    NSMutableSet * _collectionsSet;
    BRWatchingConfiguration * _config;
    <BRItemCollectionGathererDelegate> * _delegate;
    NSMutableDictionary * _failureCountByItemID;
    bool  _finishedInitialGathering;
    bool  _finishedLookingUpAppLibraries;
    NSMutableDictionary * _itemIDToItemCollectionMap;
    NSMutableDictionary * _itemOwnersMap;
    NSData * _perAppAccountIdentifier;
    NSPredicate * _predicate;
    NSMetadataQuery * _query;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableSet * _waitingToBeGatheredCollections;
    NSMutableSet * _watchedAppLibraryFPItemIDs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addItemCollectionOnItem:(id)arg1;
- (void)_boostAppLibraryOfItemIfNeeded:(id)arg1;
- (bool)_buildCollectionOnItemIfPossible:(id)arg1;
- (bool)_canWatchItem:(id)arg1;
- (id)_getAppLibraryURLFromConfig:(id)arg1;
- (void)_invalidateAndNotifyDelegate:(bool)arg1;
- (bool)_isItemOwnedByAnyCollection:(id)arg1;
- (unsigned long long)_itemID:(id)arg1 becameOwnedByCollection:(id)arg2;
- (unsigned long long)_itemID:(id)arg1 wasDeletedByCollection:(id)arg2;
- (void)_queueSignalDelegateIfNeededOnFinishGathering;
- (void)_removeCollectionFromGatherSet:(id)arg1;
- (bool)_signalDelegateIfNeededOnFinishGathering;
- (void)_startObservingAccountTokenDidChangeNotification;
- (void)_startWatchingAppLibraries:(id)arg1;
- (void)_startWatchingNewSubItem:(id)arg1;
- (void)_startWatchingRootItemWithConfig:(id)arg1;
- (void)_startWatchingURLs:(id)arg1;
- (void)_stopObservingAccountTokenDidChangeNotification;
- (void)_stopWatchingItemIDRecusively:(id)arg1 itemIDsInItem:(id)arg2;
- (void)_unboostApplibrariesIfNeeded;
- (void)collection:(id)arg1 didEncounterError:(id)arg2;
- (void)collection:(id)arg1 didUpdateItems:(id)arg2 replaceItemsByFormerID:(id)arg3 deleteItemsWithIDs:(id)arg4;
- (void)collectionDidFinishGathering:(id)arg1;
- (void)dataForCollectionShouldBeReloaded:(id)arg1;
- (void)dataForCollectionShouldBeReloaded:(id)arg1 deleteItemsWithIDs:(id)arg2;
- (id)description;
- (void)disableUpdates;
- (void)enableUpdates;
- (id)initWithDelegate:(id)arg1 query:(id)arg2;
- (void)invalidate;
- (void)pauseWatchingWithCompletionBlock:(id /* block */)arg1;
- (void)resumeWatching;
- (void)startWatchingRootItemWithScopes:(id)arg1;
- (id)test_getQueue;

@end
