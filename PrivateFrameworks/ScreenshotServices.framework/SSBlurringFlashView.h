
@interface SSBlurringFlashView : SSFlashView {
    SSBlurView * _blurView;
    UIViewPropertyAnimator * _blurViewRadiusAnimator;
    bool  _blurViewRadiusAnimatorCompleted;
    id /* block */  _completionBlock;
    bool  _isCompletingFlashWithNewTimingParameters;
    _SSSFlashSuperColorView * _superColorView;
    bool  _superColorViewBackgroundColorAnimatorCompleted;
    UIViewPropertyAnimator * _superColorViewOpacityAnimator;
}

+ (double)expectedAnimationDurationForStyle:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_blurViewRadiusAnimatorCompleted;
- (double)_cornerRadius;
- (void)_runCompletionBlockIfAppropriate;
- (void)_setCornerRadius:(double)arg1;
- (void)_superColorViewBackgroundColorAnimatorCompleted;
- (void)flashWithCompletion:(id /* block */)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;

@end
