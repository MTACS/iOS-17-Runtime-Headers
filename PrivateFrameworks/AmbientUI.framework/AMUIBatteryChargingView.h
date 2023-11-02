
@interface AMUIBatteryChargingView : UIView {
    _UILegibilitySettings * _legibilitySettings;
}

@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;

+ (id)batteryChargingRingViewWithConfiguration:(id)arg1;

- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)legibilitySettings;
- (void)presentChargingViewWithCompletionHandler:(id /* block */)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)updateWithBattery:(id)arg1;

@end
