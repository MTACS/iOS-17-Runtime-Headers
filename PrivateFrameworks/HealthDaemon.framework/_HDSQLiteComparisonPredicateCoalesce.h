
@interface _HDSQLiteComparisonPredicateCoalesce : HDSQLiteComparisonPredicate {
    NSArray * _properties;
}

@property (nonatomic, readonly, copy) NSArray *properties;

- (void).cxx_destruct;
- (id)SQLForEntityClass:(Class)arg1;
- (id)SQLJoinClausesForEntityClass:(Class)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithProperties:(id)arg1 value:(id)arg2 comparisonType:(long long)arg3;
- (bool)isCompatibleWithPredicate:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)properties;

@end
