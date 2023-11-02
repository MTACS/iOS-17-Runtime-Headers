
@interface PXCapsuleButton : UIButton {
    UIActivityIndicatorView * _activityIndicatorView;
    NSString * _maxContentSizeCategory;
    NSMutableDictionary * _stateColorMap;
}

@property (nonatomic) NSString *maxContentSizeCategory;

- (void).cxx_destruct;
- (void)_invalidateBackgroundColor;
- (void)_invalidateCornerRadius;
- (void)_stateDidChange;
- (id)_titleFont;
- (void)_updateBackgroundColor;
- (void)_updateCornerRadius;
- (id)colorForState:(unsigned long long)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithColor:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)maxContentSizeCategory;
- (void)setColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setEnabled:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setMaxContentSizeCategory:(id)arg1;
- (void)setSelected:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;

@end
