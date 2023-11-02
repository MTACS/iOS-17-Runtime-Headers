
@interface HDAssociationEntityParentIDExistsPredicate : HDSQLitePredicate {
    bool  _exists;
    long long  _parentID;
}

+ (id)predicateWithParentID:(long long)arg1 exists:(bool)arg2;

- (id)SQLForEntityClass:(Class)arg1;
- (void)bindToStatement:(struct sqlite3_stmt { }*)arg1 bindingIndex:(int*)arg2;
- (id)description;

@end
