
@interface HDWorkoutActivityPredicate : HDSQLitePredicate {
    HDSQLitePredicate * _subPredicate;
}

+ (id)predicateForSubPredicate:(id)arg1;

- (void).cxx_destruct;
- (id)SQLForEntityClass:(Class)arg1;
- (void)bindToStatement:(struct sqlite3_stmt { }*)arg1 bindingIndex:(inout int*)arg2;

@end
