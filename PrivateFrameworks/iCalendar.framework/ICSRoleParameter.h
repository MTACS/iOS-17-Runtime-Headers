
@interface ICSRoleParameter : ICSPredefinedValue

+ (id)roleParameterFromCode:(int)arg1;
+ (id)roleParameterFromICSString:(id)arg1;

- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (Class)classForCoder;

@end
