
@interface ASDatabaseClient : NSObject <CHFitnessAppBadgeCountProvider, HDHealthDaemonReadyObserver, _HKXPCExportable> {
    NSHashTable * _currentActivitySummaryObservers;
    _HKCurrentActivitySummaryQuery * _currentActivitySummaryQuery;
    unsigned long long  _fitnessAppBadgeCount;
    HKHealthStore * _healthStore;
    bool  _isDaemonReady;
    NSHashTable * _nanoAlertSuppressionObservers;
    NSMutableDictionary * _observerAnchoredObjectQueryMap;
    NSObject<OS_dispatch_queue> * _observerQueue;
    HDProfile * _profile;
    NSHashTable * _protectedDataAvailableObservers;
    HKProxyProvider * _proxyProvider;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _queue_performWhenDaemonReadyBlocks;
    NSMutableArray * _queue_performWhenProtectedDataDidBecomeAvailableBlocks;
}

@property (nonatomic, readonly) unsigned long long badgeCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleCurrentActivitySummary:(id)arg1;
- (void)_handleNanoAlertSuppressionInvalidatedNotification:(id)arg1;
- (void)_handleProtectedDataAvailabilityDidChangeNotification:(id)arg1;
- (id)activeDeviceUUIDWithError:(id*)arg1;
- (void)addCurrentActivitySummaryObserver:(id)arg1;
- (void)addNanoAlertSuppressionObserver:(id)arg1;
- (void)addProtectedDataObserver:(id)arg1;
- (void)addSampleObserver:(id)arg1 sampleTypes:(id)arg2;
- (id)allCodableDatabaseCompetitionListEntriesWithError:(id*)arg1;
- (id)allCodableDatabaseCompetitionsWithError:(id*)arg1;
- (unsigned long long)badgeCount;
- (void)connectionInvalidated;
- (void)daemonReady:(id)arg1;
- (void)dealloc;
- (bool)deleteDataObjectsOfType:(id)arg1 predicate:(id)arg2 limit:(unsigned long long)arg3 deletedSampleCount:(unsigned long long*)arg4 notifyObservers:(bool)arg5 generateDeletedObjects:(bool)arg6 error:(id*)arg7;
- (id)deletedHealthKitWorkoutsWithinLastNumberOfDays:(unsigned long long)arg1 maxBatchSize:(unsigned long long)arg2 anchor:(id*)arg3 error:(id*)arg4;
- (bool)enumerateActivitySharingAchievementsWithPredicate:(id)arg1 anchor:(id*)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
- (bool)enumerateActivitySharingSnapshotsWithPredicate:(id)arg1 anchor:(id*)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
- (bool)enumerateActivitySharingWorkoutsWithPredicate:(id)arg1 anchor:(id*)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
- (bool)enumerateAllActivitySharingSamplesWithPredicate:(id)arg1 error:(id*)arg2 handler:(id /* block */)arg3;
- (id)exportedInterface;
- (id)healthKitWorkoutsWithPredicate:(id)arg1 anchor:(id*)arg2 error:(id*)arg3;
- (id)initWithHealthStore:(id)arg1;
- (id)initWithHealthStore:(id)arg1 profile:(id)arg2;
- (id)initWithProfile:(id)arg1;
- (bool)insertDataObjects:(id)arg1 error:(id*)arg2;
- (void)isActivityAlertSuppressionEnabledWithCompletion:(id /* block */)arg1;
- (bool)isDataProtectedByFirstUnlockAvailable;
- (bool)isProtectedDataAvailable;
- (id)localSourceUUIDWithError:(id*)arg1;
- (id)makeASKeyValueDomainWithDomainName:(id)arg1 category:(long long)arg2;
- (bool)performDatabaseCompetitionWriteTransactionBlock:(id /* block */)arg1 error:(id*)arg2;
- (void)performWhenDaemonReady:(id /* block */)arg1;
- (void)performWhenDataProtectedByFirstUnlockIsAvailable:(id /* block */)arg1;
- (void)registerFitnessAppBadgeProvider;
- (id)remoteInterface;
- (bool)removeAllCodableDatabaseCompetitionListsWithError:(id*)arg1;
- (bool)removeAllCodableDatabaseCompetitionsWithError:(id*)arg1;
- (bool)removeCodableDatabaseCompetitionsWithFriendUUID:(id)arg1 type:(long long)arg2 error:(id*)arg3;
- (void)removeCurrentActivitySummaryObserver:(id)arg1;
- (void)removeNanoAlertSuppressionObserver:(id)arg1;
- (void)removeProtectedDataObserver:(id)arg1;
- (void)removeSampleObserver:(id)arg1 sampleTypes:(id)arg2;
- (bool)saveCodableDatabaseCompetitionListEntry:(id)arg1 error:(id*)arg2;
- (bool)saveCodableDatabaseCompetitions:(id)arg1 error:(id*)arg2;
- (id)todayActivitySummary;
- (void)updateFitnessAppBadgeCount:(unsigned long long)arg1;
- (id)yesterdayActivitySummary;

@end
