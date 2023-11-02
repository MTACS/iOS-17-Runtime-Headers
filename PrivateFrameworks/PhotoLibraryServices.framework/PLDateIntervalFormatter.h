
@interface PLDateIntervalFormatter : NSObject {
    bool  _alwaysShowYear;
    NSDateIntervalFormatter * _dateIntervalFormatter;
    NSCalendar * _gmtCalendar;
    NSLocale * _locale;
}

@property (nonatomic) bool alwaysShowYear;
@property (nonatomic, readonly) NSDateIntervalFormatter *dateIntervalFormatter;
@property (nonatomic, readonly) NSCalendar *gmtCalendar;
@property (nonatomic, retain) NSLocale *locale;

+ (id)_currentLocalDate;
+ (id)_dateFormatForDateFormatterType:(unsigned long long)arg1 displayYear:(bool)arg2 displayLongMonth:(bool)arg3;
+ (id)stringFromStartDate:(id)arg1 endDate:(id)arg2 type:(unsigned long long)arg3;
+ (id)stringFromStartDate:(id)arg1 endDate:(id)arg2 type:(unsigned long long)arg3 showLongMonthFormatIfNeeded:(bool)arg4;

- (void).cxx_destruct;
- (bool)_yearIsNeededForDisplayingDate:(id)arg1;
- (bool)alwaysShowYear;
- (id)dateIntervalFormatter;
- (id)gmtCalendar;
- (id)init;
- (id)locale;
- (void)setAlwaysShowYear:(bool)arg1;
- (void)setLocale:(id)arg1;
- (id)stringFromStartDate:(id)arg1 endDate:(id)arg2 type:(unsigned long long)arg3;
- (id)stringFromStartDate:(id)arg1 endDate:(id)arg2 type:(unsigned long long)arg3 showLongMonthFormatIfNeeded:(bool)arg4;

@end
