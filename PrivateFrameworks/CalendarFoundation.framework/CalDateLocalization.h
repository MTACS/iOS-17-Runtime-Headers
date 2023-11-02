
@interface CalDateLocalization : NSObject

+ (id)ICUFormatForKey:(id)arg1;
+ (id)ICUFormats;
+ (id)_hourSymbolInFormat:(id)arg1;
+ (id)calendarDayFormatter;
+ (struct __CFDateFormatter { }*)dateFormatterForKey:(id)arg1;
+ (id)dateFormatterForKey:(id)arg1 formatString:(id)arg2;
+ (id)dateFormatters;
+ (bool)dateIsWeekend:(id)arg1;
+ (id)dateStringRepresentationForEventCompontentsStartDate:(id)arg1 endDate:(id)arg2 allDay:(bool)arg3 timeZone:(id)arg4;
+ (id)formatKeyForHourString;
+ (void)generateAdditionalPrecodedFormatters:(id)arg1;
+ (void)generateDerivedTimeFormats:(id)arg1;
+ (void)generateLocalizedDateTimeFormats;
+ (void)generatePreferedOrders;
+ (void)generateStandardFormatters:(id)arg1;
+ (bool)hasAMPM;
+ (void)initializeFormatters;
+ (id)longStringForDateAndTime:(id)arg1 inTimeZone:(id)arg2;
+ (void)rebuildFormatters;
+ (void)rebuildWeekendDays;
+ (bool)requiresSingularLocalizationForDate:(id)arg1;
+ (void)setupFormat:(id)arg1 forKey:(id)arg2 locale:(id)arg3;
+ (void)setupFormatTemplate:(id)arg1 forKey:(id)arg2 locale:(id)arg3;
+ (void)setupFormatter:(struct __CFDateFormatter { }*)arg1 forKey:(id)arg2;
+ (id)sharedDateFormatter;
+ (bool)shouldUseHourMinutesWithoutAMPMForHours;
+ (id)sizeOrderedAllDateFormatsWithoutYear;
+ (id)sizeOrderedDateFormats;
+ (id)sizeOrderedDateFormatsWithYear;
+ (id)sizeOrderedDateFormatsWithoutYear;
+ (bool)uses24HourTime;
+ (bool)weekdayIsWeekend:(long long)arg1;
+ (id)weekendDays;

@end
