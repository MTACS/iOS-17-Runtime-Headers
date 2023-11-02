
@interface PPSSQLitePredicate : NSObject <NSCopying>

- (void)bindToStatement:(struct sqlite3_stmt { }*)arg1 bindingIndex:(inout int*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)sqlForEntity:(id)arg1;
- (id)sqlJoinClausesForEntity:(id)arg1;

@end
