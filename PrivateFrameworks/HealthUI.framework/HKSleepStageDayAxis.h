
@interface HKSleepStageDayAxis : HKDateAxis {
    <HKSleepStageDayAxisDelegate> * _delegate;
}

@property (nonatomic) <HKSleepStageDayAxisDelegate> *delegate;

- (void).cxx_destruct;
- (id)_currentOrGregorianCalendar;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)stringForDate:(id)arg1 somnogramDateInterval:(id)arg2;
- (id)stringForDate:(id)arg1 zoom:(long long)arg2 labelType:(long long)arg3;

@end
