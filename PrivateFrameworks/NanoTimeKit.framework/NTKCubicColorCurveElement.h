
@interface NTKCubicColorCurveElement : NSObject {
    void _color;
    double  _fraction;
}

@property (nonatomic) void color;
@property (nonatomic) double fraction;

- (void)color;
- (double)fraction;
- (void)setColor;
- (void)setFraction:(double)arg1;

@end
