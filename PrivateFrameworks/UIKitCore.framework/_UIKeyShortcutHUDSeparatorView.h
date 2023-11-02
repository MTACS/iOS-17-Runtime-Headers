
@interface _UIKeyShortcutHUDSeparatorView : UIView {
    UIVisualEffectView * _separatorVisualEffectView;
}

@property (nonatomic, retain) UIColor *separatorColor;
@property (getter=isSeparatorHidden, nonatomic) bool separatorHidden;
@property (nonatomic, retain) UIVisualEffectView *separatorVisualEffectView;
@property (nonatomic, retain) UIVisualEffect *visualEffect;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isSeparatorHidden;
- (void)layoutSubviews;
- (id)separatorColor;
- (id)separatorVisualEffectView;
- (void)setSeparatorColor:(id)arg1;
- (void)setSeparatorHidden:(bool)arg1;
- (void)setSeparatorVisualEffectView:(id)arg1;
- (void)setVisualEffect:(id)arg1;
- (id)visualEffect;

@end
