
@interface ICSCalendarServerAccessValue : ICSPredefinedValue

+ (id)calendarServerAccessFromCode:(int)arg1;
+ (id)calendarServerAccessFromICSString:(id)arg1;

- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (Class)classForCoder;

@end
