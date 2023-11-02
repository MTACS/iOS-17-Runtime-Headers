
@interface SignpostSupportUniquePIDBlocklist : SignpostSupportUniquePIDFilter

- (unsigned long long)_compoundPredicateType;
- (bool)_wantsNotEqual;
- (bool)passesUniquePIDNumber:(id)arg1;

@end
