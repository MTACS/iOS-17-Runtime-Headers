
@interface DNDSModernAssertionSyncManager : NSObject <DNDSAssertionSyncManager, DNDSSyncServiceDelegate, DNDSSysdiagnoseDataProvider> {
    DNDSClientDetailsProvider * _clientDetailsProvider;
    <DNDSSyncService> * _cloudSyncService;
    <DNDSAssertionSyncManagerDataSource> * _dataSource;
    <DNDSAssertionSyncManagerDelegate> * _delegate;
    NSObject<OS_dispatch_source> * _fuzzTimer;
    <DNDSSyncService> * _localSyncService;
    DNDSModernAssertionSyncMetadataStore * _metadata;
    NSObject<DNDSBackingStore> * _metadataBackingStore;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _timerCurrentDelay;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _timerLock;
    NSMutableSet * _timerQueuedDevices;
    bool  _timerQueuedForceUpdate;
    NSObject<OS_os_transaction> * _timerQueuedTransaction;
}

@property (nonatomic) <DNDSAssertionSyncManagerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DNDSAssertionSyncManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *sysdiagnoseDataIdentifier;

- (void).cxx_destruct;
- (void)_loadMetadataFromBackingStore;
- (bool)_maintainMetadataBackingStore;
- (void)_queue_handleDidSendRequestIdentifier:(id)arg1 withSuccess:(bool)arg2 error:(id)arg3;
- (void)_queue_handleMessage:(id)arg1 withVersionNumber:(unsigned long long)arg2 fromDeviceIdentifier:(id)arg3;
- (void)_queue_sendStateSnapshotToPairedDevices:(id)arg1 force:(bool)arg2;
- (void)_queue_updateDevices;
- (bool)_saveMetadataToBackingStore;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (void)forceUpdateAllDevices;
- (id)initWithClientDetailsProvider:(id)arg1 localSyncService:(id)arg2 cloudSyncService:(id)arg3;
- (void)resume;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)syncService:(id)arg1 didReceiveMessage:(id)arg2 withVersionNumber:(unsigned long long)arg3 messageType:(id)arg4 fromDeviceIdentifier:(id)arg5;
- (void)syncService:(id)arg1 didSendWithRequestIdentifier:(id)arg2 withSuccess:(bool)arg3 error:(id)arg4;
- (bool)syncService:(id)arg1 shouldAcceptIncomingMessage:(id)arg2 withVersionNumber:(unsigned long long)arg3 messageType:(id)arg4 fromDeviceIdentifier:(id)arg5;
- (id)sysdiagnoseDataForDate:(id)arg1 redacted:(bool)arg2;
- (id)sysdiagnoseDataIdentifier;
- (void)updateDevices:(id)arg1;
- (void)updateDevices:(id)arg1 force:(bool)arg2 shouldFuzz:(bool)arg3;
- (void)updateForModeAssertionUpdateResult:(id)arg1;
- (void)updateForStateUpdate:(id)arg1;

@end
