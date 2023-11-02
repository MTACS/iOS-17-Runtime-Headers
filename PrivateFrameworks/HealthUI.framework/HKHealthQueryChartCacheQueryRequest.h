
@interface HKHealthQueryChartCacheQueryRequest : NSObject {
    unsigned long long  _audience;
    NSDate * _endDate;
    NSDate * _startDate;
    NSDateComponents * _statisticsInterval;
}

@property (nonatomic, readonly) unsigned long long audience;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDateComponents *statisticsInterval;

- (void).cxx_destruct;
- (unsigned long long)audience;
- (id)endDate;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 audience:(unsigned long long)arg4;
- (id)startDate;
- (id)statisticsInterval;

@end
