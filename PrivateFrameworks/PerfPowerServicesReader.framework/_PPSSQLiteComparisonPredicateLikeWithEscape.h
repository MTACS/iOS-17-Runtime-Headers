
@interface _PPSSQLiteComparisonPredicateLikeWithEscape : PPSSQLiteComparisonPredicate {
    NSString * _escapeCharacter;
}

@property (nonatomic, readonly, copy) NSString *escapeCharacter;

- (void).cxx_destruct;
- (id)escapeCharacter;
- (id)initWithProperty:(id)arg1 value:(id)arg2 escapeCharacter:(id)arg3;
- (id)sqlForEntity:(id)arg1;

@end
