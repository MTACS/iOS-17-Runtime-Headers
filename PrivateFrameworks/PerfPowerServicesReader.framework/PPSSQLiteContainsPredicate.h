
@interface PPSSQLiteContainsPredicate : PPSSQLitePropertyPredicate <NSCopying> {
    bool  _isNegative;
    NSArray * _values;
}

@property (nonatomic, readonly) bool isNegative;
@property (nonatomic, readonly, copy) NSArray *values;

+ (id)_arrayFromValues:(id)arg1;
+ (id)_containsPredicateWithProperty:(id)arg1 values:(id)arg2 isNegative:(bool)arg3;
+ (id)containsPredicateWithProperty:(id)arg1 values:(id)arg2;
+ (id)doesNotContainPredicateWithProperty:(id)arg1 values:(id)arg2;

- (void).cxx_destruct;
- (void)bindToStatement:(struct sqlite3_stmt { }*)arg1 bindingIndex:(inout int*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithProperty:(id)arg1 values:(id)arg2 isNegative:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isNegative;
- (id)sqlForEntity:(id)arg1;
- (id)values;

@end
