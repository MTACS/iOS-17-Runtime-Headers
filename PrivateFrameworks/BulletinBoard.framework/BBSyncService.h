
@interface BBSyncService : NSObject <BBSyncServiceInterface, IDSServiceDelegate> {
    <BBSyncServiceDelegate> * _delegate;
    NSMutableSet * _pendingDismissalDictionaries;
    NSMutableSet * _pendingDismissalIDs;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _queuedFeed;
    NSString * _queuedSectionID;
    NSString * _queuedUniversalSectionID;
    BSContinuousMachTimer * _sendTimer;
    IDSService * _service;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BBSyncServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long pairedDeviceCount;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_dismissalDictionaryForBulletin:(id)arg1;
- (bool)_hasDestination;
- (id)_platformFromDeviceType:(long long)arg1;
- (void)_reallyEnqueueBulletin:(id)arg1 feeds:(unsigned long long)arg2;
- (void)_reallySend;
- (void)_sendSyncMessage:(id)arg1;
- (void)_startTimerIfNecessary;
- (void)_stopTimer;
- (id)_syncAccount;
- (bool)_syncHasDefaultPairedDevice;
- (id)_syncLocalDevices;
- (void)dealloc;
- (id)delegate;
- (void)enqueueSyncedRemovalForBulletin:(id)arg1 feeds:(unsigned long long)arg2;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (unsigned long long)pairedDeviceCount;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
