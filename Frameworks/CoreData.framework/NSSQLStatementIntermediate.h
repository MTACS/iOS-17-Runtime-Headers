
@interface NSSQLStatementIntermediate : NSSQLIntermediate {
    NSString * _correlationToken;
    NSString * _governingAlias;
    NSSQLEntity * _governingEntity;
    NSSQLLimitIntermediate * _limitClause;
    NSSQLOrderIntermediate * _orderIntermediate;
    NSSQLWhereIntermediate * _whereClause;
}

- (void)dealloc;
- (id)governingAlias;
- (id)governingAliasForKeypathExpression:(id)arg1;
- (id)governingEntity;
- (id)governingEntityForKeypathExpression:(id)arg1;
- (id)initWithEntity:(id)arg1 alias:(id)arg2 inScope:(id)arg3;
- (bool)keypathExpressionIsSafeLHSForIn:(id)arg1;
- (void)setGoverningAlias:(id)arg1;
- (void)setGoverningEntity:(id)arg1;

@end
