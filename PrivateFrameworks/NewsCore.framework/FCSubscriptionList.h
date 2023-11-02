
@interface FCSubscriptionList : FCPrivateDataController {
    NSSet * _autoFavoriteTagIDsInternal;
    NSSet * _groupableTagIDsInternal;
    NSSet * _ignoredTagIDsInternal;
    FCMTWriterLock * _itemsLock;
    NSMutableDictionary * _mutableSubscriptionsBySubscriptionID;
    NSSet * _mutedTagIDsInternal;
    NSOrderedSet * _orderedSubscribedTagIDsInternal;
    NSSet * _subscribedTagIDsInternal;
    <FCTagRanking> * _subscribedTagRanker;
}

@property (nonatomic, readonly, copy) NSSet *allSubscribedTagIDs;
@property (nonatomic, readonly, copy) NSSet *autoFavoriteTagIDs;
@property (nonatomic, readonly, copy) NSSet *groupableTagIDs;
@property (nonatomic, readonly, copy) NSSet *ignoredTagIDs;
@property (nonatomic, readonly, copy) NSSet *mutedTagIDs;
@property (nonatomic, readonly, copy) NSOrderedSet *orderedSubscribedTagIDs;
@property (nonatomic, readonly, copy) NSSet *subscribedTagIDs;
@property (nonatomic, retain) <FCTagRanking> *subscribedTagRanker;
@property (nonatomic, readonly, copy) NSDictionary *subscriptionsBySubscriptionID;

+ (id)backingRecordIDs;
+ (id)backingRecordZoneIDs;
+ (long long)commandQueueUrgency;
+ (id)commandStoreFileName;
+ (id)commandsToMergeLocalDataToCloud:(id)arg1 privateDataDirectory:(id)arg2;
+ (void)configureKeyValueStoreForJSONHandling:(id)arg1;
+ (id)desiredKeys;
+ (id)localStoreFilename;
+ (unsigned long long)localStoreVersion;
+ (bool)requiresBatchedSync;
+ (bool)requiresHighPriorityFirstSync;
+ (bool)requiresPushNotificationSupport;
+ (id)subscriptionIDForTagID:(id)arg1 type:(unsigned long long)arg2;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (bool)addSubscriptionForTagID:(id)arg1 type:(unsigned long long)arg2;
- (bool)addSubscriptionForTagID:(id)arg1 type:(unsigned long long)arg2 origin:(unsigned long long)arg3;
- (bool)addSubscriptionForTagID:(id)arg1 type:(unsigned long long)arg2 origin:(unsigned long long)arg3 groupID:(id)arg4;
- (bool)addSubscriptionForTagID:(id)arg1 type:(unsigned long long)arg2 origin:(unsigned long long)arg3 groupID:(id)arg4 notificationsEnabled:(bool)arg5;
- (void)addSubscriptionsForTagIDs:(id)arg1 typeProvider:(id /* block */)arg2 originProvider:(id /* block */)arg3 completion:(id /* block */)arg4;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)arg1;
- (id)allSubscribedTagIDs;
- (bool)appendSubscriptionForTagID:(id)arg1 type:(unsigned long long)arg2;
- (void)assignOrderToTagSubscriptionsIfNeeded;
- (id)autoFavoriteTagIDs;
- (bool)canAddSubscription;
- (bool)canHelpRestoreZoneName:(id)arg1;
- (id)groupableTagIDs;
- (void)handleSyncCompletion;
- (void)handleSyncDidResetLocalDataForRecordZoneWithID:(id)arg1;
- (void)handleSyncWithChangedRecords:(id)arg1 deletedRecordNames:(id)arg2;
- (bool)hasAutoFavoriteSubscriptionForTagID:(id)arg1;
- (bool)hasIgnoredSubscriptionForTagID:(id)arg1;
- (bool)hasMutedSubscriptionForTagID:(id)arg1;
- (bool)hasNotificationsEnabledForTagID:(id)arg1;
- (bool)hasSubscriptionForTagID:(id)arg1;
- (id)ignoredTagIDs;
- (id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3;
- (void)loadLocalCachesFromStore;
- (bool)moveSubscriptionForTagID:(id)arg1 toIndex:(unsigned long long)arg2;
- (id)mutedTagIDs;
- (id)orderedSubscribedTagIDs;
- (id)recordsForRestoringZoneName:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)removeSubscriptionForTagID:(id)arg1 type:(unsigned long long)arg2;
- (void)removeSubscriptionsForTagIDs:(id)arg1 typeProvider:(id /* block */)arg2 completion:(id /* block */)arg3;
- (bool)setNotificationsEnabled:(bool)arg1 forTagID:(id)arg2;
- (void)setSubscribedTagRanker:(id)arg1;
- (id)subscribedTagIDs;
- (id)subscribedTagRanker;
- (id)subscriptionForTagID:(id)arg1;
- (id)subscriptionForTagID:(id)arg1 type:(unsigned long long)arg2;
- (id)subscriptionForTagIDOfAnyType:(id)arg1;
- (id)subscriptionsBySubscriptionID;
- (id)subscriptionsForType:(unsigned long long)arg1;
- (id)t_reconcileSubscriptions:(id)arg1;

@end
