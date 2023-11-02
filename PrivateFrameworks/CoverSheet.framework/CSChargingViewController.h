
@interface CSChargingViewController : CSCoverSheetViewControllerBase <BCBatteryDeviceObserving> {
    BCBatteryDeviceController * _batteryController;
    CSBatteryChargingInfo * _chargingInfo;
    CSBatteryChargingView * _chargingView;
    NSMutableSet * _displayedBatteryDevices;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_createNewChargingViewForDoubleBattery:(id)arg1;
- (void)_updateChargingViewIfNecessary;
- (void)_updateChargingViewLegibility;
- (void)aggregateAppearance:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
- (void)connectedDevicesDidChange:(id)arg1;
- (double)durationBeforeDismissal;
- (bool)handleEvent:(id)arg1;
- (id)init;
- (id)initWithChargingInfo:(id)arg1;
- (void)performDismissalAnimationWithCompletionHandler:(id /* block */)arg1;
- (long long)presentationPriority;
- (long long)presentationStyle;
- (long long)presentationType;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
