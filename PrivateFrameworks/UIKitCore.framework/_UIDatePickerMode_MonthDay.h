
@interface _UIDatePickerMode_MonthDay : _UIDatePickerMode_Date

+ (long long)datePickerMode;
+ (unsigned long long)extractableCalendarUnits;

- (unsigned long long)nextUnitLargerThanUnit:(unsigned long long)arg1;
- (unsigned long long)nextUnitSmallerThanUnit:(unsigned long long)arg1;

@end
