
@interface HDSQLiteJoinClause : NSObject {
    NSString * _additionalPredicate;
    NSString * _joinAsName;
    long long  _joinType;
    NSString * _localReferenceProperty;
    NSString * _localTable;
    Class  _targetEntityClass;
    NSString * _targetKeyProperty;
}

@property (nonatomic, readonly, copy) NSString *additionalPredicate;
@property (nonatomic, readonly, copy) NSString *joinAsName;
@property (nonatomic, readonly) long long joinType;
@property (nonatomic, readonly, copy) NSString *localReferenceProperty;
@property (nonatomic, readonly, copy) NSString *localTable;
@property (nonatomic, readonly) Class targetEntityClass;
@property (nonatomic, readonly, copy) NSString *targetKeyProperty;

+ (id)innerJoinClauseFromTable:(id)arg1 toTargetEntity:(Class)arg2 as:(id)arg3 localReference:(id)arg4 targetKey:(id)arg5;
+ (id)leftJoinClauseFromTable:(id)arg1 toTargetEntity:(Class)arg2 as:(id)arg3 localReference:(id)arg4 targetKey:(id)arg5;
+ (id)leftJoinClauseFromTable:(id)arg1 toTargetEntity:(Class)arg2 as:(id)arg3 localReference:(id)arg4 targetKey:(id)arg5 additionalPredicate:(id)arg6;

- (void).cxx_destruct;
- (id)SQLJoinClause;
- (id)additionalPredicate;
- (id)copyWithJoinType:(long long)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)joinAsName;
- (long long)joinType;
- (id)localReferenceProperty;
- (id)localTable;
- (Class)targetEntityClass;
- (id)targetKeyProperty;

@end
