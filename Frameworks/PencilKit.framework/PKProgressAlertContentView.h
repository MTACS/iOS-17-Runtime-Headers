
@interface PKProgressAlertContentView : UIView {
    _PKPathView * _innerPieView;
    _PKAnimatableBorderCornerRadiusView * _outerRingView;
    double  _progress;
}

@property (nonatomic) double progress;

- (void).cxx_destruct;
- (id)_shapeLayerPathForProgress:(double)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (double)progress;
- (void)setProgress:(double)arg1;

@end
