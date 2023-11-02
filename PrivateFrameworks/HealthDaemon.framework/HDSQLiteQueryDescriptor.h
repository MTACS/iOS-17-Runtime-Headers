
@interface HDSQLiteQueryDescriptor : NSObject <NSCopying> {
    Class  _entityClass;
    NSString * _groupBy;
    long long  _limitCount;
    NSArray * _orderingTerms;
    HDSQLitePredicate * _predicate;
    NSArray * _preferredEntityJoinOrder;
    bool  _returnsDistinctEntities;
    bool  _shouldExpandLastSQLStatement;
}

@property (nonatomic) Class entityClass;
@property (nonatomic, copy) NSString *groupBy;
@property (nonatomic) long long limitCount;
@property (nonatomic, copy) NSArray *orderingTerms;
@property (nonatomic, copy) HDSQLitePredicate *predicate;
@property (nonatomic, copy) NSArray *preferredEntityJoinOrder;
@property (nonatomic) bool returnsDistinctEntities;
@property (nonatomic) bool shouldExpandLastSQLStatement;

- (void).cxx_destruct;
- (id)_SQLForDeleteWithError:(id*)arg1;
- (id)_SQLForSelectWithProperties:(id)arg1 columns:(id)arg2;
- (id)_joinClauseForProperties:(id)arg1;
- (id)_sortedJoinClauses:(id)arg1 preferredOrder:(id)arg2 baseTables:(id)arg3;
- (void)bindToDeleteStatement:(struct sqlite3_stmt { }*)arg1 bindingIndex:(inout int*)arg2;
- (void)bindToSelectStatement:(struct sqlite3_stmt { }*)arg1 bindingIndex:(inout int*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (Class)entityClass;
- (id)groupBy;
- (long long)limitCount;
- (id)orderingTerms;
- (id)predicate;
- (id)preferredEntityJoinOrder;
- (bool)returnsDistinctEntities;
- (id)selectSQLForProperties:(id)arg1;
- (void)setEntityClass:(Class)arg1;
- (void)setGroupBy:(id)arg1;
- (void)setLimitCount:(long long)arg1;
- (void)setOrderingTerms:(id)arg1;
- (void)setPredicate:(id)arg1;
- (void)setPreferredEntityJoinOrder:(id)arg1;
- (void)setReturnsDistinctEntities:(bool)arg1;
- (void)setShouldExpandLastSQLStatement:(bool)arg1;
- (bool)shouldExpandLastSQLStatement;

@end
