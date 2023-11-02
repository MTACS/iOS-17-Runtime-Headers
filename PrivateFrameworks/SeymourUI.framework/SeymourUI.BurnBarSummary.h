
@interface SeymourUI.BurnBarSummary : UIView {
    void burnBar;
    void burnBarHeightConstraint;
    void circleCenterXSubscription;
    void scoreLabel;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  scoreMetric;
    void stringBuilder;
    void style;
    void tickBars;
    void tickLabels;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
