
@interface TeaUI.PaddedShapeButton : UIButton {
    void _backgroundColor;
    void contentOffset;
    void onMenuPresentation;
    void onTap;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } contentOffset;
@property (nonatomic) bool enabled;
@property (nonatomic) bool highlighted;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })contentOffset;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEnabled;
- (bool)isHighlighted;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
