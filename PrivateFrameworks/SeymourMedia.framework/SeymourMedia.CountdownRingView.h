
@interface SeymourMedia.CountdownRingView : UIView <ARUICountdownAnimatorDelegate> {
    void animator;
    void countdownView;
    void onCountdownCompleted;
    void onCountdownFadeOut;
    void onCountdownStep;
    void onCountdownWindUp;
}

- (void).cxx_destruct;
- (void)accessibilityUpdateCountdownToStep:(long long)arg1;
- (void)countdownAnimator:(id)arg1 performingAnimation:(id)arg2 withDuration:(double)arg3;
- (void)countdownAnimatorDidFinishAnimating:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
