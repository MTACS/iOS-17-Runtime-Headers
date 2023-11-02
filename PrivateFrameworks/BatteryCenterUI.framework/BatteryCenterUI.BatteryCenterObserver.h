
@interface BatteryCenterUI.BatteryCenterObserver : NSObject <BCBatteryDeviceObserving> {
    void batteryController;
    void dispatchQueue;
    void subject;
}

- (void).cxx_destruct;
- (void)connectedDevicesDidChange:(id)arg1;
- (id)init;

@end
