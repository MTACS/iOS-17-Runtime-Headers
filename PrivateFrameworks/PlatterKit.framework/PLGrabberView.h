
@interface PLGrabberView : UIView {
    MTMaterialView * _materialView;
}

@property (nonatomic) double weighting;

- (void).cxx_destruct;
- (void)_configureMaterialViewIfNecessary;
- (struct CGSize { double x1; double x2; })_defaultContainerSize;
- (struct CGSize { double x1; double x2; })_intrinsicContentSizeWithContainerSize:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setWeighting:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFitsContainerWithSize:(struct CGSize { double x1; double x2; })arg1;
- (double)weighting;

@end
