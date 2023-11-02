
@interface _TVStackBackdropMaskingView : UIView {
    _TVStackBackdropView * _backdropView;
    CAGradientLayer * _gradientLayer;
    double  _gradientScale;
    double  _gradientStop;
}

@property (nonatomic, retain) _TVStackBackdropView *backdropView;
@property (nonatomic) double gradientScale;
@property (nonatomic) double gradientStop;

- (void).cxx_destruct;
- (id)backdropView;
- (double)gradientScale;
- (double)gradientStop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setBackdropView:(id)arg1;
- (void)setGradientScale:(double)arg1;
- (void)setGradientStop:(double)arg1;

@end