
@interface SeymourUI.ActionLoadingButton : UIButton {
    void baseForegroundColor;
    void currentState;
    void defaults;
    void indefiniteSpinner;
    void layout;
}

@property (nonatomic) bool highlighted;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } intrinsicContentSize;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isHighlighted;
- (void)setHighlighted:(bool)arg1;
- (void)tintColorDidChange;
- (void)updateConfiguration;

@end
