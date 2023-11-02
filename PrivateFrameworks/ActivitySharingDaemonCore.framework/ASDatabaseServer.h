
@interface ASDatabaseServer : NSObject <ASDatabaseServerInterface, CHFitnessAppBadgeCountProvider, HDHealthDaemonReadyObserver, HDTaskServer, _HKXPCExportable> {
    HDHealthStoreClient * _client;
    unsigned long long  _fitnessAppBadgeCount;
    bool  _isDaemonReady;
    NSMutableArray * _queue_performWhenDaemonReadyBlocks;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSUUID * _taskUUID;
}

@property (nonatomic, readonly) unsigned long long badgeCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;

- (void).cxx_destruct;
- (unsigned long long)badgeCount;
- (void)connectionInvalidated;
- (void)daemonReady:(id)arg1;
- (id)exportedInterface;
- (id)initWithUUID:(id)arg1 client:(id)arg2;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (id)remoteInterface;
- (void)remote_activeDeviceUUIDWithCompletion:(id /* block */)arg1;
- (void)remote_allCodableDatabaseCompetitionListEntriesWithCompletion:(id /* block */)arg1;
- (void)remote_allCodableDatabaseCompetitionsWithCompletion:(id /* block */)arg1;
- (void)remote_deletedHealthKitWorkoutsWithinLastNumberOfDays:(unsigned long long)arg1 maxBatchSize:(unsigned long long)arg2 anchor:(id)arg3 completion:(id /* block */)arg4;
- (void)remote_insertDataObjects:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_isActivityAlertSuppressionEnabledWithCompletion:(id /* block */)arg1;
- (void)remote_isDataProtectedByFirstUnlockAvailableWithCompletion:(id /* block */)arg1;
- (void)remote_isProtectedDataAvailableWithCompletion:(id /* block */)arg1;
- (void)remote_localSourceUUIDWithCompletion:(id /* block */)arg1;
- (void)remote_performWhenDaemonReady:(id /* block */)arg1;
- (void)remote_performWhenDataProtectedByFirstUnlockIsAvailable:(id /* block */)arg1;
- (void)remote_registerFitnessAppBadgeProvider;
- (void)remote_removeAllCodableDatabaseCompetitionListsWithCompletion:(id /* block */)arg1;
- (void)remote_removeAllCodableDatabaseCompetitionsWithCompletion:(id /* block */)arg1;
- (void)remote_removeCodableDatabaseCompetitionsWithFriendUUID:(id)arg1 type:(long long)arg2 completion:(id /* block */)arg3;
- (void)remote_saveCodableDatabaseCompetitionListEntry:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_saveCodableDatabaseCompetitions:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_todayActivitySummaryWithCompletion:(id /* block */)arg1;
- (void)remote_updateFitnessAppBadgeCount:(unsigned long long)arg1;
- (void)remote_yesterdayActivitySummaryWithCompletion:(id /* block */)arg1;
- (id)taskUUID;

@end
