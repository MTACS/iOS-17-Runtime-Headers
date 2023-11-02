
@interface SignpostSupportPIDBlocklist : SignpostSupportPIDFilter

- (unsigned long long)_compoundPredicateType;
- (bool)_wantsNotEqual;
- (bool)passesPIDNumber:(id)arg1;

@end
