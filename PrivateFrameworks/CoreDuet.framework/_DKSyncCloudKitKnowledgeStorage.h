
@interface _DKSyncCloudKitKnowledgeStorage : NSObject <APSConnectionDelegate> {
    _DKThrottledActivity * _activityThrottler;
    bool  _available;
    bool  _cloudSyncAvailablityObserverRegistered;
    APSConnection * _connection;
    CKContainer * _container;
    bool  _databaseChangesExist;
    <_DKSyncRemoteKnowledgeStorageFetchDelegate> * _delegate;
    CKServerChangeToken * _fetchDatabaseChangesServerChangeToken;
    bool  _isPrewarmed;
    <_DKKeyValueStore> * _keyValueStore;
    NSHashTable * _outstandingOperations;
    NSOperation * _previousDependentOperation;
    NSMutableDictionary * _recordZonesByZoneID;
    bool  _started;
    _DKSyncPeerStatusTracker * _tracker;
    double  _updateSourceDeviceIdentifiersBackoffTimeInterval;
    _CDPeriodicSchedulerJob * _updateSourceDeviceIdentifiersPeriodicJob;
    NSMutableDictionary * _zoneIDsBySourceDeviceID;
    NSMutableSet * _zoneIDsWithAdditionChanges;
    NSMutableSet * _zoneIDsWithDeletionChanges;
    NSMutableSet * _zoneIDsWithUnrecoverableDecryptionErrors;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)deviceIDFromZoneID:(id)arg1;
+ (id)mySyncZoneID;
+ (id)zoneIDWithDeviceID:(id)arg1;

- (void).cxx_destruct;
- (void)_cloudSyncAvailabilityDidChange:(id)arg1;
- (void)cancelOutstandingOperations;
- (void)clearPrewarmedFlag;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)dealloc;
- (void)fetchAdditionsHighWaterMarkWithPeer:(id)arg1 highPriority:(bool)arg2 completion:(id /* block */)arg3;
- (void)fetchDeletedEventIDsFromPeer:(id)arg1 sinceDate:(id)arg2 streamNames:(id)arg3 limit:(unsigned long long)arg4 highPriority:(bool)arg5 completion:(id /* block */)arg6;
- (void)fetchDeletionsHighWaterMarkWithPeer:(id)arg1 highPriority:(bool)arg2 completion:(id /* block */)arg3;
- (void)fetchEventsFromPeer:(id)arg1 windows:(id)arg2 streamNames:(id)arg3 limit:(unsigned long long)arg4 fetchOrder:(long long)arg5 highPriority:(bool)arg6 completion:(id /* block */)arg7;
- (void)fetchSourceDeviceIDFromPeer:(id)arg1 highPriority:(bool)arg2 completion:(id /* block */)arg3;
- (bool)hasAdditionsFlagForPeer:(id)arg1;
- (bool)hasDeletionsFlagForPeer:(id)arg1;
- (id)init;
- (id)name;
- (void)prewarmFetchWithCompletion:(id /* block */)arg1;
- (void)setFetchDelegate:(id)arg1;
- (void)setHasAdditionsFlag:(bool)arg1 forPeer:(id)arg2;
- (void)setHasDeletionsFlag:(bool)arg1 forPeer:(id)arg2;
- (void)start;
- (long long)transportType;
- (void)updateStorageWithAddedEvents:(id)arg1 deletedEventIDs:(id)arg2 highPriority:(bool)arg3 completion:(id /* block */)arg4;

@end
