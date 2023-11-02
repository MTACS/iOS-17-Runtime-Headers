
@interface ICSClassificationValue : ICSPredefinedValue

+ (id)classificationFromCode:(int)arg1;
+ (id)classificationValueFromICSString:(id)arg1;

- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (Class)classForCoder;

@end
