
@interface MTSyncServiceManager : NSObject <MTAgentDiagnosticDelegate, MTSyncManager, MTSyncServiceDelegate, MTSyncStatusProviderDelegate> {
    <NAScheduler> * _serializer;
    bool  _started;
    MTSyncChangeQueue * _syncChangeQueue;
    <MTSyncDataModel> * _syncDataModel;
    MTMetrics * _syncMetrics;
    <MTSyncService> * _syncService;
    <MTSyncStatusProvider> * _syncStatusProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <NAScheduler> *serializer;
@property (nonatomic) bool started;
@property (readonly) Class superclass;
@property (nonatomic, retain) MTSyncChangeQueue *syncChangeQueue;
@property (nonatomic) <MTSyncDataModel> *syncDataModel;
@property (nonatomic, retain) MTMetrics *syncMetrics;
@property (nonatomic, retain) <MTSyncService> *syncService;
@property (nonatomic, retain) <MTSyncStatusProvider> *syncStatusProvider;

- (void).cxx_destruct;
- (void)applyChange:(id)arg1;
- (void)checkForPendingChanges;
- (id)gatherDiagnostics;
- (id)initWithSyncService:(id)arg1 syncStatusProvider:(id)arg2 syncDataModel:(id)arg3 syncMetrics:(id)arg4;
- (id)initWithSyncService:(id)arg1 syncStatusProvider:(id)arg2 syncDataModel:(id)arg3 syncMetrics:(id)arg4 syncChangeStore:(id)arg5;
- (id)pendingChanges;
- (void)pendingChangesSent:(id)arg1;
- (void)printDiagnostics;
- (id)requestSync:(unsigned long long)arg1;
- (void)resetDataStore;
- (id)serializer;
- (void)setSerializer:(id)arg1;
- (void)setStarted:(bool)arg1;
- (void)setSyncChangeQueue:(id)arg1;
- (void)setSyncDataModel:(id)arg1;
- (void)setSyncMetrics:(id)arg1;
- (void)setSyncService:(id)arg1;
- (void)setSyncStatusProvider:(id)arg1;
- (void)startSyncService;
- (bool)started;
- (void)stopSyncService;
- (void)syncChange:(id)arg1;
- (id)syncChangeQueue;
- (id)syncDataModel;
- (id)syncMetrics;
- (id)syncService;
- (id)syncStatusProvider;
- (void)syncStatusProvider:(id)arg1 didChangeSyncStatus:(unsigned long long)arg2;

@end
