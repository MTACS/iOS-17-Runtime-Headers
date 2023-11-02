
@interface SBLoginAppContainerView : UIView {
    CSBatteryChargingView * _batteryChargingView;
    NSMutableSet * _contentHiddenRequesters;
    UIView * _contentView;
    SBLockScreenDeviceInformationTextView * _deviceInformationTextView;
    _UILegibilitySettings * _legibilitySettings;
    UIView * _pluginView;
    SBLoginAppContainerOverlayWrapperView * _thermalWarningView;
}

@property (nonatomic, retain) CSBatteryChargingView *batteryChargingView;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic, retain) SBLockScreenDeviceInformationTextView *deviceInformationTextView;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, retain) UIView *pluginView;
@property (nonatomic, retain) SBLoginAppContainerOverlayWrapperView *thermalWarningView;

- (void).cxx_destruct;
- (void)_showOrHidePluginViewAppropriately;
- (id)batteryChargingView;
- (id)contentView;
- (id)deviceInformationTextView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)legibilitySettings;
- (id)pluginView;
- (void)setBatteryChargingView:(id)arg1;
- (void)setContentHidden:(bool)arg1 forRequester:(id)arg2;
- (void)setContentView:(id)arg1;
- (void)setDeviceInformationTextView:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setPluginView:(id)arg1;
- (void)setThermalWarningView:(id)arg1;
- (id)thermalWarningView;

@end
