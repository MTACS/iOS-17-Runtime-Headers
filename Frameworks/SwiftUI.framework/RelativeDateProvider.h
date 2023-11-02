
@interface RelativeDateProvider : BaseDateProvider {
    unsigned long long  _calendarUnits;
    bool  _countdown;
    NSDate * _date;
    bool  _disableOffsetPrefix;
    double  _elapsedTime;
    NSDateComponentsFormatter * _formatter;
    NSDateInterval * _interval;
    unsigned long long  _lowFidelityTimerStyle;
    NSDate * _mostRecentSessionDate;
    double  _pause;
    bool  _pauseTimerAtZero;
    long long  _relativeDateStyle;
    NSDateComponents * _sessionComponents;
    bool  _sessionInProgress;
    long long  _sessionTimePeriod;
    unsigned long long  _sessionVisibleUnits;
    bool  _showLeadingMinutes;
    bool  _twoDigitMinuteZeroPadding;
    bool  _wantsSubseconds;
}

@property (nonatomic) unsigned long long calendarUnits;
@property (nonatomic) bool countdown;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic) bool disableOffsetPrefix;
@property (nonatomic, retain) NSDateComponentsFormatter *formatter;
@property (nonatomic, retain) NSDateInterval *interval;
@property (nonatomic) unsigned long long lowFidelityTimerStyle;
@property (nonatomic) double pause;
@property (nonatomic) bool pauseTimerAtZero;
@property (nonatomic) long long relativeDateStyle;
@property (nonatomic) bool showLeadingMinutes;
@property (nonatomic) bool twoDigitMinuteZeroPadding;
@property (nonatomic) bool wantsSubseconds;

+ (bool)_configureFormatter:(id)arg1 fallbackIndex:(unsigned long long)arg2 style:(long long)arg3 context:(id)arg4;
+ (double)noPause;

- (void).cxx_destruct;
- (id)_componentsForDate:(id)arg1 visibleUnits:(unsigned long long*)arg2;
- (void)_configureFormatterForTimerStyle;
- (void)_endSession;
- (id)_sessionTextForIndex:(long long)arg1 context:(id)arg2;
- (id)_signPrefixString;
- (void)_startSessionWithDate:(id)arg1;
- (long long)_timePeriodForElapsedTime:(double)arg1;
- (bool)_timerIsPausedAtZero;
- (long long)_updateFrequency;
- (unsigned long long)calendarUnits;
- (id)componentsForGameClock:(id)arg1 units:(unsigned long long)arg2;
- (bool)countdown;
- (id)date;
- (bool)disableOffsetPrefix;
- (double)elapsedTimeForGameClock:(id)arg1;
- (id)formatter;
- (id)initWithDate:(id)arg1 style:(long long)arg2 units:(unsigned long long)arg3 calendar:(id)arg4 locale:(id)arg5 timeZone:(id)arg6;
- (id)initWithInterval:(id)arg1 countdown:(bool)arg2 pause:(double)arg3 units:(unsigned long long)arg4 calendar:(id)arg5 locale:(id)arg6 timeZone:(id)arg7;
- (id)interval;
- (unsigned long long)lowFidelityTimerStyle;
- (double)pause;
- (bool)pauseTimerAtZero;
- (long long)relativeDateStyle;
- (void)setCalendarUnits:(unsigned long long)arg1;
- (void)setCountdown:(bool)arg1;
- (void)setDate:(id)arg1;
- (void)setDisableOffsetPrefix:(bool)arg1;
- (void)setFormatter:(id)arg1;
- (void)setInterval:(id)arg1;
- (void)setLowFidelityTimerStyle:(unsigned long long)arg1;
- (void)setPause:(double)arg1;
- (void)setPauseTimerAtZero:(bool)arg1;
- (void)setRelativeDateStyle:(long long)arg1;
- (void)setShowLeadingMinutes:(bool)arg1;
- (void)setTwoDigitMinuteZeroPadding:(bool)arg1;
- (void)setWantsSubseconds:(bool)arg1;
- (bool)showLeadingMinutes;
- (id)timerEndDate;
- (id)timerInterval;
- (bool)twoDigitMinuteZeroPadding;
- (long long)updateType;
- (bool)wantsSubseconds;

@end
