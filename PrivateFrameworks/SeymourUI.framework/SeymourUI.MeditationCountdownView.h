
@interface SeymourUI.MeditationCountdownView : UIView {
    void centerAnimationView;
    void countdownRingView;
    void onCountdownCompleted;
    void onCountdownFadeOut;
    void onCountdownStep;
    void onCountdownWindUp;
}

- (void).cxx_destruct;
- (void)accessibilityUpdateCountdownToStep:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;

@end
