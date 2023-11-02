
@interface HDMHDaySummaryBuilder : NSObject {
    long long  _dayIndex;
    NSCalendar * _gregorianCalendar;
    HKStateOfMind * _lastDailyStateOfMind;
    NSMutableArray * _momentaryStatesOfMind;
}

@property (nonatomic, readonly) long long dayIndex;
@property (nonatomic, readonly) NSCalendar *gregorianCalendar;

- (void).cxx_destruct;
- (void)addStateOfMind:(id)arg1;
- (long long)dayIndex;
- (id)daySummary;
- (id)gregorianCalendar;
- (id)initWithDayIndex:(long long)arg1 gregorianCalendar:(id)arg2;

@end
