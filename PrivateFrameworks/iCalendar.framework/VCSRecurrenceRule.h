
@interface VCSRecurrenceRule : NSObject <VCSDictifiable> {
    NSArray * _dayList;
    NSArray * _dayNumberList;
    long long  _duration;
    VCSDate * _endDate;
    bool  _hasDuration;
    long long  _interval;
    NSArray * _monthList;
    NSMutableArray * _occurrenceList;
    unsigned long long  _recurrenceType;
    NSMutableArray * _weekdayList;
}

@property (nonatomic, retain) NSArray *dayList;
@property (nonatomic, retain) NSArray *dayNumberList;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long duration;
@property (nonatomic, retain) VCSDate *endDate;
@property (nonatomic) bool hasDuration;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long interval;
@property (nonatomic, retain) NSArray *monthList;
@property (nonatomic, retain) NSMutableArray *occurrenceList;
@property (nonatomic, readonly) unsigned long long recurrenceType;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableArray *weekdayList;

- (void).cxx_destruct;
- (id)_decodeNumberList:(const char **)arg1 min:(long long)arg2 max:(long long)arg3;
- (id)dayList;
- (id)dayNumberList;
- (bool)decodeDaily:(const char **)arg1;
- (bool)decodeDigits:(const char **)arg1 withResult:(long long*)arg2;
- (bool)decodeDuration:(const char **)arg1;
- (bool)decodeInterval:(const char **)arg1;
- (bool)decodeMonthlyByDay:(const char **)arg1;
- (bool)decodeMonthlyByPos:(const char **)arg1;
- (bool)decodeOccurrenceList:(const char **)arg1;
- (bool)decodeWeekdayList:(const char **)arg1;
- (bool)decodeWeekly:(const char **)arg1;
- (bool)decodeYearlyByDay:(const char **)arg1;
- (bool)decodeYearlyByMonth:(const char **)arg1;
- (id)description;
- (id)dictify;
- (long long)duration;
- (id)endDate;
- (bool)hasDuration;
- (id)initWithString:(const char *)arg1;
- (long long)interval;
- (id)monthList;
- (id)occurrenceList;
- (unsigned long long)recurrenceType;
- (void)setDayList:(id)arg1;
- (void)setDayNumberList:(id)arg1;
- (void)setDuration:(long long)arg1;
- (void)setEndDate:(id)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setInterval:(long long)arg1;
- (void)setMonthList:(id)arg1;
- (void)setOccurrenceList:(id)arg1;
- (void)setWeekdayList:(id)arg1;
- (id)weekdayList;

@end
