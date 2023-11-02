
@interface SCLScheduleFormatterItem : NSObject {
    NSCalendar * _calendar;
    long long  _days;
    NSArray * _timeIntervals;
}

@property (nonatomic, readonly) NSCalendar *calendar;
@property (nonatomic, readonly, copy) NSArray *timeIntervals;

- (void).cxx_destruct;
- (void)addDay:(long long)arg1;
- (id)calendar;
- (id)dayRanges;
- (long long)days;
- (long long)earliestWeekdayInCalendar;
- (id)initWithCalendar:(id)arg1 timeIntervals:(id)arg2;
- (id)timeIntervals;

@end
