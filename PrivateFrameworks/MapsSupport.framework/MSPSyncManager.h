
@interface MSPSyncManager : NSObject <SYServiceDelegate, SYSessionDelegate> {
    NSMutableArray * _pendingSyncItems;
    NSMutableArray * _pins;
    NSMutableDictionary * _pinsMap;
    bool  _resetSyncRequested;
    NSObject<OS_dispatch_queue> * _saveQueue;
    SYService * _service;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addPin:(id)arg1;
- (void)_applyAddItem:(id)arg1;
- (void)_applyDeleteItem:(id)arg1;
- (void)_applyUpdateItem:(id)arg1;
- (void)_clearAllNanoPersistableData;
- (void)_notifyObservers;
- (void)_removePin:(id)arg1;
- (void)_resumeSyncService;
- (void)_setHasChangesAvailable;
- (void)_updateFromDisk;
- (void)_updatePin:(id)arg1;
- (id)_wrapPin:(id)arg1 changeType:(long long)arg2;
- (void)completedPreparingSync;
- (void)completedSync;
- (id)init;
- (void)notifyObservers;
- (id)pins;
- (id)readPins;
- (void)service:(id)arg1 didSwitchFromPairingID:(id)arg2 toPairingID:(id)arg3;
- (bool)service:(id)arg1 startSession:(id)arg2 error:(id*)arg3;
- (void)setDroppedPin:(id)arg1;
- (void)setNeedsFullSync;
- (void)syncSession:(id)arg1 applyChanges:(id)arg2 completion:(id /* block */)arg3;
- (void)syncSession:(id)arg1 didEndWithError:(id)arg2;
- (unsigned int)syncSession:(id)arg1 enqueueChanges:(id /* block */)arg2 error:(id*)arg3;
- (bool)syncSession:(id)arg1 resetDataStoreWithError:(id*)arg2;
- (void)writePins:(id)arg1;

@end
