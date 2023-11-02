
@interface ML3SpotlightMatchPredicate : ML3Predicate {
    ML3SpotlightNameCache * _names;
    NSArray * _searchProperties;
    NSString * _searchString;
}

@property (nonatomic, readonly) NSString *searchString;

+ (id)predicateWithProperties:(id)arg1 searchString:(id)arg2;

- (id)SQLJoinClausesForClass:(Class)arg1;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (void)dealloc;
- (id)initWithSearchString:(id)arg1 matchingProperties:(id)arg2;
- (id)searchString;
- (id)spotlightPredicate;

@end
