
@interface PKRightAngleRotatingView : UIView {
    long long  _orientation;
    UIView * _rotatedView;
}

@property (nonatomic) long long orientation;
@property (nonatomic, readonly) UIView *rotatedView;

- (void).cxx_destruct;
- (bool)_dimensionsAreRotated;
- (id)initWithRotatedView:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (long long)orientation;
- (id)rotatedView;
- (void)setOrientation:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)sizeToFit;
- (void)updateTransform;

@end
