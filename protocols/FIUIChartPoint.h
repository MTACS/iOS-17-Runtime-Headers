
@protocol FIUIChartPoint <NSObject>

@required

- (NSNumber *)maxYValue;
- (NSNumber *)minYValue;
- (void)setXValue:(NSDate *)arg1;
- (void)setYValue:(id)arg1;
- (NSDate *)xValue;
- (id)yValue;

@end
