
@interface ICSParticipationStatusParameter : ICSPredefinedValue

+ (id)participationStatusParameterFromCode:(int)arg1;
+ (id)participationStatusParameterFromICSString:(id)arg1;

- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (Class)classForCoder;

@end
