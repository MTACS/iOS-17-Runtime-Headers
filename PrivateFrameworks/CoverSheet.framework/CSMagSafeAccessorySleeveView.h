
@interface CSMagSafeAccessorySleeveView : CSMagSafeAccessoryView {
    CALayer * _backgroundColorLayer;
    CSBatteryChargingView * _batteryChargingView;
    BCBatteryDevice * _batteryDevice;
    bool  _charging;
    UIImageView * _chargingBoltImageView;
    SBFLockScreenDateView * _dateView;
    SBFLockScreenDateView * _secondaryDateView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _visibleWindowFrame;
}

@property (nonatomic, retain) CALayer *backgroundColorLayer;
@property (nonatomic, retain) CSBatteryChargingView *batteryChargingView;
@property (nonatomic, retain) BCBatteryDevice *batteryDevice;
@property (nonatomic) bool charging;
@property (nonatomic, retain) UIImageView *chargingBoltImageView;
@property (nonatomic, retain) SBFLockScreenDateView *dateView;
@property (nonatomic, retain) SBFLockScreenDateView *secondaryDateView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleWindowFrame;

- (void).cxx_destruct;
- (id)_batteryChargingViewWithChargingInfo:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_chargingViewFrame;
- (void)_dismissAnimation;
- (void)_presentAnimation;
- (void)_runAnimationWithType:(unsigned long long)arg1;
- (double)animationDurationBeforeDismissal;
- (id)backgroundColorLayer;
- (id)batteryChargingView;
- (id)batteryDevice;
- (bool)charging;
- (id)chargingBoltImageView;
- (id)dateView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)performAnimation:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (id)secondaryDateView;
- (void)setBackgroundColorLayer:(id)arg1;
- (void)setBatteryChargingView:(id)arg1;
- (void)setBatteryDevice:(id)arg1;
- (void)setCharging:(bool)arg1;
- (void)setChargingBoltImageView:(id)arg1;
- (void)setDateView:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setSecondaryDateView:(id)arg1;
- (void)setVisibleWindowFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)transitionChargingViewVisible:(bool)arg1 chargingInfo:(id)arg2;
- (void)updateDateViews;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleWindowFrame;

@end
