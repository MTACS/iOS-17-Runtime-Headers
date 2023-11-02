
@interface EFSQLDisqualifiedColumnExpression : EFSQLColumnExpression <EFCacheable> {
    EFSQLColumnExpression * _columnExpression;
}

@property (nonatomic, readonly) EFSQLColumnExpression *columnExpression;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cachedSelf;
- (id)columnExpression;
- (void)ef_renderSQLExpressionInto:(id)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
