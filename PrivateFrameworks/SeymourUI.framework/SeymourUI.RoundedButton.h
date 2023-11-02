
@interface SeymourUI.RoundedButton : UIButton {
    void currentState;
    void defaultContentInsets;
    void defaults;
    void highlightTimer;
    void indefiniteSpinner;
    void lastFont;
    void lastSymbolScale;
    void layout;
    void shouldShowHighlight;
    void undimmedBackgroundColor;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic) bool highlighted;

- (void).cxx_destruct;
- (id)backgroundColor;
- (void)handleTimer:(id)arg1;
- (void)handleTouchDown:(id)arg1;
- (void)handleTouchUp:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isHighlighted;
- (void)setAttributedTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)setBackgroundColor:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)textSizeChanged:(id)arg1;
- (void)tintColorDidChange;
- (void)traitCollectionDidChange:(id)arg1;

@end
