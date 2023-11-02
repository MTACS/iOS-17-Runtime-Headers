
@interface HKHistogramChartData : NSObject <HKGraphSeriesChartData> {
    double  _xValue;
    double  _yValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double xValue;
@property (nonatomic, readonly) double yValue;

- (id)initWithXValue:(double)arg1 yValue:(double)arg2;
- (double)xValue;
- (double)yValue;

@end
