
@interface _HKQuantityDistributionQueryServerConfiguration : HKQueryServerConfiguration {
    NSDate * _anchorDate;
    long long  _contextStyle;
    NSDate * _endDate;
    HKQuantity * _histogramAnchor;
    HKQuantity * _histogramBucketSize;
    NSDateComponents * _intervalComponents;
    unsigned long long  _options;
    NSDate * _startDate;
}

@property (nonatomic, copy) NSDate *anchorDate;
@property (nonatomic) long long contextStyle;
@property (nonatomic, copy) NSDate *endDate;
@property (nonatomic, copy) HKQuantity *histogramAnchor;
@property (nonatomic, copy) HKQuantity *histogramBucketSize;
@property (nonatomic, copy) NSDateComponents *intervalComponents;
@property (nonatomic) unsigned long long options;
@property (nonatomic, copy) NSDate *startDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)anchorDate;
- (long long)contextStyle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)histogramAnchor;
- (id)histogramBucketSize;
- (id)initWithCoder:(id)arg1;
- (id)intervalComponents;
- (unsigned long long)options;
- (void)setAnchorDate:(id)arg1;
- (void)setContextStyle:(long long)arg1;
- (void)setEndDate:(id)arg1;
- (void)setHistogramAnchor:(id)arg1;
- (void)setHistogramBucketSize:(id)arg1;
- (void)setIntervalComponents:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;

@end
