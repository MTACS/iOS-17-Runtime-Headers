
@interface HKBluetoothDeviceDataSource : HKObserverBridge {
    Class  _DiscoveryType;
    <HKCBDiscovery> * _discovery;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    <HKCBDiscovery> * _lock_discovery;
    bool  _lock_isDiscoveryActive;
}

@property (nonatomic, readonly) <HKCBDiscovery> *discovery;

- (void).cxx_destruct;
- (void)dealloc;
- (id)discovery;
- (id)init;
- (id)initWithDiscoveryType:(Class)arg1;
- (id)makeAndRegisterBridgedObserverForKey:(id)arg1 handle:(id)arg2;
- (id)pairedDevicesWithError:(id*)arg1;
- (void)registerObserverForDevicePairingChanges:(id)arg1 updateHandler:(id /* block */)arg2;
- (void)unregisterBridgedObserver:(id)arg1 forKey:(id)arg2;
- (void)unregisterObserverForDevicePairingChanges:(id)arg1;

@end
