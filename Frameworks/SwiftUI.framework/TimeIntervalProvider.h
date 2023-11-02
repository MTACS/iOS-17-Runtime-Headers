
@interface TimeIntervalProvider : BaseDateProvider {
    NSDateFormatter * _dateFormatter;
    NSDate * _endDate;
    NSArray * _fallbackSequence;
    NSDate * _startDate;
}

@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, retain) NSDate *startDate;

- (void).cxx_destruct;
- (id)_dateIntervalNarrowText;
- (id)_dateIntervalTextWithNarrow:(bool)arg1;
- (id)_dateIntervalWideText;
- (id)_fallbackSequence;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeOfAnnontatedTime:(id)arg1 matchingPattern:(id /* block */)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeOfDesignatorInAnnotatedTime:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeOfHoursInAnnotatedTime:(id)arg1;
- (id)_sessionTextForIndex:(long long)arg1 context:(id)arg2;
- (id)_startTimeDropMinutesText;
- (id)_startTimeFullText;
- (id)_stringByRemovingDesignatorRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 fromString:(id)arg2;
- (id)_textForSequenceItem:(long long)arg1;
- (id)_timeIntervalDropMinutesText;
- (id)_timeIntervalFullText;
- (id)_timeIntervalTextWithDropMinutes:(bool)arg1 onlyStartDate:(bool)arg2;
- (id)endDate;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 calendar:(id)arg3 locale:(id)arg4 timeZone:(id)arg5;
- (void)setEndDate:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;

@end
