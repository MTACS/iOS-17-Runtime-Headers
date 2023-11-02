
@interface _EFSQLJoinExpression : NSObject <EFSQLExpressable, EFSQLSelectComponent> {
    bool  _isLeftOuter;
    <EFSQLExpressable> * _joinConstraint;
    EFSQLSelectStatement * _select;
    NSString * _tableAlias;
    NSString * _tableName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *ef_SQLExpression;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isLeftOuter;
@property (nonatomic, readonly) <EFSQLExpressable> *joinConstraint;
@property (nonatomic, readonly) EFSQLSelectStatement *select;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *tableAlias;
@property (nonatomic, readonly, copy) NSString *tableName;

- (void).cxx_destruct;
- (void)addResultColumn:(id)arg1;
- (void)addResultColumn:(id)arg1 alias:(id)arg2;
- (id)ef_SQLExpression;
- (void)ef_renderSQLExpressionInto:(id)arg1;
- (void)groupByColumn:(id)arg1;
- (id)initWithSelect:(id)arg1 tableName:(id)arg2 tableAlias:(id)arg3 joinConstraint:(id)arg4 isLeftOuter:(bool)arg5;
- (bool)isLeftOuter;
- (id)join:(id)arg1 alias:(id)arg2 on:(id)arg3;
- (id)join:(id)arg1 alias:(id)arg2 sourceColumn:(id)arg3 targetColumn:(id)arg4;
- (id)join:(id)arg1 on:(id)arg2;
- (id)join:(id)arg1 sourceColumn:(id)arg2 targetColumn:(id)arg3;
- (id)joinConstraint;
- (id)leftOuterJoin:(id)arg1 alias:(id)arg2 on:(id)arg3;
- (id)leftOuterJoin:(id)arg1 alias:(id)arg2 sourceColumn:(id)arg3 targetColumn:(id)arg4;
- (id)leftOuterJoin:(id)arg1 on:(id)arg2;
- (id)leftOuterJoin:(id)arg1 sourceColumn:(id)arg2 targetColumn:(id)arg3;
- (void)orderByColumn:(id)arg1 ascending:(bool)arg2;
- (id)select;
- (id)tableAlias;
- (id)tableName;

@end
