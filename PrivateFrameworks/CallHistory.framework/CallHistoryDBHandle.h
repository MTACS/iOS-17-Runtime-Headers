
@interface CallHistoryDBHandle : CHLogger {
    long long  _callsDidChangeDarwinNotificationCount;
    id  _dataStoreAddedRef;
    CHFeatureFlags * _featureFlags;
    id  _moveCallRecordsFromTempStoreRef;
    id  _observerCallDBPropRef;
    id  _observerCallRecordRef;
    CallDBManager * callDBManager;
    NSManagedObjectContext * fCallDBPropertiesContext;
    NSManagedObjectContext * fCallRecordContext;
}

@property (nonatomic, readonly) CallDBManager *callDBManager;
@property (nonatomic) long long callsDidChangeDarwinNotificationCount;
@property (nonatomic, readonly) CHFeatureFlags *featureFlags;

+ (id)createForClient;
+ (id)createForServer;
+ (id)createWithDBManager:(id)arg1;
+ (id)objectId;

- (void).cxx_destruct;
- (id)callDBManager;
- (id)callDBProperties;
- (long long)callHistoryDBFetchLimit;
- (id)callRecordContext;
- (long long)callsDidChangeDarwinNotificationCount;
- (id)createCallRecord;
- (void)dealloc;
- (void)deleteAll;
- (long long)deleteManagedCalls:(id)arg1;
- (long long)deleteManagedCallsWithPredicate:(id)arg1;
- (void)deleteObjectWithUniqueId:(id)arg1;
- (void)deleteObjectsWithUniqueIds:(id)arg1;
- (id)featureFlags;
- (id)fetchAll;
- (id)fetchAllNoLimit;
- (id)fetchAllObjectsWithUniqueId:(id)arg1;
- (unsigned long long)fetchManagedCallCountWithPredicate:(id)arg1 sortDescriptors:(id)arg2;
- (id)fetchManagedCallIdentifiersWithPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 offset:(unsigned long long)arg4 batchSize:(unsigned long long)arg5;
- (id)fetchManagedCallsWithPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 offset:(unsigned long long)arg4 batchSize:(unsigned long long)arg5;
- (id)fetchObjectWithUniqueId:(id)arg1;
- (id)fetchObjectsWithPredicate:(id)arg1;
- (id)fetchObjectsWithUniqueIds:(id)arg1;
- (id)fetchWithCallTypes:(unsigned int)arg1;
- (id)fetchWithPredicate:(id)arg1 forEntity:(id)arg2;
- (id)fetchWithPredicate:(id)arg1 forEntity:(id)arg2 withLimit:(bool)arg3;
- (id)getArrayForCallTypeMask:(unsigned int)arg1;
- (void)handleCallDBPropContextDidSaveNotification:(id)arg1;
- (void)handleCallRecordContextDidSaveNotification:(id)arg1;
- (void)handlePersistentStoreChangedNotification:(id)arg1;
- (bool)handleSaveForCallRecordContext:(id)arg1 error:(id*)arg2;
- (id)initWithDBManager:(id)arg1;
- (void)mergeCallDBPropChangesFromRemoteAppSave;
- (void)mergeCallRecordChangesFromRemoteAppSave;
- (bool)moveCallRecordsFromDatabaseAtURL:(id)arg1;
- (bool)performSaveWithBackgroundTaskAssertion:(id)arg1 error:(id*)arg2;
- (void)postTimersChangedNotification;
- (void)registerForNotifications:(id)arg1;
- (bool)resetAllTimers;
- (void)resetTimers;
- (bool)save:(id*)arg1;
- (bool)saveTimers:(id /* block */)arg1;
- (void)setCallsDidChangeDarwinNotificationCount:(long long)arg1;
- (id)timerIncoming;
- (id)timerLastReset;
- (id)timerLifetime;
- (id)timerOutgoing;
- (void)unRegisterForNotifications;
- (void)updateCallDBProperties;
- (id)updateManagedCallsWithPredicate:(id)arg1 propertiesToUpdate:(id)arg2;

@end
