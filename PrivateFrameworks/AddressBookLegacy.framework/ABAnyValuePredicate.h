
@interface ABAnyValuePredicate : ABPredicate {
    int  _property;
}

@property (nonatomic) int property;

- (void)ab_bindWhereClauseComponentOfStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; double x3; bool x4; }*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3;
- (id)init;
- (bool)isValid;
- (int)property;
- (id)queryGroupByProperties;
- (id)queryJoinsInCompound:(bool)arg1 predicateIdentifier:(int)arg2;
- (id)queryWhereStringForPredicateIdentifier:(int)arg1;
- (void)setProperty:(int)arg1;

@end
