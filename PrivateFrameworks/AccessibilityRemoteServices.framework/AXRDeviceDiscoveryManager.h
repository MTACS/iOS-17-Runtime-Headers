
@interface AXRDeviceDiscoveryManager : NSObject {
    RPCompanionLinkClient * _companionLinkClient;
    NSObject<OS_dispatch_queue> * _deviceQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _devicesLock;
    NSMutableArray * _discoveredDevices;
    NSHashTable * _observers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _observersLock;
    IDSService * _service;
}

@property (nonatomic, retain) RPCompanionLinkClient *companionLinkClient;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } devicesLock;
@property (nonatomic, retain) NSMutableArray *discoveredDevices;
@property (nonatomic, retain) IDSService *service;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_discoveredDevicesChanged;
- (void)_enumerateObservers:(id /* block */)arg1;
- (unsigned long long)_indexOfDeviceWithEffectiveIdentifier:(id)arg1;
- (id)_init;
- (void)addObserver:(id)arg1;
- (id)cachedDiscoveredDevices;
- (id)companionLinkClient;
- (struct os_unfair_lock_s { unsigned int x1; })devicesLock;
- (id)discoveredDevices;
- (id)mineDevices;
- (void)removeObserver:(id)arg1;
- (id)service;
- (void)setCompanionLinkClient:(id)arg1;
- (void)setDevicesLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setDiscoveredDevices:(id)arg1;
- (void)setService:(id)arg1;

@end
