
@interface FCCKPrivateDatabase : NSObject {
    bool  _activelyStartingUp;
    bool  _beganInitialStartUp;
    NFLazy * _ckProperties;
    unsigned long long  _countOfFailedStartUpAttempts;
    NSDate * _dateOfLastFailedStartUpAttempt;
    <FCCKDatabaseEncryptionDelegate> * _encryptionDelegate;
    bool  _encryptionEnabled;
    NSData * _encryptionKey;
    bool  _encryptionRequired;
    bool  _finishedInitialStartUp;
    NSOperationQueue * _highPriorityOperationQueue;
    NSObject<OS_dispatch_group> * _initialStartUpGroup;
    NSArray * _middleware;
    FCNetworkBehaviorMonitor * _networkBehaviorMonitor;
    NSOperationQueue * _noPreflightOperationQueue;
    NSArray * _operationMiddleware;
    NSObject<OS_dispatch_queue> * _queue;
    NSArray * _recordMiddleware;
    NSArray * _remainingStartUpMiddleware;
    FCCKPrivateDatabaseSchema * _schema;
    NSData * _secureEncryptionKey;
    bool  _secureSubscriptionsEnabled;
    CKRecord * _sentinelRecord;
    NSOperationQueue * _serialOperationQueue;
    long long  _startUpResult;
    NSArray * _zonePruningAssistants;
    NSArray * _zoneRestorationSources;
}

+ (id)testingDatabase;

- (void).cxx_destruct;
- (void)fetchAllDatabaseChangesWithServerChangeToken:(id)arg1 qualityOfService:(long long)arg2 completionQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)fetchChangesForRecordZoneID:(id)arg1 changeToken:(id)arg2 desiredKeys:(id)arg3 fetchAllChanges:(bool)arg4 qualityOfService:(long long)arg5 completionHandler:(id /* block */)arg6;

@end
