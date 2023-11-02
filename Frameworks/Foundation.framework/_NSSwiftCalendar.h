
@interface _NSSwiftCalendar : _NSCalendarBridge {
    void _lock;
}

@property (nonatomic, readonly) NSString *calendarIdentifier;
@property (nonatomic, readonly) Class classForCoder;
@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic) long long firstWeekday;
@property (nonatomic, copy) NSLocale *locale;
@property (nonatomic) long long minimumDaysInFirstWeek;
@property (nonatomic, copy) NSTimeZone *timeZone;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_components:(unsigned long long)arg1 fromDate:(id)arg2;
- (id)_componentsInTimeZone:(id)arg1 fromDate:(id)arg2;
- (id)_dateFromComponents:(id)arg1;
- (void)_enumerateDatesStartingAfterDate:(id)arg1 matchingComponents:(id)arg2 options:(unsigned long long)arg3 usingBlock:(id /* block */)arg4;
- (id)calendarIdentifier;
- (Class)classForCoder;
- (long long)compareDate:(id)arg1 toDate:(id)arg2 toUnitGranularity:(unsigned long long)arg3;
- (long long)component:(unsigned long long)arg1 fromDate:(id)arg2;
- (id)components:(unsigned long long)arg1 fromDate:(id)arg2 toDate:(id)arg3 options:(unsigned long long)arg4;
- (id)components:(unsigned long long)arg1 fromDateComponents:(id)arg2 toDateComponents:(id)arg3 options:(unsigned long long)arg4;
- (id)copyWithZone:(void*)arg1;
- (bool)date:(id)arg1 matchesComponents:(id)arg2;
- (id)dateByAddingComponents:(id)arg1 toDate:(id)arg2 options:(unsigned long long)arg3;
- (id)dateByAddingUnit:(unsigned long long)arg1 value:(long long)arg2 toDate:(id)arg3 options:(unsigned long long)arg4;
- (id)dateBySettingHour:(long long)arg1 minute:(long long)arg2 second:(long long)arg3 ofDate:(id)arg4 options:(unsigned long long)arg5;
- (id)dateBySettingUnit:(unsigned long long)arg1 value:(long long)arg2 ofDate:(id)arg3 options:(unsigned long long)arg4;
- (id)dateWithEra:(long long)arg1 year:(long long)arg2 month:(long long)arg3 day:(long long)arg4 hour:(long long)arg5 minute:(long long)arg6 second:(long long)arg7 nanosecond:(long long)arg8;
- (id)dateWithEra:(long long)arg1 yearForWeekOfYear:(long long)arg2 weekOfYear:(long long)arg3 weekday:(long long)arg4 hour:(long long)arg5 minute:(long long)arg6 second:(long long)arg7 nanosecond:(long long)arg8;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (long long)firstWeekday;
- (void)getEra:(long long*)arg1 year:(long long*)arg2 month:(long long*)arg3 day:(long long*)arg4 fromDate:(id)arg5;
- (void)getEra:(long long*)arg1 yearForWeekOfYear:(long long*)arg2 weekOfYear:(long long*)arg3 weekday:(long long*)arg4 fromDate:(id)arg5;
- (void)getHour:(long long*)arg1 minute:(long long*)arg2 second:(long long*)arg3 nanosecond:(long long*)arg4 fromDate:(id)arg5;
- (id)initWithCheckedCalendarIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isDate:(id)arg1 equalToDate:(id)arg2 toUnitGranularity:(unsigned long long)arg3;
- (bool)isDate:(id)arg1 inSameDayAsDate:(id)arg2;
- (bool)isDateInToday:(id)arg1;
- (bool)isDateInTomorrow:(id)arg1;
- (bool)isDateInWeekend:(id)arg1;
- (bool)isDateInYesterday:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)locale;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })maximumRangeOfUnit:(unsigned long long)arg1;
- (long long)minimumDaysInFirstWeek;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })minimumRangeOfUnit:(unsigned long long)arg1;
- (id)nextDateAfterDate:(id)arg1 matchingComponents:(id)arg2 options:(unsigned long long)arg3;
- (id)nextDateAfterDate:(id)arg1 matchingHour:(long long)arg2 minute:(long long)arg3 second:(long long)arg4 options:(unsigned long long)arg5;
- (id)nextDateAfterDate:(id)arg1 matchingUnit:(unsigned long long)arg2 value:(long long)arg3 options:(unsigned long long)arg4;
- (bool)nextWeekendStartDate:(id*)arg1 interval:(double*)arg2 options:(unsigned long long)arg3 afterDate:(id)arg4;
- (long long)ordinalityOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3;
- (bool)rangeOfUnit:(unsigned long long)arg1 startDate:(id*)arg2 interval:(double*)arg3 forDate:(id)arg4;
- (bool)rangeOfWeekendStartDate:(id*)arg1 interval:(double*)arg2 containingDate:(id)arg3;
- (void)setFirstWeekday:(long long)arg1;
- (void)setLocale:(id)arg1;
- (void)setMinimumDaysInFirstWeek:(long long)arg1;
- (void)setTimeZone:(id)arg1;
- (id)startOfDayForDate:(id)arg1;
- (id)timeZone;

@end
