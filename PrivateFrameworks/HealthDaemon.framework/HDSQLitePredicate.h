
@interface HDSQLitePredicate : NSObject <NSCopying>

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)booleanPredicateWithValue:(bool)arg1;
+ (id)compoundPredicateWithPredicate:(id)arg1 otherPredicate:(id)arg2;
+ (id)disjunctionWithPredicate:(id)arg1 otherPredicate:(id)arg2;
+ (id)falsePredicate;
+ (id)truePredicate;

- (id)SQLForEntityClass:(Class)arg1;
- (id)SQLJoinClausesForEntityClass:(Class)arg1;
- (void)bindToStatement:(struct sqlite3_stmt { }*)arg1 bindingIndex:(int*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isCompatibleWithPredicate:(id)arg1;
- (bool)isEqual:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthMenstrualCyclesDaemon.framework/HealthMenstrualCyclesDaemon

+ (id)hdmc_predicateForPossibleOngoingSamplesOnDayIndex:(long long)arg1;
+ (id)hdmc_predicateForSamplesInDayIndexRange:(struct { long long x1; long long x2; })arg1;

@end
