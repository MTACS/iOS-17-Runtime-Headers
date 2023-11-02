
@interface SBSlideUpAppGrabberView : UIView <SBUILegibility, _SBFVibrantView> {
    UIView * _backgroundView;
    UIImage * _grabberImage;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _hitTestEdgeInsets;
    _UILegibilitySettings * _legibilitySettings;
    SBUILegibilityView * _legibilityView;
    SBSaturatedIconView * _saturatedIconView;
    double  _strength;
    UIView * _tintView;
    bool  _vibrancyAllowed;
    _SBFVibrantSettings * _vibrantSettings;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } hitTestEdgeInsets;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) double strength;
@property (readonly) Class superclass;
@property (getter=isVibrancyAllowed, nonatomic) bool vibrancyAllowed;
@property (nonatomic, retain) _SBFVibrantSettings *vibrantSettings;

- (void).cxx_destruct;
- (id)_lazyLegibilityView;
- (bool)_shouldUseVibrancy;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })hitTestEdgeInsets;
- (id)initWithAdditionalTopPadding:(bool)arg1 invertVerticalInsets:(bool)arg2;
- (bool)isVibrancyAllowed;
- (void)layoutSubviews;
- (id)legibilitySettings;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setAppStyleGrabberImage:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setGrabberImageFromAppWithBundleIdentifier:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setStrength:(double)arg1;
- (void)setVibrancyAllowed:(bool)arg1;
- (void)setVibrantSettings:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (double)strength;
- (id)vibrantSettings;

@end
