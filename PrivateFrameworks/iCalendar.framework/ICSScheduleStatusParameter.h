
@interface ICSScheduleStatusParameter : ICSPredefinedValue

+ (id)scheduleStatusParameterFromCode:(int)arg1;
+ (id)scheduleStatusParameterFromICSString:(id)arg1;

- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (Class)classForCoder;

@end
