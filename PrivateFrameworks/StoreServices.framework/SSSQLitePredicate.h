
@interface SSSQLitePredicate : NSObject <NSCopying>

- (id)SQLForEntityClass:(Class)arg1;
- (id)SQLJoinClausesForEntityClass:(Class)arg1;
- (void)bindToStatement:(struct sqlite3_stmt { }*)arg1 bindingIndex:(inout int*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
