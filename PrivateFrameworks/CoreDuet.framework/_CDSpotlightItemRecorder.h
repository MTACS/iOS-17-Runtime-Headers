
@interface _CDSpotlightItemRecorder : NSObject <CSSearchableIndexObserver, SpotlightReceiver> {
    NSMutableDictionary * _activityPerBundleRateLimit;
    NSObject<OS_dispatch_queue> * _activityRateLimiterQueue;
    _CDAppIntentNotifier * _appIntentNotifier;
    NSObject<OS_dispatch_source> * _batchExecutionSource;
    NSObject<OS_dispatch_queue> * _batchExecutionSourceQueue;
    _PASBloomFilterForWriting * _calendarAddedItemsFilter;
    _CDSpotlightCoalescedDeletionManager * _coalescedDeletionManager;
    _DKContactsPrivacyMaintainer * _contactsPrivacyMaintainer;
    BMIntentStream * _intentStream;
    <_DKKnowledgeQuerying><_DKKnowledgeSaving><_DKKnowledgeEventStreamDeleting> * _knowledgeStore;
    NSMutableArray * _pendingOperations;
    long long  _pendingOperationsItemCount;
    NSObject<OS_dispatch_queue> * _pendingOperationsQueue;
    NSObject<OS_os_transaction> * _pendingOperationsTransaction;
    _DKPrivacyPolicyEnforcer * _privacyEnforcer;
    _DKRateLimitPolicyEnforcer * _rateLimitEnforcer;
    <_CDInteractionQuerying><_CDInteractionRecording><_CDInteractionDeleting> * _recorder;
    _PASLock * _throttleStateByBundleId;
    _CDUserActivityCache * _userActivityCache;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)spotlightItemRecorder;
+ (id)spotlightItemRecorderWithInteractionRecorder:(id)arg1;
+ (id)spotlightItemRecorderWithInteractionRecorder:(id)arg1 knowledgeStore:(id)arg2;
+ (id)spotlightItemRecorderWithKnowledgeStore:(id)arg1;

- (void).cxx_destruct;
- (void)addInteractions:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
- (void)addInteractions:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)addOrUpdateSearchableItems:(id)arg1;
- (void)addOrUpdateSearchableItems:(id)arg1 bundleID:(id)arg2;
- (void)addOrUpdateSearchableItems:(id)arg1 bundleID:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)addUserAction:(id)arg1 withItem:(id)arg2;
- (void)addUserAction:(id)arg1 withItem:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)deleteAllInteractionsWithBundleID:(id)arg1 protectionClass:(id)arg2;
- (void)deleteAllInteractionsWithBundleID:(id)arg1 protectionClass:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)deleteAllSearchableItemsWithBundleID:(id)arg1;
- (void)deleteAllSearchableItemsWithBundleID:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)deleteAllUserActivities:(id)arg1;
- (void)deleteInteractionsWithGroupIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
- (void)deleteInteractionsWithGroupIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)deleteInteractionsWithIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
- (void)deleteInteractionsWithIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)deleteSearchableItemsSinceDate:(id)arg1 bundleID:(id)arg2;
- (void)deleteSearchableItemsSinceDate:(id)arg1 bundleID:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 bundleID:(id)arg2;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 bundleID:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)deleteSearchableItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2;
- (void)deleteSearchableItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)deleteUserActivitiesWithPersistentIdentifiers:(id)arg1 bundleID:(id)arg2;
- (void)donateRelevantShortcuts:(id)arg1 bundleID:(id)arg2;
- (id)initWithInteractionRecorder:(id)arg1;
- (id)initWithInteractionRecorder:(id)arg1 knowledgeStore:(id)arg2;
- (id)initWithInteractionRecorder:(id)arg1 knowledgeStore:(id)arg2 rateLimitEnforcer:(id)arg3;
- (id)initWithInteractionRecorder:(id)arg1 knowledgeStore:(id)arg2 rateLimitEnforcer:(id)arg3 deletionManagerOverride:(id)arg4;
- (void)registerSpotlightRecorderWithServiceName:(id)arg1;
- (void)startIntentDeletionForContactDeletions;
- (id)supportedContentTypes;
- (id)supportedINIntentClassNames;
- (id)supportedUTIs;

@end
