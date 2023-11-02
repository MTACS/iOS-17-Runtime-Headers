
@interface _HDSQLiteComparisonPredicateIfNull : HDSQLiteComparisonPredicate {
    <NSObject> * _ifPropertyIsNullValue;
}

@property (nonatomic, readonly, copy) <NSObject> *ifPropertyIsNullValue;

- (void).cxx_destruct;
- (id)SQLForEntityClass:(Class)arg1;
- (void)bindToStatement:(struct sqlite3_stmt { }*)arg1 bindingIndex:(int*)arg2;
- (id)description;
- (unsigned long long)hash;
- (id)ifPropertyIsNullValue;
- (id)initWithProperty:(id)arg1 ifPropertyIsNullValue:(id)arg2 value:(id)arg3 comparisonType:(long long)arg4;
- (bool)isEqual:(id)arg1;

@end
