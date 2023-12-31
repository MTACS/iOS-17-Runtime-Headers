
@interface ASCloudKitManager : NSObject <APSConnectionDelegate, ASActivitySharingManagerReadyObserver> {
    ASNotificationStep * _achievementNotificationStep;
    CKShare * _activityDataShare;
    ASActivitySharingManager * _activitySharingManager;
    ASNotificationStep * _activitySnapshotNotificationStep;
    APSConnection * _apsConnection;
    NSArray * _blocksWaitingOnFetch;
    NSObject<OS_dispatch_queue> * _changeTokenQueue;
    long long  _cloudKitAccountStatus;
    ASCloudKitUtility * _cloudKitUtility;
    ASNotificationStep * _competitionNotificationStep;
    ASContactsManager * _contactsManager;
    CKContainer * _container;
    unsigned long long  _currentFetchPriority;
    NSDate * _dateOfLastSuccessfulFetch;
    HDDaemonTransaction * _fetchTransaction;
    NSDictionary * _friendUUIDsByZoneID;
    bool  _hasCompletedFirstFetch;
    NSObject<OS_dispatch_source> * _newAccountTasksTimer;
    ASNotificationStep * _notificationEventNotificationStep;
    NSObject<OS_dispatch_queue> * _observerQueue;
    NSHashTable * _observers;
    NSHashTable * _observersNotReady;
    NSObject<OS_dispatch_group> * _observersNotReadyGroup;
    ASNotificationStep * _privateDatabaseActivitySnapshotNotificationStep;
    ASNotificationStep * _privateDatabaseCompetitionNotificationStep;
    bool  _pushNotificationRecieved;
    bool  _readyForOperations;
    ASNotificationStep * _relationshipNotificationStep;
    ASNotificationStep * _remoteRelationshipNotificationStep;
    NSObject<OS_dispatch_queue> * _serialQueue;
    ASCloudKitServerChangeTokenCache * _serverChangeTokenCache;
    bool  _subscriptionNotificationWasReceivedDuringCurrentFetch;
    ASNotificationStep * _workoutNotificationStep;
}

@property (nonatomic, retain) ASCloudKitUtility *cloudKitUtility;
@property (nonatomic, retain) CKContainer *container;
@property (nonatomic, retain) NSDate *dateOfLastSuccessfulFetch;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasCompletedFirstFetch;
@property (readonly) unsigned long long hash;
@property bool readyForOperations;
@property (readonly) Class superclass;

+ (id)_activityDataShareRecordID;
+ (id)activityDataRecordZoneID;
+ (id)activityDataRootRecordID;
+ (id)relationshipZone;
+ (id)shareURLForShare:(id)arg1;

- (void).cxx_destruct;
- (void)_cancelNewAccountTasksTimer;
- (void)_cloudKitAccountStatusChanged:(id)arg1;
- (void)_createActivityDataShareWithCompletion:(id /* block */)arg1;
- (void)_createNotificationSteps;
- (void)_fetchAllChangesWithPriority:(long long)arg1 activity:(id)arg2;
- (void)_fetchAllChangesWithPriority:(long long)arg1 activity:(id)arg2 completion:(id /* block */)arg3;
- (void)_fetchCloudKitAccountStatusAndNotifyOfChanges;
- (void)_fetchCloudKitAddressWithCompletion:(id /* block */)arg1;
- (void)_handleAccountStatusChange:(long long)arg1;
- (void)_handleIncomingNotification:(id)arg1;
- (void)_handleNewPrivateDatabaseRecordChanges:(id)arg1 sharedDatabaseRecordChanges:(id)arg2 fetchType:(long long)arg3;
- (void)_observerQueue_clearFriendUUIDByZoneIDCache;
- (id)_observerQueue_friendUUIDForActivityDataShareRecordZoneID:(id)arg1;
- (void)_observerQueue_notifyObserversOfBeginUpdatesForFetchWithType:(long long)arg1;
- (void)_observerQueue_notifyObserversOfEndUpdatesForFetchWithType:(long long)arg1;
- (void)_observerQueue_performNotificationStep:(id)arg1 onRecords:(id)arg2 dispatchGroup:(id)arg3;
- (void)_performAndRetryNewAccountTasksIfNecessaryWithShouldCreateSubscriptions:(bool)arg1 shouldFetch:(bool)arg2;
- (void)_performAndRetryNewAccountTasksWithRetryInterval:(double)arg1 shouldCreateSubscriptions:(bool)arg2 shouldFetch:(bool)arg3;
- (void)_performBlockWhenAllObserversBecomeReady:(id /* block */)arg1;
- (void)_performNewAccountTasksCreatingSubscriptions:(bool)arg1 fetching:(bool)arg2 completion:(id /* block */)arg3;
- (id)_queue_apsEnvironmentString;
- (void)_queue_callFetchCompletionBlocksWithSuccess:(bool)arg1 error:(id)arg2;
- (void)_queue_cancelAllExecutingFetches;
- (void)_queue_clearChangeTokenCacheAndFriendListWithCompletion:(id /* block */)arg1;
- (bool)_queue_isLastCloudKitAddressDifferentFromNewCloudKitAddress:(id)arg1;
- (void)_queue_notifyObserversOfStatusChanged:(long long)arg1;
- (void)_queue_pushDisable;
- (void)_queue_pushEnable;
- (void)_queue_setHasCompletedFirstFetch:(bool)arg1;
- (void)_queue_startFetchAllChangesOperationWithPriority:(long long)arg1 activity:(id)arg2 changeTokenCache:(id)arg3 completion:(id /* block */)arg4;
- (void)_saveCloudKitAddressToKeyValueStore;
- (void)_subscribeToChangesInDatabase:(id)arg1 subscriptionPrefix:(id)arg2 recordTypes:(id)arg3 recordTypesToDelete:(id)arg4 completion:(id /* block */)arg5;
- (void)_subscribeToChangesInPrivateDatabaseWithCompletion:(id /* block */)arg1;
- (void)_subscribeToChangesInSharedDatabaseWithCompletion:(id /* block */)arg1;
- (void)_verifyOrCreateSubscriptionsWithCompletion:(id /* block */)arg1;
- (void)acceptSharesWithURLs:(id)arg1 completion:(id /* block */)arg2;
- (void)activitySharingManagerReady:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)addParticipantWithCloudKitAddress:(id)arg1 toShares:(id)arg2 completion:(id /* block */)arg3;
- (void)beginHandlingOperations;
- (id)cloudKitUtility;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (id)container;
- (void)createShareWithRootRecord:(id)arg1 otherRecordsToSave:(id)arg2 completion:(id /* block */)arg3;
- (id)dateOfLastSuccessfulFetch;
- (void)dealloc;
- (void)endHandlingOperations;
- (void)expireChangeTokenWithCompletion:(id /* block */)arg1;
- (void)fetchAllChangesIfTimeSinceLastFetchIsGreaterThan:(unsigned long long)arg1 priority:(long long)arg2 activity:(id)arg3 completion:(id /* block */)arg4;
- (void)fetchAllChangesWithPriority:(long long)arg1 activity:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchCloudKitAccountStatusWithCompletion:(id /* block */)arg1;
- (void)fetchCloudKitAddressWithCompletion:(id /* block */)arg1;
- (void)fetchOrCreateActivityDataShareWithCompletion:(id /* block */)arg1;
- (void)fetchShareParticipantWithCloudKitAddress:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchShareWithShareRecordID:(id)arg1 completion:(id /* block */)arg2;
- (void)forceSaveRecordsIntoPrivateDatabaseIgnoringServerChanges:(id)arg1 recordIDsToDelete:(id)arg2 priority:(long long)arg3 activity:(id)arg4 completion:(id /* block */)arg5;
- (bool)hasCompletedFirstFetch;
- (id)init;
- (void)observerDidBecomeReadyToProcessChanges:(id)arg1;
- (bool)readyForOperations;
- (void)removeObserver:(id)arg1;
- (void)removeParticpantWithCloudKitAddress:(id)arg1 fromShares:(id)arg2 completion:(id /* block */)arg3;
- (void)saveRecordsIntoPrivateDatabase:(id)arg1 priority:(long long)arg2 completion:(id /* block */)arg3;
- (void)setCloudKitUtility:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)setDateOfLastSuccessfulFetch:(id)arg1;
- (void)setHasCompletedFirstFetch:(bool)arg1;
- (void)setReadyForOperations:(bool)arg1;

@end
