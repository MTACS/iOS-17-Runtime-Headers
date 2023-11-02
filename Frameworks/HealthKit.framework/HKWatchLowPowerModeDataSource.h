
@interface HKWatchLowPowerModeDataSource : HKObserverBridge {
    NPSDomainAccessor * _carouselDomainAccessor;
    HKDarwinNotificationDataSource * _darwinNotificationDataSource;
    HKNanoRegistryPairingAndSwitchingNotificationDataSource * _devicePairingAndSwitchingDataSource;
}

@property (nonatomic, readonly) NPSDomainAccessor *carouselDomainAccessor;
@property (nonatomic, readonly) HKDarwinNotificationDataSource *darwinNotificationDataSource;
@property (nonatomic, readonly) HKNanoRegistryPairingAndSwitchingNotificationDataSource *devicePairingAndSwitchingDataSource;

- (void).cxx_destruct;
- (id)carouselDomainAccessor;
- (id)darwinNotificationDataSource;
- (id)devicePairingAndSwitchingDataSource;
- (id)init;
- (id)initWithCarouselDomainAccessor:(id)arg1;
- (id)initWithDarwinNotificationDataSource:(id)arg1 devicePairingAndSwitchingNotificationDataSource:(id)arg2;
- (id)initWithDarwinNotificationDataSource:(id)arg1 devicePairingAndSwitchingNotificationDataSource:(id)arg2 carouselDomainAccessor:(id)arg3;
- (bool)isWatchLowPowerModeEnabled;
- (id)makeAndRegisterBridgedObserverForKey:(id)arg1 handle:(id)arg2;
- (void)registerObserver:(id)arg1 onLowPowerModeChange:(id /* block */)arg2;
- (void)unregisterBridgedObserver:(id)arg1 forKey:(id)arg2;
- (void)unregisterObserver:(id)arg1;

@end
