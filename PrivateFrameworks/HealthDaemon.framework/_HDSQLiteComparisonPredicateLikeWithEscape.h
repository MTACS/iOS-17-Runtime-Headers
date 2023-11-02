
@interface _HDSQLiteComparisonPredicateLikeWithEscape : HDSQLiteComparisonPredicate {
    NSString * _escapeCharacter;
}

@property (nonatomic, readonly) NSString *escapeCharacter;

- (void).cxx_destruct;
- (id)SQLForEntityClass:(Class)arg1;
- (id)escapeCharacter;
- (id)initWithProperty:(id)arg1 value:(id)arg2 escapeCharacter:(id)arg3;

@end
