
@interface SeymourUI.SessionTimerView : UIView {
    void animator;
    void currentRotationAngle;
    void label;
    void metricBuilder;
    void presenter;
    void timerIconView;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } intrinsicContentSize;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)updateDuration:(double)arg1;
- (void)updateDuration:(double)arg1 remainingDuration:(double)arg2;

@end
