
@interface _DKSyncStreamsTombstoneRequirement : _DKTombstoneRequirement

- (void)assignPropertiesToTombstone:(id)arg1 extractedFromEvent:(id)arg2;
- (void)assignPropertiesToTombstone:(id)arg1 extractedFromPartialEvent:(id)arg2;
- (id)eventPredicate;
- (id)predicate;
- (id)propertiesToFetch;

@end
