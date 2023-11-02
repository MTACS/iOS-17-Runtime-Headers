
@interface CDBRecurrenceGenerator : CalRecurrenceGenerator

- (id)_copyOccurrenceDatesWithBirthdayEvent:(void*)arg1 startDate:(id)arg2 endDate:(id)arg3 timeZone:(id)arg4 limit:(long long)arg5 locked:(bool)arg6;
- (void)_prepareForCalRecurrence:(void*)arg1 locked:(bool)arg2;
- (void)_setupForCalEvent:(void*)arg1 locked:(bool)arg2;
- (id)computeRecurrenceEndDateForCalEvent:(void*)arg1 recurrenceRule:(void*)arg2 locked:(bool)arg3;
- (id)copyOccurrenceDatesWithCalEvent:(void*)arg1 startDate:(id)arg2 endDate:(id)arg3 timeZone:(id)arg4 limit:(long long)arg5 locked:(bool)arg6;
- (id)copyOccurrenceDatesWithInitialDate:(id)arg1 calRecurrences:(id)arg2 rangeStart:(id)arg3 rangeEnd:(id)arg4 timeZone:(id)arg5;
- (id)nextOccurrenceDateWithCalRecurrences:(id)arg1 exceptionDates:(id)arg2 initialDate:(id)arg3 afterDate:(id)arg4;

@end
