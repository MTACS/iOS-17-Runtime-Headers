
@interface PKRingGradientView : UIView {
    CAShapeLayer * _backgroundCap;
    CAShapeLayer * _backgroundLayer;
    double  _currentAngle;
    struct CGColor { } * _effectiveEndColor;
    struct CGColor { } * _effectiveFillColor;
    struct CGColor { } * _effectiveStartColor;
    struct CGColor { } * _effectiveStrokeColor;
    bool  _enabled;
    UIColor * _fillColor;
    CAShapeLayer * _gradientCap;
    bool  _gradientCapIsFillColor;
    UIColor * _gradientEndColor;
    CAGradientLayer * _gradientLayer;
    CAShapeLayer * _gradientMaskLayer;
    UIColor * _gradientStartColor;
    double  _minimumAngle;
    UIColor * _originalEndColor;
    UIColor * _originalStartColor;
    UIColor * _strokeColor;
    CAShapeLayer * _strokeLayer;
}

@property (nonatomic) double currentAngle;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, copy) UIColor *fillColor;
@property (nonatomic, copy) UIColor *gradientEndColor;
@property (nonatomic, copy) UIColor *gradientStartColor;
@property (nonatomic) double minimumAngle;
@property (nonatomic, readonly) double radius;
@property (nonatomic, copy) UIColor *strokeColor;
@property (nonatomic, readonly) double totalWidth;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_center;
- (struct CGPoint { double x1; double x2; })_centerPointForMaskViewWithAngle:(double)arg1 adjustToCover:(bool)arg2;
- (void)_dynamicUserInterfaceTraitDidChange;
- (double)_maskRadius;
- (double)_offsetEndAngle;
- (double)_offsetStartAngle;
- (double)_radius;
- (void)_updateEffectiveColors;
- (void)_updateGradient;
- (double)currentAngle;
- (void)dealloc;
- (id)fillColor;
- (id)gradientEndColor;
- (id)gradientStartColor;
- (id)init;
- (bool)isEnabled;
- (void)layoutSubviews;
- (double)minimumAngle;
- (double)radius;
- (double)ringWidth;
- (void)setCurrentAngle:(double)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFillColor:(id)arg1;
- (void)setGradientEndColor:(id)arg1;
- (void)setGradientStartColor:(id)arg1;
- (void)setMinimumAngle:(double)arg1;
- (void)setStrokeColor:(id)arg1;
- (id)strokeColor;
- (double)strokeWidth;
- (double)totalWidth;

@end
