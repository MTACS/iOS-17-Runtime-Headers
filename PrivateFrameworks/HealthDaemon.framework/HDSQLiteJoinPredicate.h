
@interface HDSQLiteJoinPredicate : HDSQLiteTruePredicate <NSCopying> {
    NSSet * _joinClauses;
}

@property (nonatomic, readonly, copy) NSSet *joinClauses;

+ (id)predicateWithJoinClauses:(id)arg1;

- (void).cxx_destruct;
- (id)SQLJoinClausesForEntityClass:(Class)arg1;
- (id)joinClauses;

@end
