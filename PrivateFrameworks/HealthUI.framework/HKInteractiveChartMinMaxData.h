
@interface HKInteractiveChartMinMaxData : NSObject <HKGraphSeriesChartData> {
    double  _maxValue;
    double  _minValue;
    HKUnit * _unit;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double maxValue;
@property (nonatomic) double minValue;
@property (readonly) Class superclass;
@property (nonatomic, retain) HKUnit *unit;

- (void).cxx_destruct;
- (double)maxValue;
- (double)minValue;
- (void)setMaxValue:(double)arg1;
- (void)setMinValue:(double)arg1;
- (void)setUnit:(id)arg1;
- (id)unit;

@end
