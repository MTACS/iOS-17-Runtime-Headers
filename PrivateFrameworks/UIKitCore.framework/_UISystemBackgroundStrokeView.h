
@interface _UISystemBackgroundStrokeView : UIView {
    unsigned long long  _maskedCorners;
    UIColor * _strokeColor;
    double  _strokeCornerRadius;
    double  _strokeWidth;
    bool  _useContinuousCurve;
}

@property (nonatomic) unsigned long long maskedCorners;
@property (nonatomic, retain) UIColor *strokeColor;
@property (nonatomic) double strokeCornerRadius;
@property (nonatomic) double strokeWidth;
@property (nonatomic) bool useContinuousCurve;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)maskedCorners;
- (void)setMaskedCorners:(unsigned long long)arg1;
- (void)setStrokeColor:(id)arg1;
- (void)setStrokeCornerRadius:(double)arg1;
- (void)setStrokeWidth:(double)arg1;
- (void)setUseContinuousCurve:(bool)arg1;
- (id)strokeColor;
- (double)strokeCornerRadius;
- (double)strokeWidth;
- (bool)useContinuousCurve;

@end
