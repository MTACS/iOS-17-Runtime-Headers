
@interface _CSSingleBatteryChargingView : CSBatteryChargingView {
    _UIBackdropView * _batteryBlurView;
    NSArray * _batteryConstraints;
    UIView * _batteryContainerView;
    CSBatteryFillView * _batteryFillView;
    UIImage * _batteryImage;
    struct CGSize { 
        double width; 
        double height; 
    }  _batteryImageSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _batterySize;
    NSLayoutConstraint * _batteryTopOffset;
    UIImage * _boltImage;
    UIImageView * _boltImageView;
    SBUILegibilityLabel * _chargePercentLabel;
    bool  _horizontalLayoutNeeded;
    bool  _includesBoltImage;
}

@property (nonatomic) struct CGSize { double x1; double x2; } batterySize;
@property (nonatomic) bool horizontalLayoutNeeded;
@property (nonatomic) bool includesBoltImage;

- (void).cxx_destruct;
- (double)_batteryNoseOffset;
- (id)_chargePercentFont;
- (void)_layoutBattery;
- (void)_layoutChargePercentLabel;
- (long long)batteryCount;
- (struct CGSize { double x1; double x2; })batterySize;
- (bool)batteryVisible;
- (double)desiredVisibilityDuration;
- (bool)horizontalLayoutNeeded;
- (bool)includesBoltImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)performAnimation:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)setBatterySize:(struct CGSize { double x1; double x2; })arg1;
- (void)setBatteryVisible:(bool)arg1;
- (void)setHorizontalLayoutNeeded:(bool)arg1;
- (void)setIncludesBoltImage:(bool)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setPrimaryBatteryText:(id)arg1 forBattery:(id)arg2;

@end
