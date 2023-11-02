
@interface BSDateFormatterCache : NSObject {
    NSDateFormatter * _abbrevDayMonthFormatter;
    NSDateFormatter * _abbrevDayMonthTimeFormatter;
    NSDateFormatter * _abbrevDayOfWeekWithMonthDayFormatter;
    NSDateComponentsFormatter * _abbreviatedTimerFormatter;
    NSDateComponentsFormatter * _alarmSnoozeFormatter;
    NSDateFormatter * _dayMonthYearFormatter;
    NSDateFormatter * _dayOfWeekFormatter;
    NSDateFormatter * _dayOfWeekMonthDayFormatter;
    NSDateFormatter * _dayOfWeekWithTimeFormatter;
    NSNumberFormatter * _decimalFormatter;
    NSDateComponentsFormatter * _durationFormatter;
    NSLocale * _locale;
    NSDateFormatter * _longYMDHMSNoSpaceFormatter;
    NSDateFormatter * _longYMDHMSZFormatter;
    NSDateFormatter * _longYMDHMSZPosixLocaleFormatter;
    NSDateFormatter * _multiLineDayOfWeekMonthDayFormatter;
    NSDateFormatter * _relativeDateFormatter;
    NSDateFormatter * _relativeDateTimeFormatter;
    NSDateFormatter * _shortDayMonthTimeFormatter;
    NSDateFormatter * _timeFormatter;
    NSDateFormatter * _timeNoAMPMFormatter;
    NSNumberFormatter * _timerNumberFormatter;
}

+ (id)formatterForDateAsTimeNoAMPMWithLocale:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_resetFormatters;
- (void)_resetFormatters:(id)arg1;
- (void)dealloc;
- (id)formatAbbreviatedTimerDuration:(double)arg1;
- (id)formatAlarmSnoozeDuration:(double)arg1;
- (id)formatDateAsAbbreviatedDayMonthStyle:(id)arg1;
- (id)formatDateAsAbbreviatedDayMonthWithTimeStyle:(id)arg1;
- (id)formatDateAsAbbreviatedDayOfWeekMonthDayStyle:(id)arg1;
- (id)formatDateAsAbbreviatedDayOfWeekWithTime:(id)arg1;
- (id)formatDateAsDayMonthYearStyle:(id)arg1;
- (id)formatDateAsDayOfWeek:(id)arg1;
- (id)formatDateAsDayOfWeekMonthDayStyle:(id)arg1;
- (id)formatDateAsLongYMDHMSNoSpacesWithDate:(id)arg1;
- (id)formatDateAsLongYMDHMSZPosixLocaleWithDate:(id)arg1;
- (id)formatDateAsLongYMDHMSZWithDate:(id)arg1;
- (id)formatDateAsMultiLineDayOfWeekMonthDayStyle:(id)arg1;
- (id)formatDateAsRelativeDateAndTimeStyle:(id)arg1;
- (id)formatDateAsRelativeDateStyle:(id)arg1;
- (id)formatDateAsShortDayMonthWithTimeStyle:(id)arg1;
- (id)formatDateAsTimeNoAMPM:(id)arg1;
- (id)formatDateAsTimeStyle:(id)arg1;
- (id)formatDuration:(double)arg1;
- (id)formatNumberAsDecimal:(id)arg1;
- (id)formatTimerDuration:(double)arg1;
- (id)init;
- (void)resetFormattersIfNecessary;
- (bool)supportsMultiLineDayOfWeekMonthDayStyle;

@end
