
@interface HKInteractiveChartSinglePointData : NSObject <HKGraphSeriesChartData> {
    double  _maxValue;
    NSDictionary * _metadata;
    double  _minValue;
    long long  _recordCount;
    bool  _representsRange;
    NSDateComponents * _statisticsInterval;
    HKUnit * _unit;
    double  _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double maxValue;
@property (nonatomic, retain) NSDictionary *metadata;
@property (nonatomic) double minValue;
@property (nonatomic) long long recordCount;
@property (nonatomic) bool representsRange;
@property (nonatomic, retain) NSDateComponents *statisticsInterval;
@property (readonly) Class superclass;
@property (nonatomic, retain) HKUnit *unit;
@property (nonatomic) double value;

- (void).cxx_destruct;
- (id)description;
- (double)maxValue;
- (id)metadata;
- (double)minValue;
- (long long)recordCount;
- (bool)representsRange;
- (void)setMaxValue:(double)arg1;
- (void)setMetadata:(id)arg1;
- (void)setMinValue:(double)arg1;
- (void)setRecordCount:(long long)arg1;
- (void)setRepresentsRange:(bool)arg1;
- (void)setStatisticsInterval:(id)arg1;
- (void)setUnit:(id)arg1;
- (void)setValue:(double)arg1;
- (id)statisticsInterval;
- (id)unit;
- (double)value;

@end
