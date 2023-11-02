
@interface SBSystemStatusBatteryDataProvider : NSObject <BCBatteryDeviceObserving, BSInvalidatable> {
    STBatteryStatusDomainPublisher * _batteryDataPublisher;
    BCBatteryDeviceController * _batteryDeviceController;
    bool  _shouldExposeNotChargingState;
}

@property (nonatomic, readonly) STBatteryStatusDomainPublisher *batteryDataPublisher;
@property (nonatomic, readonly) BCBatteryDeviceController *batteryDeviceController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldExposeNotChargingState;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_isInNotChargingState;
- (void)_noteNotChargingStatusChanged;
- (void)_registerForNotifications;
- (void)_updateData;
- (void)_updateShouldExposeNotChargingState;
- (id)batteryDataPublisher;
- (id)batteryDeviceController;
- (void)connectedDevicesDidChange:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void)setShouldExposeNotChargingState:(bool)arg1;
- (bool)shouldExposeNotChargingState;

@end
