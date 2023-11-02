
@interface SBLockScreenBatteryChargingViewController : CSCoverSheetViewControllerBase <BCBatteryDeviceObserving> {
    BCBatteryDeviceController * _batteryDeviceController;
    CSBatteryChargingView * _chargingView;
    NSMutableArray * _connectedDevices;
    <SBLockScreenBatteryChargingViewControllerDelegate> * _delegate;
    bool  _shouldDisplayBattery;
    NSTimer * _visibilityTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBLockScreenBatteryChargingViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_clearVisibilityTimer;
- (void)_visibilityTimerFired:(id)arg1;
- (bool)batteryVisible;
- (id)chargingView;
- (void)connectedDevicesDidChange:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initForDisplayOfBattery:(bool)arg1;
- (void)loadView;
- (void)prepareForDismissalWithAnimation:(bool)arg1;
- (void)presentWithAnimation:(bool)arg1;
- (long long)presentationStyle;
- (void)setDelegate:(id)arg1;
- (void)showChargeLevelWithBatteryVisible:(bool)arg1;

@end
