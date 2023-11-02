
@interface CSMagSafeAccessoryView : CSCoverSheetViewBase {
    CSMagSafeAccessoryConfiguration * _configuration;
    _UILegibilitySettings * _legibilitySettings;
}

@property (nonatomic, readonly) double animationDurationBeforeDismissal;
@property (nonatomic, retain) CSMagSafeAccessoryConfiguration *configuration;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;

- (void).cxx_destruct;
- (double)animationDurationBeforeDismissal;
- (id)configuration;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isReduceMotionEnabled;
- (bool)isReduceTransparencyEnabled;
- (void)layoutSubviews;
- (id)legibilitySettings;
- (void)performAnimation:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)setConfiguration:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;

@end
