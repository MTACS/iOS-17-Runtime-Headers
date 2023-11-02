
@interface FCUserEventHistory : FCPrivateDataController <FCUserEventHistoryStorageObserver> {
    FCUserEventHistoryStorage * _privateStorage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) FCUserEventHistoryStorage *privateStorage;
@property (nonatomic, readonly) <FCUserEventHistoryStorageType> *storage;
@property (readonly) Class superclass;

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
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)arg1;
- (void)handleSyncWithChangedRecords:(id)arg1 deletedRecordNames:(id)arg2;
- (id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3 sessionStorage:(id)arg4;
- (void)loadLocalCachesFromStore;
- (id)privateStorage;
- (void)setPrivateStorage:(id)arg1;
- (id)storage;
- (void)storage:(id)arg1 didClearAllSessions:(id)arg2;
- (void)storage:(id)arg1 didStoreData:(id)arg2 forSessionID:(id)arg3;

@end
