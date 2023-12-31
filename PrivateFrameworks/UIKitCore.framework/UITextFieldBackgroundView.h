
@interface UITextFieldBackgroundView : UIView {
    bool  _active;
    bool  _enabled;
    UIColor * _fillColor;
    float  _progress;
}

@property (nonatomic, retain) UIColor *fillColor;

- (void).cxx_destruct;
- (void)_updateImages;
- (id)fillColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 active:(bool)arg2;
- (void)setActive:(bool)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setEnabled:(bool)arg1 animated:(bool)arg2;
- (void)setFillColor:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setProgress:(float)arg1;

@end
