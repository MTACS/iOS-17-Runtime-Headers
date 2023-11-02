
@interface _BCPowerSourceController : NSObject <BCBatteryDeviceObservable> {
    int  _accAttachNotifyToken;
    int  _accPowerSourceNotifyToken;
    int  _accPowerSourceTimeRemainingNotifyToken;
    bool  _lowPowerModeActive;
    int  _lowPowerModeNotifyToken;
    NSMapTable * _observersToQueues;
    int  _powerSourceBatteryChangeNotifyToken;
    int  _powerSourceTimeRemainingNotifyToken;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly, copy) NSArray *connectedDevices;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (unsigned long long)_accessoryCategoryFromPowerSourceAccessoryCategory:(id)arg1 partType:(unsigned long long)arg2 transportType:(long long)arg3 vendor:(long long)arg4 productIdentifier:(long long)arg5;
- (void)_beginPowerSourceObservingIfNecessary;
- (id)_deviceByCoalescingDevice:(id)arg1;
- (int)_displayChargePercentForCurrentCapacity:(id)arg1 andMaxCapacity:(id)arg2 updateZeroValue:(bool)arg3;
- (void)_endPowerSourceObserving;
- (void)_handleLowPowerModeChanged:(int)arg1;
- (id)_identifierFromPowerSourceDescription:(id)arg1;
- (bool)_isDevicePartOfPair:(id)arg1;
- (bool)_isLowPowerModeActive;
- (long long)_lowBatteryLevelForCurrentDevice;
- (long long)_lowBatteryLevelForVendor:(long long)arg1 accessoryCategory:(unsigned long long)arg2 transportType:(long long)arg3;
- (id)_nameForCurrentDevice;
- (id)_nameForVendor:(long long)arg1 accessoryCategory:(unsigned long long)arg2 name:(id)arg3 partName:(id)arg4 isInternal:(bool)arg5;
- (void)_notifyObserver:(id)arg1 block:(id /* block */)arg2 queue:(id)arg3;
- (void)_notifyObserversWithBlock:(id /* block */)arg1;
- (id)_orderedDevicesFromPowerSourcesBlob:(void*)arg1 powerSourcesList:(struct __CFArray { }*)arg2;
- (unsigned long long)_partFromPowerSourcePartIdentifier:(id)arg1;
- (long long)_powerSourceStateFromPowerSourceStateString:(id)arg1;
- (void)_queryConnectedDevices;
- (int)_registerForNotification:(const char *)arg1 token:(int*)arg2 queue:(id)arg3 handler:(id /* block */)arg4;
- (int)_registerForPowerSourceChangeNotification:(const char *)arg1 token:(int*)arg2 queue:(id)arg3;
- (bool)_shouldCoalesceDevices:(id)arg1 minimumPercentCharge:(long long*)arg2;
- (bool)_shouldConsiderDeviceWithPowerSourceDescription:(id)arg1;
- (long long)_transportTypeFromPowerSourceTransportTypeString:(id)arg1;
- (void)_updateLowPowerModeState;
- (long long)_vendorFromPowerSourceDescriptionVendorIdentifier:(id)arg1 transportType:(long long)arg2;
- (void)addBatteryDeviceObserver:(id)arg1 queue:(id)arg2;
- (id)connectedDevices;
- (void)dealloc;
- (id)init;
- (void)removeBatteryDeviceObserver:(id)arg1;

@end
