
@interface ICSAlternateTimeProposalStatusParameter : ICSPredefinedValue

+ (id)statusParameterFromCode:(int)arg1;
+ (id)statusParameterFromICSString:(id)arg1;

- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (Class)classForCoder;

@end
