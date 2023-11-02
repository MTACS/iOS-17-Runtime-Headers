
@interface _DKEligibleForPredictionTombstoneRequirement : _DKTombstoneRequirement

- (void)assignPropertiesToTombstone:(id)arg1 extractedFromEvent:(id)arg2;
- (void)assignPropertiesToTombstone:(id)arg1 extractedFromPartialEvent:(id)arg2;
- (id)eligibleForPredictionKey;
- (id)eventPredicate;
- (id)identifier;
- (id)predicate;
- (id)propertiesToFetch;

@end
