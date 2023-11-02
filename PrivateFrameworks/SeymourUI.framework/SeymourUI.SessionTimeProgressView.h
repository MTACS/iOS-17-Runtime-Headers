
@interface SeymourUI.SessionTimeProgressView : UIView {
    void behavior;
    void formatter;
    void label;
    void presenter;
    void ringGroup;
    void ringsView;
}

@property (nonatomic, readonly) bool accessibilityShowRemaining;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } intrinsicContentSize;

- (void).cxx_destruct;
- (void)accessibilityDidUpdateTimer:(double)arg1 percentage:(float)arg2;
- (bool)accessibilityShowRemaining;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
