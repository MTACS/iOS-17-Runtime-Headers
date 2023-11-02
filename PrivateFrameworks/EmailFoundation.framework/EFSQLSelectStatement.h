
@interface EFSQLSelectStatement : NSObject <EFSQLSelectComponent, EFSQLValueCollectionExpressable> {
    bool  _distinct;
    NSArray * _groupExpressions;
    NSMutableArray * _joinExpressions;
    unsigned long long  _limit;
    NSMutableArray * _orderExpressions;
    NSMutableArray * _results;
    NSString * _tableName;
    <EFSQLValueExpressable> * _where;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool distinct;
@property (nonatomic, readonly, copy) NSString *ef_SQLExpression;
@property (nonatomic, retain) NSArray *groupExpressions;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableArray *joinExpressions;
@property (nonatomic) unsigned long long limit;
@property (nonatomic, readonly) NSMutableArray *orderExpressions;
@property (nonatomic, readonly, copy) NSString *queryString;
@property (nonatomic, readonly) NSMutableArray *results;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *tableName;
@property (nonatomic, retain) <EFSQLValueExpressable> *where;

- (void).cxx_destruct;
- (void)addResult:(id)arg1 alias:(id)arg2;
- (void)addResultColumn:(id)arg1;
- (void)addResultColumn:(id)arg1 alias:(id)arg2;
- (void)addResultColumn:(id)arg1 fromTable:(id)arg2;
- (void)addResultColumn:(id)arg1 fromTable:(id)arg2 alias:(id)arg3;
- (bool)distinct;
- (id)ef_SQLExpression;
- (id)ef_SQLIsolatedExpression;
- (void)ef_renderSQLExpressionInto:(id)arg1;
- (void)ef_renderSQLExpressionInto:(id)arg1 conjoiner:(id)arg2;
- (void)groupBy:(id)arg1;
- (void)groupByColumn:(id)arg1;
- (void)groupByColumn:(id)arg1 fromTable:(id)arg2;
- (id)groupExpressions;
- (id)init;
- (id)initWithResult:(id)arg1;
- (id)initWithResult:(id)arg1 table:(id)arg2;
- (id)initWithResultColumn:(id)arg1;
- (id)initWithResultColumn:(id)arg1 table:(id)arg2;
- (id)initWithTable:(id)arg1;
- (id)join:(id)arg1 alias:(id)arg2 on:(id)arg3;
- (id)join:(id)arg1 alias:(id)arg2 sourceColumn:(id)arg3 targetColumn:(id)arg4;
- (id)join:(id)arg1 on:(id)arg2;
- (id)join:(id)arg1 sourceColumn:(id)arg2 targetColumn:(id)arg3;
- (id)joinExpressions;
- (id)leftOuterJoin:(id)arg1 alias:(id)arg2 on:(id)arg3;
- (id)leftOuterJoin:(id)arg1 alias:(id)arg2 sourceColumn:(id)arg3 targetColumn:(id)arg4;
- (id)leftOuterJoin:(id)arg1 on:(id)arg2;
- (id)leftOuterJoin:(id)arg1 sourceColumn:(id)arg2 targetColumn:(id)arg3;
- (unsigned long long)limit;
- (void)orderBy:(id)arg1 ascending:(bool)arg2;
- (void)orderByColumn:(id)arg1 ascending:(bool)arg2;
- (void)orderByColumn:(id)arg1 fromTable:(id)arg2 ascending:(bool)arg3;
- (id)orderExpressions;
- (id)queryString;
- (id)results;
- (void)setDistinct:(bool)arg1;
- (void)setGroupExpressions:(id)arg1;
- (void)setLimit:(unsigned long long)arg1;
- (void)setWhere:(id)arg1;
- (id)tableName;
- (id)where;

@end
