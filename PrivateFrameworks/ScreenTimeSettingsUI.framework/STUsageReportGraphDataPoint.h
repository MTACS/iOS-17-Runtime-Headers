
@interface STUsageReportGraphDataPoint : NSObject {
    NSDateInterval * _dateInterval;
    UIColor * _indicatorImageColor;
    NSString * _indicatorImageName;
    unsigned long long  _itemType;
    NSArray * _segments;
    unsigned long long  _timePeriod;
    NSNumber * _total;
    double  _totalAsPercentageOfMax;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, retain) NSDateInterval *dateInterval;
@property (copy) UIColor *indicatorImageColor;
@property (nonatomic, copy) NSString *indicatorImageName;
@property (nonatomic) unsigned long long itemType;
@property (nonatomic, copy) NSArray *segments;
@property (nonatomic) unsigned long long timePeriod;
@property (nonatomic, copy) NSNumber *total;
@property (nonatomic) double totalAsPercentageOfMax;

- (void).cxx_destruct;
- (id)date;
- (id)dateInterval;
- (id)description;
- (id)indicatorImageColor;
- (id)indicatorImageName;
- (id)initWithTimePeriod:(unsigned long long)arg1 itemType:(unsigned long long)arg2 dateInterval:(id)arg3 total:(id)arg4 totalAsPercentageOfMax:(double)arg5 segments:(id)arg6;
- (unsigned long long)itemType;
- (id)segments;
- (void)setDateInterval:(id)arg1;
- (void)setIndicatorImageColor:(id)arg1;
- (void)setIndicatorImageName:(id)arg1;
- (void)setItemType:(unsigned long long)arg1;
- (void)setSegments:(id)arg1;
- (void)setTimePeriod:(unsigned long long)arg1;
- (void)setTotal:(id)arg1;
- (void)setTotalAsPercentageOfMax:(double)arg1;
- (unsigned long long)timePeriod;
- (id)total;
- (double)totalAsPercentageOfMax;

@end
