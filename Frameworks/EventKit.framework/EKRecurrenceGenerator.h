
@interface EKRecurrenceGenerator : CalRecurrenceGenerator

+ (int)_convertEKRecurrenceFrequencyToCalRecurrenceFrequency:(long long)arg1;
+ (id)_copyDatesForLunarBirthdayFromDate:(id)arg1 toDate:(id)arg2 inTimeZone:(id)arg3 lunarCalendarString:(id)arg4;
+ (id)_daysOfWeekFromICSRule:(id)arg1;
+ (bool)_isLunarBirthdayRecurrenceRule:(id)arg1 lunarCalendarString:(id)arg2;
+ (unsigned long long)_weekStartFromICSRule:(id)arg1;
+ (id)datesByExpandingRule:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 inTimezone:(id)arg4 isAllDay:(bool)arg5 lunarCalendarString:(id)arg6;

- (id)_copyOccurrenceDatesWithEKEvent:(id)arg1 recurrenceRule:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 timeZone:(id)arg5 exceptionDates:(id)arg6 limit:(long long)arg7 adjustDatesForAllDayEvents:(bool)arg8;
- (void)_prepareForEKRecurrence:(id)arg1 forCalendarItem:(id)arg2;
- (void)_setupForEKEvent:(id)arg1 adjustDatesForAllDayEvents:(bool)arg2;
- (id)adjustedExceptionDatesFromDates:(id)arg1 fromGMTToTimeZone:(id)arg2;
- (id)copyOccurrenceDatesWithEKEvent:(id)arg1 recurrenceRule:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 timeZone:(id)arg5 exceptionDates:(id)arg6 limit:(long long)arg7;
- (id)copyOccurrenceDatesWithEKEvent:(id)arg1 recurrenceRule:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 timeZone:(id)arg5 exceptionDates:(id)arg6 limit:(long long)arg7 adjustDatesForAllDayEvents:(bool)arg8;
- (id)copyOccurrenceDatesWithEKEvent:(id)arg1 recurrenceRule:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 timeZone:(id)arg5 limit:(long long)arg6;
- (id)copyOccurrenceDatesWithEKEvent:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 timeZone:(id)arg4 exceptionDates:(id)arg5 limit:(long long)arg6 adjustDatesForAllDayEvents:(bool)arg7;
- (id)copyOccurrenceDatesWithEKEvent:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 timeZone:(id)arg4 limit:(long long)arg5;
- (bool)isOccurrenceDate:(id)arg1 validForEvent:(id)arg2;
- (id)nextOccurrenceDateWithEKRecurrences:(id)arg1 forCalendarItem:(id)arg2 exceptionDates:(id)arg3 initialDate:(id)arg4 afterDate:(id)arg5;
- (id)nextOccurrenceDateWithEKRecurrences:(id)arg1 forCalendarItem:(id)arg2 exceptionDates:(id)arg3 initialDate:(id)arg4 afterDate:(id)arg5 inclusive:(bool)arg6;
- (id)nextOccurrenceDateWithEKRecurrences:(id)arg1 forCalendarItem:(id)arg2 initialDate:(id)arg3 afterDate:(id)arg4;
- (id)nextOccurrenceDateWithEKRecurrences:(id)arg1 forCalendarItem:(id)arg2 initialDate:(id)arg3 afterDate:(id)arg4 inclusive:(bool)arg5;
- (bool)occurrenceDate:(id)arg1 matchesRecurrenceRule:(id)arg2 forEvent:(id)arg3 includeDetachedEventsInSeries:(bool)arg4;

@end
