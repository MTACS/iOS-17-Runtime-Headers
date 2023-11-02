
@interface AMUIBatteryChargingViewController : UIViewController <BCBatteryDeviceObserving> {
    BCBatteryDeviceController * _batteryController;
    BSAbsoluteMachTimer * _chargingAnimationDismissalTimer;
    AMUIBatteryChargingView * _chargingView;
}

@property (nonatomic, retain) BCBatteryDeviceController *batteryController;
@property (nonatomic, retain) BSAbsoluteMachTimer *chargingAnimationDismissalTimer;
@property (nonatomic, retain) AMUIBatteryChargingView *chargingView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_createNewChargingViewIfNecessary;
- (id)_internalBattery;
- (void)_updateChargingViewIfNecessary;
- (void)_updateChargingViewLegibility;
- (id)batteryController;
- (id)chargingAnimationDismissalTimer;
- (id)chargingView;
- (void)connectedDevicesDidChange:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)performChargingAnimation:(id /* block */)arg1;
- (void)setBatteryController:(id)arg1;
- (void)setChargingAnimationDismissalTimer:(id)arg1;
- (void)setChargingView:(id)arg1;
- (void)viewDidLoad;

@end
