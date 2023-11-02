
@interface HKNanoRegistryPairingAndSwitchingNotificationDataSource : HKObserverBridge {
    NRPairedDeviceRegistry * _pairedDeviceRegistry;
}

@property (nonatomic, readonly) NRPairedDeviceRegistry *pairedDeviceRegistry;

- (void).cxx_destruct;
- (id)_notificationCenter;
- (id)_pairingChangeNotifications;
- (id)initWithPairedDeviceRegistry:(id)arg1;
- (id)makeAndRegisterBridgedObserverForKey:(id)arg1 handle:(id)arg2;
- (id)pairedDeviceRegistry;
- (void)registerObserverForDevicePairingChanges:(id)arg1 block:(id /* block */)arg2;
- (void)unregisterBridgedObserver:(id)arg1 forKey:(id)arg2;
- (void)unregisterObserverForDevicePairingChanges:(id)arg1;

@end
