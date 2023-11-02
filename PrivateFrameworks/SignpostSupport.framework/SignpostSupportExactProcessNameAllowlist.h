
@interface SignpostSupportExactProcessNameAllowlist : SignpostSupportExactProcessNameFilter

- (unsigned long long)_compoundPredicateType;
- (bool)_wantsNotEqual;
- (bool)passesProcessName:(id)arg1;

@end
