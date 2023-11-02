
@interface CDRichComplicationCurvedProgressView : CDRichComplicationProgressView {
    CDRichComplicationCurveView * _backgroundView;
    double  _beginAngle;
    bool  _clockwise;
    double  _curveWidth;
    double  _endAngle;
    CDRichComplicationCurveView * _foregroundView;
    long long  _progressFillStyle;
}

@property (nonatomic) double beginAngle;
@property (nonatomic) bool clockwise;
@property (nonatomic) double endAngle;

- (void).cxx_destruct;
- (double)beginAngle;
- (bool)clockwise;
- (id)colorForView:(id)arg1 accented:(bool)arg2;
- (double)endAngle;
- (id)filterForView:(id)arg1 style:(long long)arg2;
- (id)filterForView:(id)arg1 style:(long long)arg2 fraction:(double)arg3;
- (id)filtersForView:(id)arg1 style:(long long)arg2;
- (id)filtersForView:(id)arg1 style:(long long)arg2 fraction:(double)arg3;
- (id)initWithFamily:(long long)arg1 curveWidth:(double)arg2 padding:(double)arg3 beginAngle:(double)arg4 endAngle:(double)arg5 forDevice:(id)arg6 withFilterStyle:(long long)arg7 progressFillStyle:(long long)arg8;
- (id)overrideBackgroundGradientColorsForGradientColors:(id)arg1;
- (id)overrideBackgroundGradientColorsForGradientColors:(id)arg1 locations:(id)arg2;
- (void)setBeginAngle:(double)arg1;
- (void)setClockwise:(bool)arg1;
- (void)setEndAngle:(double)arg1;
- (void)setProgress:(double)arg1;

@end
