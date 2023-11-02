
@protocol BCBatteryDeviceObservable <NSObject>

@required

- (void)addBatteryDeviceObserver:(id <BCBatteryDeviceObserving>)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
- (void)removeBatteryDeviceObserver:(id <BCBatteryDeviceObserving>)arg1;

@end
