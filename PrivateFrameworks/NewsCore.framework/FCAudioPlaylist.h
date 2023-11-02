
@interface FCAudioPlaylist : FCPrivateDataController <FCAudioPlaylistType> {
    NSMutableDictionary * _itemsByID;
    FCMTWriterLock * _itemsLock;
    NSOrderedSet * _orderedArticleIDs;
}

@property (nonatomic, readonly) NSArray *articleIDs;

+ (id)backingRecordIDs;
+ (id)backingRecordZoneIDs;
+ (long long)commandQueueUrgency;
+ (id)commandStoreFileName;
+ (id)commandsToMergeLocalDataToCloud:(id)arg1 privateDataDirectory:(id)arg2;
+ (id)desiredKeys;
+ (id)localStoreFilename;
+ (unsigned long long)localStoreVersion;
+ (void)populateLocalStoreClassRegistry:(id)arg1;
+ (bool)requiresBatchedSync;
+ (bool)requiresHighPriorityFirstSync;
+ (bool)requiresPushNotificationSupport;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)arg1;
- (id)articleIDs;
- (bool)canHelpRestoreZoneName:(id)arg1;
- (bool)containsArticleID:(id)arg1;
- (id)dateAddedForArticleID:(id)arg1;
- (void)ensureSyncedWithCompletion:(id /* block */)arg1;
- (void)handleSyncWithChangedRecords:(id)arg1 deletedRecordNames:(id)arg2;
- (id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3;
- (void)insertArticleID:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)loadLocalCachesFromStore;
- (id)localStoreMigrator;
- (id)recordsForRestoringZoneName:(id)arg1;
- (void)removeArticleID:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)save;

@end
