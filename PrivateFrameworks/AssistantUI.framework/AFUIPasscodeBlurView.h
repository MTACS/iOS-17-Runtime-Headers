
@interface AFUIPasscodeBlurView : UIView {
    UIView * _lightenSourceOverView;
    MTMaterialView * _materialView;
    UIView * _plusDView;
}

@property (nonatomic, retain) UIView *lightenSourceOverView;
@property (nonatomic, retain) MTMaterialView *materialView;
@property (nonatomic, retain) UIView *plusDView;

- (void).cxx_destruct;
- (void)_setPlusDBackgroundColorWithWeighting:(double)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)lightenSourceOverView;
- (id)materialView;
- (id)plusDView;
- (void)setLightenSourceOverView:(id)arg1;
- (void)setMaterialView:(id)arg1;
- (void)setPlusDView:(id)arg1;

@end
