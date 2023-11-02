
@interface SBHPageManagementCheckbox : UIButton {
    UIView * _backgroundView;
    double  _checkboxDiameter;
    UIImageView * _customImageView;
    CALayer * _deselectedMask;
    UIView * _highlightView;
}

@property (nonatomic, readonly) UIView *backgroundView;
@property (nonatomic, readonly) double checkboxDiameter;
@property (nonatomic, readonly) UIImageView *customImageView;
@property (nonatomic, readonly) CALayer *deselectedMask;
@property (nonatomic, readonly) UIView *highlightView;

- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)backgroundView;
- (double)checkboxDiameter;
- (id)customImageView;
- (id)deselectedMask;
- (double)effectiveHighlightAlpha;
- (double)effectiveImageAlpha;
- (id)highlightView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 checkboxDiameter:(double)arg2 backgroundView:(id)arg3;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setHighlighted:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)updateDeselectedMaskState;

@end
