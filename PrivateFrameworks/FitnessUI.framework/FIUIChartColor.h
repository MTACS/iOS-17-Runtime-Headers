
@interface FIUIChartColor : NSObject {
    struct CGColor { } * _color;
    struct CGGradient { } * _gradient;
    double  _threshold;
}

@property (nonatomic) double threshold;

- (void)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (id)initWithThreshold:(double)arg1 color:(id)arg2;
- (id)initWithThreshold:(double)arg1 startColor:(id)arg2 endColor:(id)arg3;
- (void)setThreshold:(double)arg1;
- (double)threshold;

@end
