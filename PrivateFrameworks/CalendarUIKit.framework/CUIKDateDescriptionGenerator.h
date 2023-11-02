
@interface CUIKDateDescriptionGenerator : CUIKDescriptionGenerator {
    NSDateFormatter * _abbrevDayFormatter;
    NSDateFormatter * _customFormatter;
    NSDateFormatter * _dayFormatter;
    NSDateFormatter * _dayOfWeekFormatter;
    NSDateFormatter * _fullStyleDateFormatter;
    NSMutableDictionary * _longFormatters;
    NSObject<OS_dispatch_queue> * _serialFormatterEditQueue;
    NSDateFormatter * _standardTimeFormatter;
    NSDateFormatter * _timeFormatter;
}

+ (id)_dateAfterTodayNextWeekFormatStringForDayOfWeek:(long long)arg1 generateLowercaseString:(bool)arg2;
+ (id)_dateAfterTodayThisWeekFormatStringForDayOfWeek:(long long)arg1 generateLowercaseString:(bool)arg2;
+ (id)_dateBeforeTodayLastWeekFormatStringForDayOfWeek:(long long)arg1 generateLowercaseString:(bool)arg2;
+ (id)_dateBeforeTodayThisWeekFormatStringForDayOfWeek:(long long)arg1 generateLowercaseString:(bool)arg2;
+ (id)sharedGenerator;

- (void).cxx_destruct;
- (id)_customFormatter;
- (id)_dateFormatterWithLongFormat:(id)arg1;
- (id)_dateStringForDate:(id)arg1 relativeToReferenceDate:(id)arg2 allDay:(bool)arg3 shortFormat:(bool)arg4 lowercase:(bool)arg5;
- (void)_initializeFormatters;
- (id)_stringForDate:(id)arg1 relativeToReferenceDate:(id)arg2 withLongFormatString:(id)arg3 useAbbreviatedFormats:(bool)arg4 lowerCase:(bool)arg5;
- (id)_timeStringForDate:(id)arg1;
- (id)abbreviatedDayFormatter;
- (id)dateStringForDate:(id)arg1 allDay:(bool)arg2 shortFormat:(bool)arg3;
- (id)dateStringForDate:(id)arg1 allDay:(bool)arg2 standalone:(bool)arg3 shortFormat:(bool)arg4;
- (id)dateStringForDate:(id)arg1 relativeToReferenceDate:(id)arg2 allDay:(bool)arg3 standalone:(bool)arg4 shortFormat:(bool)arg5;
- (id)dayFormatter;
- (id)dayOfWeekFormatter;
- (id)formatterForLongFormat:(id)arg1;
- (id)fullStyleDateFormatter;
- (id)init;
- (id)standardTimeFormatter;
- (id)stringForDate:(id)arg1 withLongFormatString:(id)arg2 useAbbreviatedFormats:(bool)arg3 lowerCase:(bool)arg4;
- (id)timeFormatter;
- (id)timeStringForDate:(id)arg1 inTimeZone:(id)arg2;

@end
