
@interface SBHomeScreenBackdropDarkTintView : SBHomeScreenBackdropViewBase {
    UIView * _darkTintView;
}

- (void).cxx_destruct;
- (void)_updateDarkTintViewHidden;
- (void)beginRequiringBackdropViewForReason:(id)arg1;
- (void)beginRequiringLiveBackdropViewForReason:(id)arg1;
- (void)endRequiringBackdropViewForReason:(id)arg1;
- (void)endRequiringLiveBackdropViewForReason:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isOpaque;
- (void)setBlurProgress:(double)arg1 behaviorMode:(long long)arg2 completion:(id /* block */)arg3;

@end
