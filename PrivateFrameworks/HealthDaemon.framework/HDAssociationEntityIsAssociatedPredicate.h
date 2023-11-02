
@interface HDAssociationEntityIsAssociatedPredicate : HDSQLitePredicate {
    bool  _inverted;
}

+ (id)predicateWithInvertedCondition:(bool)arg1;

- (id)SQLForEntityClass:(Class)arg1;
- (id)SQLJoinClausesForEntityClass:(Class)arg1;
- (void)bindToStatement:(struct sqlite3_stmt { }*)arg1 bindingIndex:(int*)arg2;

@end
