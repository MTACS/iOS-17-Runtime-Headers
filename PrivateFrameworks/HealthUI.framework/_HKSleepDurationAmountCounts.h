
@interface _HKSleepDurationAmountCounts : NSObject {
    long long  _daysWithSleepData;
    long long  _totalDays;
}

@property (nonatomic) long long daysWithSleepData;
@property (nonatomic) long long totalDays;

- (long long)daysWithSleepData;
- (void)setDaysWithSleepData:(long long)arg1;
- (void)setTotalDays:(long long)arg1;
- (long long)totalDays;

@end
