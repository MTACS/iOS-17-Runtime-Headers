
@interface SeymourUI.URLButton : UIButton {
    void contentPadding;
    void defaults;
    void lastFont;
    void lastSymbolScale;
    void layout;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  url;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)textSizeChanged:(id)arg1;
- (void)tintColorDidChange;

@end
