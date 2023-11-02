
@interface BCUIAvocadoViewController : UIViewController {
    NSMutableArray * _batteryDeviceViews;
    bool  _batteryDeviceViewsValid;
    NSArray * _batteryDevices;
    NSString * _debugIdentifier;
    double  _scaleFactor;
}

@property (getter=_batteryDeviceViews, nonatomic, readonly, copy) NSMutableArray *batteryDeviceViews;
@property (nonatomic, copy) NSArray *batteryDevices;
@property (nonatomic, copy) NSString *debugIdentifier;
@property (getter=_includeEmptyDevices, nonatomic, readonly) bool includeEmptyDevices;
@property (getter=_maximumNumberOfBatteryDeviceViews, nonatomic, readonly) unsigned long long maximumNumberOfBatteryDeviceViews;
@property (nonatomic) double scaleFactor;

+ (id)avocadoViewControllerForWidgetFamily:(long long)arg1;
+ (void)initialize;

- (void).cxx_destruct;
- (id)_batteryDeviceViews;
- (bool)_canShowWhileLocked;
- (double)_columnWidthForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 andMaxNumViews:(double)arg2;
- (void)_configureBatteryDeviceView:(id)arg1 withBatteryDevice:(id)arg2 transitionCoordinator:(id)arg3;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (bool)_includeEmptyDevices;
- (unsigned long long)_maximumNumberOfBatteryDeviceViews;
- (id)_newBatteryDeviceView;
- (id)_synthesizedDebugIdentifier;
- (void)_validateBatteryDeviceViewsIfNecessary;
- (id)batteryDevices;
- (id)debugIdentifier;
- (void)invalidateBatteryDeviceState;
- (double)scaleFactor;
- (void)setBatteryDevices:(id)arg1;
- (void)setDebugIdentifier:(id)arg1;
- (void)setScaleFactor:(double)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
