
@interface _PKColorPickerSimpleCrosshairView : UIView {
    double  _borderCornerRadius;
    UIView * _borderView;
    UIView * _shadowView;
}

@property (nonatomic) double borderCornerRadius;
@property (nonatomic, retain) UIView *borderView;
@property (nonatomic, retain) UIView *shadowView;

- (void).cxx_destruct;
- (double)_cornerRadiusForBorderView;
- (double)_cornerRadiusForShadowView;
- (double)borderCornerRadius;
- (id)borderView;
- (void)configureBorderView:(id)arg1;
- (void)configureShadowView:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setBorderCornerRadius:(double)arg1;
- (void)setBorderView:(id)arg1;
- (void)setShadowView:(id)arg1;
- (id)shadowView;

@end
