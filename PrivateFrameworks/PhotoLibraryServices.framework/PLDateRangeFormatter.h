
@interface PLDateRangeFormatter : NSObject {
    NSDateFormatter * _dayOfTheWeekDateFormatter;
    struct UDateIntervalFormat { } * _dayOfTheWeekIntervalFormat;
    struct UDateIntervalFormat { } * _differentMonthDayIntervalFormat;
    struct UDateIntervalFormat { } * _differentMonthDayNoYearIntervalFormat;
    bool  _includeDayNumbers;
    bool  _includeDayNumbersWhenMonthsDiffer;
    NSLocale * _locale;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSDateFormatter * _monthDateFormatter;
    struct UDateIntervalFormat { } * _monthDayIntervalFormat;
    struct UDateIntervalFormat { } * _monthDayNoYearIntervalFormat;
    struct UDateIntervalFormat { } * _monthIntervalFormat;
    bool  _monthOnly;
    bool  _monthWithDelimiterAndYear;
    NSDateFormatter * _monthYearDateFormatter;
    struct UDateIntervalFormat { } * _monthYearIntervalFormat;
    bool  _omitYear;
    long long  _preset;
    NSDateFormatter * _relativeDateFormatter;
    NSDateFormatter * _sameDayDateFormatter;
    NSDateFormatter * _sameDayNoYearDateFormatter;
    struct UDateIntervalFormat { } * _timeIntervalFormat;
    bool  _timeOnly;
    NSTimeZone * _timeZone;
    bool  _useLocalDates;
    bool  _useRelativeDayFormatting;
    bool  _useShortDaysInRanges;
    bool  _useShortMonths;
    bool  _useTime;
    NSDateFormatter * _yearDateFormatter;
    struct UDateIntervalFormat { } * _yearIntervalFormat;
    bool  _yearOnly;
}

@property (nonatomic, retain) NSLocale *locale;
@property (nonatomic) long long preset;
@property (nonatomic) bool useLocalDates;

+ (id)autoupdatingFormatterWithPreset:(long long)arg1;

- (void).cxx_destruct;
- (void)_currentLocaleDidChange:(id)arg1;
- (id)_dayDifferentMonthsTemplate;
- (id)_dayOfTheWeekDateFormatter;
- (struct UDateIntervalFormat { }*)_dayOfTheWeekIntervalFormat;
- (id)_dayTemplate;
- (struct UDateIntervalFormat { }*)_differentMonthDayIntervalFormat;
- (struct UDateIntervalFormat { }*)_differentMonthDayNoYearIntervalFormat;
- (void)_handlePresetDidChange;
- (void)_handleUseLocalDatesDidChange;
- (id)_monthDateFormatter;
- (struct UDateIntervalFormat { }*)_monthDayIntervalFormat;
- (struct UDateIntervalFormat { }*)_monthDayNoYearIntervalFormat;
- (struct UDateIntervalFormat { }*)_monthIntervalFormat;
- (id)_monthYearDateFormatter;
- (struct UDateIntervalFormat { }*)_monthYearIntervalFormat;
- (id)_relativeDateFormatter;
- (void)_resetFormatters;
- (id)_sameDayDateFormatter;
- (id)_sameDayNoYearDateFormatter;
- (id)_sameMonthTemplate;
- (void)_significantTimeChange:(id)arg1;
- (id)_stringFromDate:(id)arg1 toDate:(id)arg2 currentDate:(id)arg3;
- (void)_systemTimeZoneDidChange:(id)arg1;
- (struct UDateIntervalFormat { }*)_timeIntervalFormat;
- (id)_yearDateFormatter;
- (struct UDateIntervalFormat { }*)_yearIntervalFormat;
- (void)dealloc;
- (id)init;
- (id)initWithPreset:(long long)arg1;
- (id)localTimeZone;
- (id)locale;
- (long long)preset;
- (void)setLocale:(id)arg1;
- (void)setPreset:(long long)arg1;
- (void)setUseLocalDates:(bool)arg1;
- (id)stringFromDate:(id)arg1;
- (id)stringFromDate:(id)arg1 toDate:(id)arg2;
- (id)stringFromDate:(id)arg1 toDate:(id)arg2 currentDate:(id)arg3;
- (bool)useLocalDates;

@end
