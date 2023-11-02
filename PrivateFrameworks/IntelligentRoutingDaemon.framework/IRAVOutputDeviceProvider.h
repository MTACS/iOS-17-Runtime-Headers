
@interface IRAVOutputDeviceProvider : NSObject {
    NSSet * _availableOutputDevices;
    NSSet * _cachedDevices;
    IRAVOutputDeviceDiscoverySessionController * _discoverySessionController;
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSSet *availableOutputDevices;
@property (nonatomic, retain) NSSet *cachedDevices;
@property (nonatomic, retain) IRAVOutputDeviceDiscoverySessionController *discoverySessionController;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)_logDevicesString:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)availableOutputDevices;
- (id)cachedDevices;
- (void)didUpdateAVOutputDevices:(id)arg1;
- (id)discoverySessionController;
- (id)init;
- (void)logActiveDevices;
- (id)observers;
- (id)queue;
- (void)removeObserver:(id)arg1;
- (void)setCachedDevices:(id)arg1;
- (void)setDiscoverySessionController:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setQueue:(id)arg1;

@end
