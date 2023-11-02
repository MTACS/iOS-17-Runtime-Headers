
@interface SignpostSupportSubsystemCategoryBlocklist : SignpostSupportSubsystemCategoryFilter

- (unsigned long long)_compoundPredicateType;
- (void)_forceInclusionOfSubsystem:(id)arg1 category:(id)arg2;
- (bool)_wantsNotSubsystem;
- (void)addBlocklist:(id)arg1;
- (id)initWithEntries:(id)arg1;
- (id)liveStreamingPredicate;
- (bool)passesSubsystem:(id)arg1 category:(id)arg2;

@end
