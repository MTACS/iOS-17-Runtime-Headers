
@interface HDSQLiteContainsPredicate : HDSQLitePropertyPredicate <NSCopying> {
    bool  _contains;
    NSArray * _values;
}

@property (nonatomic, readonly) bool contains;
@property (nonatomic, readonly, copy) NSArray *values;

+ (id)containsPredicateWithProperty:(id)arg1 values:(id)arg2;
+ (id)doesNotContainPredicateWithProperty:(id)arg1 values:(id)arg2;

- (void).cxx_destruct;
- (id)SQLForEntityClass:(Class)arg1;
- (void)bindToStatement:(struct sqlite3_stmt { }*)arg1 bindingIndex:(int*)arg2;
- (bool)contains;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithProperty:(id)arg1 values:(id)arg2 contains:(bool)arg3;
- (bool)isCompatibleWithPredicate:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)values;

@end
