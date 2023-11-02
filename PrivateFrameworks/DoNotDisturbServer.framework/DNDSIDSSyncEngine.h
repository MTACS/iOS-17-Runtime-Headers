
@interface DNDSIDSSyncEngine : NSObject <DNDSIDSSyncEngineSynchronizing, DNDSKeybagStateObserver, DNDSSyncServiceDelegate, DNDSSysdiagnoseDataProvider> {
    id /* block */  _didFireMetadataExpirationTimer;
    id /* block */  _didReceiveUnlockMessage;
    NSMutableDictionary * _inflightDateByRequestIdentifier;
    unsigned long long  _inflightExpirationTime;
    NSObject<OS_dispatch_source> * _inflightExpirationTimer;
    NSMutableSet * _inflightMetadata;
    NSMutableDictionary * _inflightMetadataByRequestIdentifier;
    <DNDSKeybagStateProviding> * _keybag;
    <DNDSIDSSyncEngineMetadataStoring> * _metadataStore;
    DNDSPairedDevice * _pairedDevice;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _retriesAvailable;
    NSObject<OS_dispatch_source> * _retryTimer;
    unsigned long long  _role;
    NSMapTable * _sourcesByZone;
    <DNDSSyncService> * _syncService;
    unsigned long long  _syncState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long pairSyncState;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *sysdiagnoseDataIdentifier;

- (void).cxx_destruct;
- (bool)_queue_cancelInflightExpirationTimer;
- (bool)_queue_cancelRetryTimer;
- (id)_queue_dataSourceForZone:(id)arg1;
- (double)_queue_earliestExpirationTimeSinceNowForInflightMetadata;
- (void)_queue_handleAckMessage:(id)arg1 fromPairedDeviceIdentifier:(id)arg2;
- (void)_queue_handleMessage:(id)arg1 fromPairedDeviceIdentifier:(id)arg2;
- (void)_queue_handleReplaceMessage:(id)arg1 fromPairedDeviceIdentifier:(id)arg2;
- (void)_queue_handleResyncMessage:(id)arg1 fromPairedDeviceIdentifier:(id)arg2;
- (void)_queue_handleUnlockMessage:(id)arg1 fromPairedDeviceIdentifier:(id)arg2;
- (void)_queue_handleUpdateMessage:(id)arg1 fromPairedDeviceIdentifier:(id)arg2;
- (void)_queue_removeAllInflightMetadata;
- (void)_queue_removeAllInflightMetadataWithExpirationDate:(id)arg1;
- (void)_queue_resetRetryTimer;
- (void)_queue_restartInflightExpirationTimer;
- (void)_queue_sendAckWithMetadata:(id)arg1 forAction:(id)arg2 toDeviceWithIdentifier:(id)arg3;
- (void)_queue_sendModifiedRecordIDs:(id)arg1 deletedRecordIDs:(id)arg2 toDeviceWithIdentifier:(id)arg3;
- (void)_queue_sendResyncMessageToDeviceWithIdentifier:(id)arg1;
- (void)_queue_sendUnlockMessageToDeviceWithIdentifier:(id)arg1;
- (void)_queue_startInflightExpirationTimer;
- (void)_queue_startRetryTimer;
- (void)_queue_syncDataSourcesToDeviceWithIdentifier:(id)arg1;
- (void)_queue_validate;
- (void)addRecordIDsToSave:(id)arg1 recordIDsToDelete:(id)arg2;
- (id)inflightMetadata;
- (id)initWithMetadataStore:(id)arg1 syncService:(id)arg2 keybag:(id)arg3;
- (id)initWithMetadataStore:(id)arg1 syncService:(id)arg2 keybag:(id)arg3 role:(unsigned long long)arg4 syncState:(unsigned long long)arg5 inflightExpirationTime:(unsigned long long)arg6;
- (void)keybagDidUnlockForTheFirstTime:(id)arg1;
- (unsigned long long)pairSyncState;
- (void)setDataSource:(id)arg1 forZone:(id)arg2;
- (void)setDidFireMetadataExpirationTimer:(id /* block */)arg1;
- (void)setDidReceiveUnlockMessage:(id /* block */)arg1;
- (void)setPairedDevice:(id)arg1 syncEnabled:(bool)arg2;
- (void)sync;
- (void)syncService:(id)arg1 didReceiveMessage:(id)arg2 withVersionNumber:(unsigned long long)arg3 messageType:(id)arg4 fromDeviceIdentifier:(id)arg5;
- (void)syncService:(id)arg1 didSendWithRequestIdentifier:(id)arg2 withSuccess:(bool)arg3 error:(id)arg4;
- (bool)syncService:(id)arg1 shouldAcceptIncomingMessage:(id)arg2 withVersionNumber:(unsigned long long)arg3 messageType:(id)arg4 fromDeviceIdentifier:(id)arg5;
- (id)sysdiagnoseDataForDate:(id)arg1 redacted:(bool)arg2;
- (id)sysdiagnoseDataIdentifier;
- (void)validate;

@end
