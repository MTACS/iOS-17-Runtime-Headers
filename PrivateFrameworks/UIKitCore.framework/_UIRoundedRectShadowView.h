
@interface _UIRoundedRectShadowView : _UIShadowView {
    double  _maskCornerRadius;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _shadowOutsets;
}

@property (nonatomic, readonly) double maskCornerRadius;

+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_expansionInsetForShadowImage;
+ (bool)_shouldCutoutShadow;

- (void)_loadImageIfNecessary;
- (void)_updateShadowOutsetsIfNecessary;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameWithContentWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithCornerRadius:(double)arg1;
- (void)layoutSubviews;
- (double)maskCornerRadius;

@end
