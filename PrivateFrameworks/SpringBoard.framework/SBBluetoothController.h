
@interface SBBluetoothController : NSObject {
    NSMutableArray * _devices;
    bool  _tetheringConnected;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addDeviceNotification:(id)arg1;
- (void)batteryChanged:(id)arg1;
- (int)batteryLevel;
- (void)bluetoothDeviceEndedVoiceControl:(id)arg1;
- (void)bluetoothDeviceInitiatedVoiceControl:(id)arg1;
- (bool)canReportBatteryLevel;
- (void)connectionChanged:(id)arg1;
- (void)dealloc;
- (id)deviceForAudioRoute:(id)arg1;
- (id)firstBTDeviceToReportBatteryLevel;
- (void)iapDeviceChanged:(id)arg1;
- (void)noteDevicesChanged;
- (void)removeDeviceNotification:(id)arg1;
- (void)startWatchingForDevices;
- (void)stopWatchingForDevices;
- (bool)tetheringConnected;
- (void)updateBattery;
- (void)updateTetheringConnected;

@end
