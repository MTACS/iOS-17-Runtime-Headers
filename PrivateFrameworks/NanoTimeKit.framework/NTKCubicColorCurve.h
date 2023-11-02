
@interface NTKCubicColorCurve : NTKColorCurve {
    /* Warning: Unrecognized filer type: '' using 'void*' */ void** _colors;
    unsigned long long  _count;
    float * _fractions;
    NTKCubicSpline * _spline;
}

- (void).cxx_destruct;
- (id)colorForFraction:(float)arg1;
- (void)dealloc;
- (id)initWithColorCurveElements:(id)arg1;
- (id)initWithCubicColorCurveElements:(id)arg1;
- (void)rgbfColorForFraction:(double)arg1;

@end
