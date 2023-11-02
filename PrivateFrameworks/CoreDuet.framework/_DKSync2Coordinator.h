
@interface _DKSync2Coordinator : _DKSyncContextObject <APSConnectionDelegate, _DKKnowledgeStorageEventNotificationDelegate, _DKSyncCoordinator, _DKSyncRemoteKnowledgeStorageFetchDelegate> {
    NSMutableSet * _activatedPeers;
    _DKThrottledActivity * _activityThrottler;
    NSMutableSet * _busyTransactions;
    bool  _cloudDeviceCountChangedObserverRegistered;
    _DKSyncToggle * _cloudIsAvailableToggler;
    bool  _cloudSyncAvailablityObserverRegistered;
    APSConnection * _connection;
    _DKDataProtectionStateMonitor * _dataProtectionMonitor;
    bool  _databaseObserversRegistered;
    NSMutableArray * _deletedSyncedEvents;
    bool  _hasRegisteredOptionalObservers;
    bool  _hasSyncedUpHistoryToCloud;
    NSMutableArray * _insertedSyncedEvents;
    bool  _isBusy;
    bool  _isEnabled;
    <_DKKeyValueStore> * _keyValueStore;
    <_DKSyncLocalKnowledgeStorage> * _localStorage;
    <NSObject> * _observerToken;
    struct _CDPerfEvent { 
        double startTime; 
        double endTime; 
    }  _perfEvent;
    _CDMutablePerfMetric * _perfMetric;
    _CDPeriodicSchedulerJob * _periodicJob;
    double  _periodicJobInterval;
    bool  _rapportAvailablityObserverRegistered;
    _DKSyncToggle * _rapportIsAvailableToggler;
    bool  _siriSyncEnabledObserverRegistered;
    _DKSyncToggle * _someTransportIsAvailableToggler;
    _DKKnowledgeStorage * _storage;
    NSMutableSet * _streamNamesObservedForAdditions;
    NSMutableSet * _streamNamesObservedForDeletions;
    NSString * _syncActivityName;
    _DKSyncToggle * _syncEnabledToggler;
    bool  _syncPolicyChangedObserverRegistered;
    _DKSync2State * _syncState;
    <_DKSyncRemoteKnowledgeStorage> * _transportCloudDown;
    <_DKSyncRemoteKnowledgeStorage> * _transportCloudUp;
    <_DKSyncRemoteKnowledgeStorage> * _transportRapport;
    NSObject<OS_xpc_object> * _triggeredSyncActivity;
    bool  _triggeredSyncActivityRegistered;
    NSString * _triggeredSyncDelayActivityName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSUUID *deviceUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) _DKSyncType *syncType;

- (void).cxx_destruct;
- (void)_cloudIsAvailableToggle;
- (void)_cloudIsUnavailableToggle;
- (void)_cloudSyncAvailabilityDidChange:(id)arg1;
- (void)_databaseDidDeleteFromStreamNameCounts:(id)arg1;
- (void)_noTransportIsAvailableToggle;
- (void)_rapportIsAvailableToggle;
- (void)_rapportIsUnavailableToggle;
- (void)_someTransportIsAvailableToggle;
- (void)_syncDisabledToggle;
- (void)_syncEnabledToggle;
- (void)_syncPolicyDidChange:(id)arg1;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)dealloc;
- (void)deleteRemoteStateWithReply:(id /* block */)arg1;
- (id)deletedEventIDsSinceDate:(id)arg1 streamNames:(id)arg2 limit:(unsigned long long)arg3 endDate:(id*)arg4 error:(id*)arg5;
- (id)deviceUUID;
- (void)handleStatusChangeForPeer:(id)arg1 previousTransports:(long long)arg2;
- (id)initWithContext:(id)arg1;
- (void)knowledgeStorage:(id)arg1 didDeleteEventsWithStreamNameCounts:(id)arg2;
- (void)knowledgeStorage:(id)arg1 didDeleteSyncedEvents:(id)arg2;
- (void)knowledgeStorage:(id)arg1 didHaveInsertsAndDeletesWithCount:(unsigned long long)arg2;
- (void)knowledgeStorage:(id)arg1 didInsertEventsWithStreamNameCounts:(id)arg2;
- (void)knowledgeStorage:(id)arg1 didInsertSyncedEvents:(id)arg2;
- (id)policyForSyncTransportType:(long long)arg1;
- (void)setupStorage;
- (id)sortedEventsFromSyncWindows:(id)arg1 streamNames:(id)arg2 compatibility:(id)arg3 limit:(unsigned long long)arg4 fetchOrder:(long long)arg5 error:(id*)arg6;
- (id)sortedEventsFromSyncWindows:(id)arg1 streamNames:(id)arg2 limit:(unsigned long long)arg3 fetchOrder:(long long)arg4 error:(id*)arg5;
- (void)start;
- (id)syncType;
- (void)syncWithReply:(id /* block */)arg1;
- (void)synchronizeWithUrgency:(unsigned long long)arg1 client:(id)arg2 reply:(id /* block */)arg3;

@end
