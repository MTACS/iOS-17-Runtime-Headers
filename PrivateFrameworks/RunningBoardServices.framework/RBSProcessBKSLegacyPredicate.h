
@interface RBSProcessBKSLegacyPredicate : RBSProcessPredicateImpl

+ (id)legacyPredicate;
+ (id)legacyPredicateMatchingBundleIdentifier:(id)arg1;
+ (id)legacyPredicateMatchingProcessIdentifier:(id)arg1;

- (bool)isEqual:(id)arg1;
- (bool)matchesProcess:(id)arg1;

@end
