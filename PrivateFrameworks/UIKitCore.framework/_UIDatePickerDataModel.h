
@interface _UIDatePickerDataModel : NSObject {
    NSCalendar * _calendar;
    _UIDatePickerChineseCalendar * _chineseWrapperCalendar;
    NSString * _customFontDesign;
    NSDate * _date;
    long long  _datePickerMode;
    long long  _datePickerStyle;
    _UIDatePickerDateRange * _dateRange;
    NSCalendar * _effectiveCalendar;
    NSLocale * _effectiveLocale;
    NSDateComponents * _lastSelectedDateComponents;
    NSCalendar * _lastSelectedDateComponentsCalendar;
    NSLocale * _locale;
    long long  _minuteInterval;
    bool  _roundsToMinuteInterval;
    NSTimeZone * _timeZone;
}

@property (nonatomic, copy) NSCalendar *calendar;
@property (nonatomic, retain) NSString *customFontDesign;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic) long long datePickerMode;
@property (nonatomic) long long datePickerStyle;
@property (nonatomic, readonly) _UIDatePickerDateRange *dateRange;
@property (nonatomic, readonly) NSCalendar *effectiveCalendar;
@property (nonatomic, readonly) NSDate *effectiveDate;
@property (nonatomic, readonly, copy) NSDateComponents *effectiveDateComponents;
@property (nonatomic, readonly) NSLocale *effectiveLocale;
@property (nonatomic, readonly) bool followsSystemHourCycle;
@property (nonatomic, readonly) NSCalendar *formattingCalendar;
@property (nonatomic, retain) NSDateComponents *lastSelectedDateComponents;
@property (nonatomic, retain) NSLocale *locale;
@property (nonatomic, retain) NSDate *maximumDate;
@property (nonatomic, retain) NSDate *minimumDate;
@property (nonatomic) long long minuteInterval;
@property (nonatomic) bool roundsToMinuteInterval;
@property (nonatomic, retain) NSTimeZone *timeZone;

- (void).cxx_destruct;
- (id)_dateForRoundingDateToMinuteInterval:(id)arg1;
- (void)_setupDerivedLocaleAndCalendars;
- (id)calendar;
- (id)createDatePickerRepresentingDataModel;
- (id)createDatePickerRepresentingDataModelForMode:(long long)arg1 style:(long long)arg2;
- (id)customFontDesign;
- (id)date;
- (long long)datePickerMode;
- (long long)datePickerStyle;
- (id)dateRange;
- (id)effectiveCalendar;
- (id)effectiveDate;
- (id)effectiveDateComponents;
- (id)effectiveLocale;
- (bool)followsSystemHourCycle;
- (id)formattingCalendar;
- (id)init;
- (id)lastSelectedDateComponents;
- (id)locale;
- (id)maximumDate;
- (id)minimumDate;
- (long long)minuteInterval;
- (void)resetForCurrentLocaleOrCalendarChange;
- (bool)roundsToMinuteInterval;
- (void)setCalendar:(id)arg1;
- (void)setCustomFontDesign:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setDatePickerMode:(long long)arg1;
- (void)setDatePickerStyle:(long long)arg1;
- (void)setLastSelectedDateComponents:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setMaximumDate:(id)arg1;
- (void)setMinimumDate:(id)arg1;
- (void)setMinuteInterval:(long long)arg1;
- (void)setRoundsToMinuteInterval:(bool)arg1;
- (void)setTimeZone:(id)arg1;
- (id)timeZone;

@end
