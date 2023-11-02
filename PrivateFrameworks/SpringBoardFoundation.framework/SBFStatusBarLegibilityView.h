
@interface SBFStatusBarLegibilityView : UIView <SBUILegibility> {
    bool  _forceLegibilityGradientHidden;
    UIImageView * _leftCornerView;
    _UILegibilitySettings * _legibilitySettings;
    UIImageView * _rightCornerView;
    UIView * _statusBarGradientView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool forceLegibilityGradientHidden;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImageView *leftCornerView;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, retain) UIImageView *rightCornerView;
@property (nonatomic, retain) UIView *statusBarGradientView;
@property (nonatomic) double strength;
@property (readonly) Class superclass;

+ (id)gradientViewWithOpacities:(const double*)arg1 locations:(id)arg2;
+ (id)statusBarGradientView;

- (void).cxx_destruct;
- (void)_configureAsPad;
- (void)_configureAsPhone;
- (void)_configureWithLegibilitySettings:(id)arg1 forceLegibilityGradientHidden:(bool)arg2;
- (bool)forceLegibilityGradientHidden;
- (void)layoutSubviews;
- (id)leftCornerView;
- (id)legibilitySettings;
- (id)rightCornerView;
- (void)setForceLegibilityGradientHidden:(bool)arg1;
- (void)setLeftCornerView:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setRightCornerView:(id)arg1;
- (void)setStatusBarGradientView:(id)arg1;
- (void)setStrength:(double)arg1;
- (id)statusBarGradientView;
- (double)strength;

@end
