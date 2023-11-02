
@interface BaseDateProvider : NSObject {
    NSCalendar * _calendar;
    NSLocale * _locale;
    NSTimeZone * _timeZone;
}

@property (nonatomic, retain) NSCalendar *calendar;
@property (nonatomic, retain) NSLocale *locale;
@property (nonatomic, retain) NSTimeZone *timeZone;
@property (nonatomic, readonly) NSDate *timerEndDate;
@property (nonatomic, readonly) NSDateInterval *timerInterval;
@property (nonatomic, readonly) long long updateType;
@property (nonatomic, readonly) unsigned long long updateWallClockAlignment;

- (void).cxx_destruct;
- (void)_endSession;
- (id)_sessionTextForIndex:(long long)arg1 context:(id)arg2;
- (void)_startSessionWithDate:(id)arg1;
- (id)_timeFormatByRemovingDesignatorOfTimeFormat:(id)arg1;
- (id)_timeFormatByRemovingWhitespaceAroundDesignatorOfTimeFormat:(id)arg1 andRemovingDesignator:(bool)arg2 designatorExists:(bool*)arg3;
- (id)_timeFormatByRemovingWhitespaceAroundDesignatorOfTimeFormat:(id)arg1 designatorExists:(bool*)arg2;
- (long long)_updateFrequency;
- (id)calendar;
- (id)formattedString;
- (id)formattedStringInContext:(id)arg1;
- (id)initWithCalendar:(id)arg1 locale:(id)arg2 timeZone:(id)arg3;
- (id)locale;
- (void)setCalendar:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (id)timeZone;
- (id)timerEndDate;
- (id)timerInterval;
- (id)updateInterval;
- (long long)updateType;
- (unsigned long long)updateWallClockAlignment;

@end
