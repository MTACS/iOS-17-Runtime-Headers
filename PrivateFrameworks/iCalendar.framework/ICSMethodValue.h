
@interface ICSMethodValue : ICSPredefinedValue

+ (id)methodParameterFromCode:(int)arg1;
+ (id)methodValueFromICSString:(id)arg1;

- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (Class)classForCoder;

@end
