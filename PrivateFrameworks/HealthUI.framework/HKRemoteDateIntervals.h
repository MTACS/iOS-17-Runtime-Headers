
@interface HKRemoteDateIntervals : NSObject {
    long long  _calendarDayAlignment;
    NSMutableDictionary * _dateIntervals;
    NSDate * _endDate;
}

- (void).cxx_destruct;
- (id)_dateIntervalFromDate:(id)arg1 forUnit:(unsigned long long)arg2 withValue:(long long)arg3 queryAlignment:(long long)arg4 gregorianCalendar:(id)arg5;
- (id)dateIntervalForTimeScope:(long long)arg1 withGregorianCalendar:(id)arg2 error:(id*)arg3;
- (id)initWithDisplayType:(id)arg1 fromEndDate:(id)arg2;

@end
