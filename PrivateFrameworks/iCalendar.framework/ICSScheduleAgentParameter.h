
@interface ICSScheduleAgentParameter : ICSPredefinedValue

+ (id)scheduleAgentParameterFromCode:(int)arg1;
+ (id)scheduleAgentParameterFromICSString:(id)arg1;

- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (Class)classForCoder;

@end
