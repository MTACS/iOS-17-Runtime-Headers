
@interface SBBluetoothAccessoryBatteryMonitor : NSObject <BCBatteryDeviceObserving> {
    NSMutableSet * _accessoryNamesInLowPower;
    BCBatteryDeviceController * _batteryDeviceController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_popLowPowerAlertForAccessoryIfNecessary:(id)arg1;
- (void)connectedDevicesDidChange:(id)arg1;
- (id)description;
- (id)descriptionBuilder;
- (id)init;

@end
