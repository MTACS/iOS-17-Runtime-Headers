
@interface PGMaterialView : PGLayoutContainerView {
    PGCABackdropLayerView * _backdropLayerView;
    UIColor * _backgroundColor;
    UIView * _contentView;
}

@property (getter=isBackdropHidden, nonatomic) bool backdropHidden;
@property (nonatomic, readonly) UIView *contentView;

- (void).cxx_destruct;
- (bool)PG_preferredVisibilityForView:(id)arg1;
- (double)_continuousCornerRadius;
- (double)_cornerRadius;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)_setCornerRadius:(double)arg1;
- (void)addSubview:(id)arg1;
- (id)backgroundColor;
- (id)contentView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isBackdropHidden;
- (void)layoutSubviews;
- (void)setBackdropHidden:(bool)arg1;
- (void)setBackgroundColor:(id)arg1;

@end
