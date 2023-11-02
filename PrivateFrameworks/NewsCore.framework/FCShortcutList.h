
@interface FCShortcutList : FCPrivateDataController {
    FCMTWriterLock * _itemsLock;
    NSMutableDictionary * _shortcutsByID;
}

@property (nonatomic, readonly, copy) NSOrderedSet *orderedShortcuts;

+ (id)backingRecordIDs;
+ (id)backingRecordZoneIDs;
+ (long long)commandQueueUrgency;
+ (id)commandStoreFileName;
+ (id)commandsToMergeLocalDataToCloud:(id)arg1 privateDataDirectory:(id)arg2;
+ (id)desiredKeys;
+ (id)localStoreFilename;
+ (unsigned long long)localStoreVersion;
+ (bool)requiresBatchedSync;
+ (bool)requiresHighPriorityFirstSync;
+ (bool)requiresPushNotificationSupport;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)addShortcut:(id)arg1;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)arg1;
- (bool)canHelpRestoreZoneName:(id)arg1;
- (bool)containsShortcut:(id)arg1;
- (void)handleSyncWithChangedRecords:(id)arg1 deletedRecordNames:(id)arg2;
- (id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3;
- (void)loadLocalCachesFromStore;
- (bool)moveShortcutWithIdentifier:(id)arg1 toIndex:(unsigned long long)arg2;
- (id)orderedShortcuts;
- (id)recordsForRestoringZoneName:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)removeShortcutWithIdentifier:(id)arg1;
- (void)validateShortcuts;

@end
