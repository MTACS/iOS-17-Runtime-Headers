
@interface _HDSQLiteComparisonPredicateSubquery : HDSQLiteComparisonPredicate {
    HDSQLiteQueryDescriptor * _subqueryDescriptor;
    NSArray * _subqueryProperties;
}

@property (nonatomic, readonly, copy) HDSQLiteQueryDescriptor *subqueryDescriptor;
@property (nonatomic, readonly, copy) NSArray *subqueryProperties;

- (void).cxx_destruct;
- (id)SQLForEntityClass:(Class)arg1;
- (void)bindToStatement:(struct sqlite3_stmt { }*)arg1 bindingIndex:(int*)arg2;
- (id)description;
- (unsigned long long)hash;
- (id)initWithProperty:(id)arg1 comparisonType:(long long)arg2 subqueryDescriptor:(id)arg3 subqueryProperties:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)subqueryDescriptor;
- (id)subqueryProperties;

@end
