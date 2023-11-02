
@interface WDDateRange : NSObject {
    NSDate * _endDate;
    NSDate * _startDate;
}

@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSDate *startDate;

+ (id)dateRangeWithStartDate:(id)arg1 endDate:(id)arg2;
+ (id)dateRangeWithTimePeriod:(long long)arg1 anchorDate:(id)arg2;

- (void).cxx_destruct;
- (id)_getEndDateFromStartDate:(id)arg1 timePeriod:(long long)arg2;
- (id)_getStartDateFromAnchorDate:(id)arg1 timePeriod:(long long)arg2;
- (bool)dateInRange:(id)arg1;
- (id)description;
- (id)endDate;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)initWithTimePeriod:(long long)arg1 anchorDate:(id)arg2;
- (id)startDate;

@end
