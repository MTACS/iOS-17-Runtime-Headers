
@interface PPSSQLiteCompoundPredicate : PPSSQLitePropertyPredicate <NSCopying> {
    NSString * _combineOperator;
    NSArray * _predicates;
    bool  _trueIfNoPredicates;
    bool  _unary;
}

@property (nonatomic, readonly, copy) NSArray *predicates;

+ (id)negatedPredicate:(id)arg1;
+ (id)predicateMatchingAllPredicates:(id)arg1;
+ (id)predicateMatchingAnyPredicates:(id)arg1;
+ (id)predicateWithProperty:(id)arg1 equalToValues:(id)arg2;
+ (id)predicateWithProperty:(id)arg1 notEqualToValues:(id)arg2;
+ (id)predicateWithProperty:(id)arg1 values:(id)arg2 comparisonType:(long long)arg3;

- (void).cxx_destruct;
- (void)bindToStatement:(struct sqlite3_stmt { }*)arg1 bindingIndex:(inout int*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)predicates;
- (id)sqlForEntity:(id)arg1;
- (id)sqlJoinClausesForEntity:(id)arg1;

@end
