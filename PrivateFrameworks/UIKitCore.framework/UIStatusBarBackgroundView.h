
@interface UIStatusBarBackgroundView : UIView {
    bool  _glowEnabled;
    UIImageView * _glowView;
    UIStatusBarStyleAttributes * _style;
    bool  _suppressGlow;
}

- (void).cxx_destruct;
- (id)_backgroundImageName;
- (id)_baseImage;
- (id)_glowImage;
- (void)_setGlowAnimationEnabled:(bool)arg1 waitForNextCycle:(bool)arg2;
- (void)_startGlowAnimationWaitForNextCycle:(bool)arg1;
- (void)_stopGlowAnimation;
- (bool)_styleCanGlow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(id)arg2 backgroundColor:(id)arg3;
- (void)setGlowAnimationEnabled:(bool)arg1;
- (void)setSuppressesGlow:(bool)arg1;
- (id)style;

@end
