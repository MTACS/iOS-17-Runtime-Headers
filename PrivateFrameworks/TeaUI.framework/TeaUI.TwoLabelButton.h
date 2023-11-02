
@interface TeaUI.TwoLabelButton : UIControl <CAAnimationDelegate> {
    void animationState;
    void animationTrigger;
    void backgroundColorHighlighted;
    void backgroundColorNormal;
    void borderColor;
    void buttonState;
    void currentBackgroundColorHighlighted;
    void currentBackgroundColorNormal;
    void currentBorderColor;
    void highlightMask;
    void labelHighlighted;
    void labelNormal;
    void onTap;
    void titleLabelHighlighted;
    void titleLabelNormal;
}

- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
