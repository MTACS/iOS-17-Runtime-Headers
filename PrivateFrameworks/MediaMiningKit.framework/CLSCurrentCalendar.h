
@interface CLSCurrentCalendar : CLSAutoupdatingCurrentCalendar

+ (id)calendar;
+ (bool)closestWeekendLocalStartDate:(out id*)arg1 interval:(out double*)arg2 afterDate:(id)arg3;
+ (bool)dateIntervalIntersectsWeekend:(id)arg1;
+ (void)initialize;
+ (bool)isWeekendDate:(id)arg1;
+ (bool)nextWeekendLocalStartDate:(out id*)arg1 interval:(out double*)arg2 options:(unsigned long long)arg3 afterDate:(id)arg4;
+ (bool)rangeOfWeekendLocalStartDate:(out id*)arg1 interval:(out double*)arg2 containingDate:(id)arg3;
+ (void)update;

@end
