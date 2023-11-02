
@interface NotesBarBackgroundView : UIView {
    UIVisualEffectView * _blurView;
    UIColor * _color;
    bool  _hasBlur;
}

@property (nonatomic, retain) UIVisualEffectView *blurView;
@property (nonatomic, retain) UIColor *color;
@property (nonatomic) bool hasBlur;

- (void).cxx_destruct;
- (void)_setOverrideUserInterfaceStyle:(long long)arg1;
- (id)blurView;
- (id)color;
- (void)commonInit;
- (bool)hasBlur;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBlurView:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setHasBlur:(bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateColor;

@end
