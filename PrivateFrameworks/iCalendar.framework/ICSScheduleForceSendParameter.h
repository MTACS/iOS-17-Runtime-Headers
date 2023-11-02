
@interface ICSScheduleForceSendParameter : ICSPredefinedValue

+ (id)scheduleForceSendParameterFromCode:(int)arg1;
+ (id)scheduleForceSendParameterFromICSString:(id)arg1;

- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (Class)classForCoder;

@end
