
@interface CSPasscodeBackgroundView : UIView {
    UIView * _lightenSourceOverView;
    MTMaterialView * _materialView;
    UIView * _plusDView;
    UIColor * _reduceTransparencyBackingColor;
    UIView * _reduceTransparencyBackingView;
    UIView * _reduceTransparencyTintingView;
}

@property (nonatomic, retain) UIView *lightenSourceOverView;
@property (nonatomic, retain) MTMaterialView *materialView;
@property (nonatomic, retain) UIView *plusDView;
@property (nonatomic, retain) UIColor *reduceTransparencyBackingColor;
@property (nonatomic, retain) UIView *reduceTransparencyBackingView;
@property (nonatomic, retain) UIView *reduceTransparencyTintingView;

- (void).cxx_destruct;
- (void)_setPlusDBackgroundColorWithWeighting:(double)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)lightenSourceOverView;
- (id)materialView;
- (id)plusDView;
- (id)reduceTransparencyBackingColor;
- (id)reduceTransparencyBackingView;
- (id)reduceTransparencyTintingView;
- (void)setLightenSourceOverView:(id)arg1;
- (void)setMaterialView:(id)arg1;
- (void)setPlusDView:(id)arg1;
- (void)setReduceTransparencyBackingColor:(id)arg1;
- (void)setReduceTransparencyBackingView:(id)arg1;
- (void)setReduceTransparencyTintingView:(id)arg1;
- (void)setWeighting:(double)arg1;

@end
