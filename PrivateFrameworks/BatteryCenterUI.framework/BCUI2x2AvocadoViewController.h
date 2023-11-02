
@interface BCUI2x2AvocadoViewController : BCUIAvocadoViewController

- (void)_configureBatteryDeviceView:(id)arg1 withBatteryDevice:(id)arg2 transitionCoordinator:(id)arg3;
- (bool)_includeEmptyDevices;
- (unsigned long long)_maximumNumberOfBatteryDeviceViews;
- (id)_newBatteryDeviceView;
- (void)viewWillLayoutSubviews;

@end
