
@interface FIUIChartHorizontalLineSeries : FIUIChartNumericSeries {
    UIColor * _color;
    NSArray * _dataPoints;
    double  _lineWidth;
    double  _sidePadding;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic) double lineWidth;
@property (nonatomic) double sidePadding;

- (void).cxx_destruct;
- (id)color;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)layoutSubviews;
- (double)lineWidth;
- (void)setColor:(id)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setSidePadding:(double)arg1;
- (double)sidePadding;

@end
