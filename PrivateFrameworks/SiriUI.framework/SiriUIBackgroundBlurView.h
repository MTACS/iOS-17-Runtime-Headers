
@interface SiriUIBackgroundBlurView : UIView {
    MTMaterialView * _materialView;
}

@property (nonatomic, retain) MTMaterialView *materialView;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)materialView;
- (void)setMaterialView:(id)arg1;
- (void)setVisible:(bool)arg1;

@end
