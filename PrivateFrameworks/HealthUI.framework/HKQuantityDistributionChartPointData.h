
@interface HKQuantityDistributionChartPointData : NSObject <HKGraphSeriesChartData> {
    double  _averageValue;
    NSArray * _bucketCounts;
    double  _bucketIncrement;
    NSArray * _contextIdentifiers;
    double  _duration;
    NSDate * _endDate;
    double  _maximumValue;
    double  _minimumBucketValue;
    double  _minimumValue;
    NSDate * _startDate;
    HKUnit * _unit;
}

@property (nonatomic, readonly) double averageValue;
@property (nonatomic, readonly) NSArray *bucketCounts;
@property (nonatomic, readonly) double bucketIncrement;
@property (nonatomic, readonly) NSArray *contextIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double maximumValue;
@property (nonatomic, readonly) double minimumBucketValue;
@property (nonatomic, readonly) double minimumValue;
@property (nonatomic, readonly) NSDate *startDate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HKUnit *unit;

- (void).cxx_destruct;
- (double)averageValue;
- (id)bucketCounts;
- (double)bucketIncrement;
- (id)contextIdentifiers;
- (double)duration;
- (id)endDate;
- (id)initWithDistributionData:(id)arg1 bucketIncrement:(double)arg2 unit:(id)arg3 displayType:(id)arg4;
- (id)initWithDistributionData:(id)arg1 unit:(id)arg2 displayType:(id)arg3;
- (double)maximumValue;
- (double)minimumBucketValue;
- (double)minimumValue;
- (id)startDate;
- (id)unit;

@end
