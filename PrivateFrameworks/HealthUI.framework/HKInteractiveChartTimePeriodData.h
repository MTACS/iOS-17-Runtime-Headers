
@interface HKInteractiveChartTimePeriodData : NSObject <HKGraphSeriesChartData> {
    NSDate * _endDate;
    long long  _recordCount;
    NSDate * _startDate;
    NSDateComponents * _statisticsInterval;
    double  _timePeriod;
    NSString * _timePeriodPrefix;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long recordCount;
@property (nonatomic, copy) NSDate *startDate;
@property (nonatomic, retain) NSDateComponents *statisticsInterval;
@property (readonly) Class superclass;
@property (nonatomic) double timePeriod;
@property (nonatomic, retain) NSString *timePeriodPrefix;

- (void).cxx_destruct;
- (id)endDate;
- (long long)recordCount;
- (void)setEndDate:(id)arg1;
- (void)setRecordCount:(long long)arg1;
- (void)setStartDate:(id)arg1;
- (void)setStatisticsInterval:(id)arg1;
- (void)setTimePeriod:(double)arg1;
- (void)setTimePeriodPrefix:(id)arg1;
- (id)startDate;
- (id)statisticsInterval;
- (double)timePeriod;
- (id)timePeriodPrefix;

@end
