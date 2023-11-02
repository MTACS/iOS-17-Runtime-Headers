
@interface BCUIBatteryAvocadoViewController : UIViewController <BCBatteryDeviceObserving> {
    BCUIAvocadoViewController * _avocadoViewController;
    BCBatteryDeviceController * _batteryDeviceController;
    NSString * _debugIdentifier;
    NSObject<OS_dispatch_queue> * _queue;
    double  _scaleFactor;
    long long  _widgetFamily;
}

@property (getter=_avocadoViewController, setter=_setAvocadoViewController:, nonatomic, retain) BCUIAvocadoViewController *avocadoViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSString *debugIdentifier;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double scaleFactor;
@property (readonly) Class superclass;
@property (nonatomic) long long widgetFamily;

+ (id)imageForIconInfo:(struct BCUIIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; })arg1;
+ (void)initialize;

- (void).cxx_destruct;
- (id)_avocadoViewController;
- (bool)_canShowWhileLocked;
- (void)_configureAvocadoViewControllerIfNecessary;
- (void)_setAvocadoViewController:(id)arg1;
- (id)_synthesizedDebugIdentifier;
- (void)connectedDevicesDidChange:(id)arg1;
- (id)debugIdentifier;
- (double)scaleFactor;
- (void)setDebugIdentifier:(id)arg1;
- (void)setScaleFactor:(double)arg1;
- (void)setWidgetFamily:(long long)arg1;
- (void)setWidgetFamliy:(long long)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (long long)widgetFamily;

@end
