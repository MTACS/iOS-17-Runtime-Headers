
@interface ICSTransparencyValue : ICSPredefinedValue

+ (id)transparencyTypeFromCode:(int)arg1;
+ (id)transparencyValueFromICSString:(id)arg1;

- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (Class)classForCoder;

@end
