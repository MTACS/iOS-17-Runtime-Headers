
@interface HKQuantityTypeDataSourceValue : NSObject {
    HKQuantity * _averageQuantity;
    NSNumber * _baselineRelativeValueState;
    HKQuantity * _durationQuantity;
    NSDate * _endDate;
    HKQuantity * _maxQuantity;
    NSDictionary * _metadata;
    HKQuantity * _minQuantity;
    HKQuantity * _mostRecentQuantity;
    HKQuantityType * _quantityType;
    long long  _recordCount;
    NSDate * _startDate;
    NSDateComponents * _statisticsInterval;
    HKQuantity * _sumQuantity;
}

@property (nonatomic, retain) HKQuantity *averageQuantity;
@property (nonatomic, retain) NSNumber *baselineRelativeValueState;
@property (nonatomic, retain) HKQuantity *durationQuantity;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, retain) HKQuantity *maxQuantity;
@property (nonatomic, retain) NSDictionary *metadata;
@property (nonatomic, retain) HKQuantity *minQuantity;
@property (nonatomic, retain) HKQuantity *mostRecentQuantity;
@property (nonatomic, retain) HKQuantityType *quantityType;
@property (nonatomic) long long recordCount;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic, retain) NSDateComponents *statisticsInterval;
@property (nonatomic, retain) HKQuantity *sumQuantity;

+ (id)quantityTypeDataSourceValueWithCodableStatistics:(id)arg1 sourceTimeZone:(id)arg2;

- (void).cxx_destruct;
- (id)averageQuantity;
- (id)baselineRelativeValueState;
- (id)codableStatistics;
- (id)durationQuantity;
- (id)endDate;
- (id)maxQuantity;
- (id)maxYValue;
- (id)metadata;
- (id)minQuantity;
- (id)minYValue;
- (id)mostRecentQuantity;
- (id)quantityType;
- (long long)recordCount;
- (void)setAverageQuantity:(id)arg1;
- (void)setBaselineRelativeValueState:(id)arg1;
- (void)setDurationQuantity:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setMaxQuantity:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setMinQuantity:(id)arg1;
- (void)setMostRecentQuantity:(id)arg1;
- (void)setQuantityType:(id)arg1;
- (void)setRecordCount:(long long)arg1;
- (void)setStartDate:(id)arg1;
- (void)setStatisticsInterval:(id)arg1;
- (void)setSumQuantity:(id)arg1;
- (id)startDate;
- (id)statisticsInterval;
- (id)sumQuantity;

@end
