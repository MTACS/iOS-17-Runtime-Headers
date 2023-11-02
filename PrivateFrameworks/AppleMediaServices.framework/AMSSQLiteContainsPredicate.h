
@interface AMSSQLiteContainsPredicate : AMSSQLitePropertyPredicate <NSCopying> {
    bool  _negative;
    AMSSQLiteQuery * _query;
    NSString * _queryProperty;
    id  _values;
}

@property (getter=isNegative, nonatomic, readonly) bool negative;
@property (nonatomic, readonly) AMSSQLiteQuery *query;
@property (nonatomic, readonly) NSString *queryProperty;
@property (nonatomic, readonly) NSArray *values;

+ (id)containsPredicateWithProperty:(id)arg1 query:(id)arg2 queryProperty:(id)arg3;
+ (id)containsPredicateWithProperty:(id)arg1 values:(id)arg2;
+ (id)doesNotContainPredicateWithProperty:(id)arg1 values:(id)arg2;

- (void).cxx_destruct;
- (id)SQLForEntityClass:(Class)arg1;
- (void)applyBinding:(id)arg1 atIndex:(inout int*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isNegative;
- (id)query;
- (id)queryProperty;
- (id)values;

@end
