
@interface HACCStatusView : HUICCCapsuleButton <BCBatteryDeviceObserving, HACCContentModule> {
    BCBatteryDeviceController * _batteryController;
    BCBatteryDevice * _batteryDevice;
    CBDiscovery * _bluetoothDiscovery;
    UIImageView * _iconImageView;
    NSNumberFormatter * _numberFormatter;
    bool  _shouldAutoExpandForAvailableHAs;
    <HACCContentModuleDelegate> * delegate;
    unsigned long long  module;
}

@property (nonatomic, retain) BCBatteryDeviceController *batteryController;
@property (retain) BCBatteryDevice *batteryDevice;
@property (retain) CBDiscovery *bluetoothDiscovery;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HACCContentModuleDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImageView *iconImageView;
@property (nonatomic) unsigned long long module;
@property (nonatomic) bool providesOwnSeparator;
@property (nonatomic) bool shouldAutoExpandForAvailableHAs;
@property (readonly) Class superclass;

+ (id)_backgroundUpdateQueue;

- (void).cxx_destruct;
- (id)_productIdentifierFromBluetoothRoute:(id)arg1;
- (void)_updateBatterySubtitleLabelForDevice:(id)arg1;
- (void)_updateBatterySubtitleLabelForLeft:(double)arg1 right:(double)arg2 andAvailableEars:(int)arg3;
- (id)accessibilityLabel;
- (id)accessibilityValue;
- (id)batteryController;
- (id)batteryDevice;
- (id)bluetoothDiscovery;
- (void)connectedDevicesDidChange:(id)arg1;
- (id)contentValue;
- (id)delegate;
- (bool)enabled;
- (id)iconImageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAccessibilityElement;
- (id)liveListenImageNameFromBluetoothRoute:(id)arg1;
- (struct CGSize { double x1; double x2; })liveListenImageSize:(id)arg1 forProductID:(id)arg2;
- (unsigned long long)module;
- (void)setBatteryController:(id)arg1;
- (void)setBatteryDevice:(id)arg1;
- (void)setBluetoothDiscovery:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIconImageView:(id)arg1;
- (void)setModule:(unsigned long long)arg1;
- (void)setShouldAutoExpandForAvailableHAs:(bool)arg1;
- (bool)shouldAddSeparatorForView:(id)arg1;
- (bool)shouldAutoExpandForAvailableHAs;
- (bool)shouldAutoExpandForView:(id)arg1;
- (void)updateConstraints;
- (void)updateValue;

@end
