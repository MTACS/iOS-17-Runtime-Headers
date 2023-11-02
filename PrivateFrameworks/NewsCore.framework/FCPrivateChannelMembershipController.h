
@interface FCPrivateChannelMembershipController : FCPrivateDataController <FCAppActivityObserving> {
    NSMutableSet * _membershipReferences;
    NSDictionary * _membershipsByChannelID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
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
- (void)activityObservingApplicationWindowDidBecomeForeground;
- (void)addObserver:(id)arg1;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)arg1;
- (void)dealloc;
- (id)feedDescriptorForDraftFeedForChannel:(id)arg1;
- (void)handleSyncWithChangedRecords:(id)arg1 deletedRecordNames:(id)arg2;
- (bool)hasMemberships;
- (id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3;
- (void)isAllowedToSeeArticleID:(id)arg1 completionBlock:(id /* block */)arg2;
- (bool)isAllowedToSeeDraftsForChannelID:(id)arg1;
- (void)isAllowedToSeeIssueID:(id)arg1 completionBlock:(id /* block */)arg2;
- (bool)isMemberOfChannelID:(id)arg1;
- (void)loadLocalCachesFromStore;
- (id)membershipChannelIDs;
- (void)removeObserver:(id)arg1;

@end
