
@interface SBHomeScreenBackdropViewBase : UIView {
    SBFluidSwitcherAnimationSettings * _animationSettings;
    NSMutableSet * _backdropViewRequiringReasons;
    <SBHomeScreenBackdropViewBaseDelegate> * _delegate;
    NSMutableSet * _liveBackdropViewRequiringReasons;
}

@property (nonatomic) <SBHomeScreenBackdropViewBaseDelegate> *delegate;

- (void).cxx_destruct;
- (id)backdropBlurSettings;
- (void)beginRequiringBackdropViewForReason:(id)arg1;
- (void)beginRequiringLiveBackdropViewForReason:(id)arg1;
- (void)cancelInProcessAnimations;
- (id)delegate;
- (void)endRequiringBackdropViewForReason:(id)arg1;
- (void)endRequiringLiveBackdropViewForReason:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isOpaque;
- (bool)requiresBackdropView;
- (bool)requiresLiveBackdropView;
- (void)setBlurProgress:(double)arg1 behaviorMode:(long long)arg2 completion:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;

@end
