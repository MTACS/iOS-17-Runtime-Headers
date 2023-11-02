
@interface _UIDatePickerCalendarDaySet : NSObject {
    NSCalendar * _calendar;
    NSMutableDictionary * _loadedDays;
}

- (void).cxx_destruct;
- (id)_createDaysForMonth:(id)arg1;
- (id)_partialDaysForMonth:(id)arg1 atBeginningOfMonth:(bool)arg2 count:(unsigned long long)arg3;
- (void)cleanupDaysKeepingDaysForMonths:(id)arg1;
- (id)daysForMonth:(id)arg1 includingOverlapDays:(bool)arg2;
- (id)initWithCalendar:(id)arg1;
- (id)loadedDays;

@end
