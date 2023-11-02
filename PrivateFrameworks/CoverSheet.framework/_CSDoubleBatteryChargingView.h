
@interface _CSDoubleBatteryChargingView : CSBatteryChargingView {
    UIView * _batteryContainerView;
    _UIBackdropView * _externalBatteryBlurView;
    UIView * _externalBatteryContainerView;
    CSBatteryFillView * _externalBatteryFillView;
    SBUILegibilityLabel * _externalChargePercentLabel;
    UIImageView * _externalChargingIndicator;
    SBUILegibilityLabel * _externalChargingNameLabel;
    _UIBackdropView * _internalBatteryBlurView;
    UIView * _internalBatteryContainerView;
    CSBatteryFillView * _internalBatteryFillView;
    SBUILegibilityLabel * _internalChargePercentLabel;
    UIImageView * _internalChargingIndicator;
    SBUILegibilityLabel * _internalChargingNameLabel;
}

- (void).cxx_destruct;
- (double)_batteryTopPadding;
- (id)_chargePercentFont;
- (double)_chargingBoltTopOffset;
- (double)_deviceChargeBaselineOffset;
- (double)_deviceNameBaselineOffset;
- (double)_spaceBetweenBatteryImages;
- (long long)batteryCount;
- (bool)batteryVisible;
- (double)desiredVisibilityDuration;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)performAnimation:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)setBatteryVisible:(bool)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setPrimaryBatteryText:(id)arg1 forBattery:(id)arg2;
- (void)setSecondaryBatteryText:(id)arg1 forBattery:(id)arg2;

@end
