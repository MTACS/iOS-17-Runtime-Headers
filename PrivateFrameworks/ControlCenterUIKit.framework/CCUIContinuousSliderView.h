
@interface CCUIContinuousSliderView : CCUIBaseSliderView {
    unsigned long long  _axis;
    MTMaterialView * _backgroundFillView;
    UIView * _valueIndicatorClippingView;
}

@property (nonatomic) unsigned long long axis;
@property (nonatomic, readonly) UIView *valueIndicatorClippingView;

- (void).cxx_destruct;
- (double)_length;
- (unsigned long long)axis;
- (struct CGPoint { double x1; double x2; })glyphCenter;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutElasticContentViews;
- (void)setAxis:(unsigned long long)arg1;
- (void)setContinuousSliderCornerRadius:(double)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setValueVisible:(bool)arg1;
- (id)valueIndicatorClippingView;

@end
