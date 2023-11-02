
@interface SBFFeatherBlurView : UIView {
    MTMaterialView * _backgroundBlurView;
    double  _intrinsicHeight;
}

@property (nonatomic, readonly) MTMaterialView *backgroundBlurView;
@property (nonatomic) double intrinsicHeight;

+ (bool)_requiresLowQualityFeatherBlur:(unsigned long long)arg1;
+ (id)configureGradientMaskForFeatherBlurRecipe:(unsigned long long)arg1 onContentView:(id)arg2;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })gradientMaskLayerInsetsForFeatherBlurRecipe:(unsigned long long)arg1;
+ (id)matchMoveAnimationForFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 relativeToView:(id)arg2;

- (void).cxx_destruct;
- (id)backgroundBlurView;
- (id)initWithRecipe:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (double)intrinsicHeight;
- (void)layoutSubviews;
- (void)setIntrinsicHeight:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
