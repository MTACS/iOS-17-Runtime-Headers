
@interface ODCurareModelSelectionParameter : NSObject {
    NSString * _metricName;
    double  _percentageIncrease;
}

@property (nonatomic, retain) NSString *metricName;
@property (nonatomic) double percentageIncrease;

- (void).cxx_destruct;
- (id)initWithMetricName:(id)arg1 percentageIncrease:(double)arg2;
- (id)metricName;
- (double)percentageIncrease;
- (void)setMetricName:(id)arg1;
- (void)setPercentageIncrease:(double)arg1;

@end
