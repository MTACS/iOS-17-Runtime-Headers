
@interface DNDSMeDeviceService : NSObject {
    <DNDSBackingStore> * _backingStore;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    NSMutableSet * _listeners;
    DNDMeDeviceState * _meDeviceState;
    DNDSMeDeviceStore * _store;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _storeLock;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly, copy) DNDMeDeviceState *meDeviceState;

- (void).cxx_destruct;
- (void)_loadDataFromBackingStore;
- (id)_queue_computeMeDeviceStateForDevices:(id)arg1;
- (void)_queue_fetchAllDevices;
- (void)_queue_processDevices:(id)arg1 error:(id)arg2;
- (bool)_queue_saveDataToBackingStoreWithError:(id*)arg1;
- (bool)_saveDataToBackingStoreWithError:(id*)arg1;
- (void)addListener:(id)arg1;
- (void)devicesChanged;
- (id)init;
- (void)meDeviceChanged;
- (id)meDeviceState;
- (void)removeListener:(id)arg1;

@end
