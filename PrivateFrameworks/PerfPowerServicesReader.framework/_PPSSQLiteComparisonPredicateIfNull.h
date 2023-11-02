
@interface _PPSSQLiteComparisonPredicateIfNull : PPSSQLiteComparisonPredicate {
    id  _ifPropertyIsNullValue;
}

@property (nonatomic, readonly, copy) id ifPropertyIsNullValue;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)ifPropertyIsNullValue;
- (id)initWithProperty:(id)arg1 ifPropertyIsNullValue:(id)arg2 value:(id)arg3 comparisonType:(long long)arg4;
- (bool)isEqual:(id)arg1;
- (id)sqlForEntity:(id)arg1;

@end
