
@interface EFSQLNotExpression : NSObject <EFSQLValueExpressable> {
    <EFSQLValueExpressable> * _expression;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *ef_SQLExpression;
@property (nonatomic, readonly) <EFSQLValueExpressable> *expression;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)ef_SQLExpression;
- (id)ef_SQLIsolatedExpression;
- (void)ef_renderSQLExpressionInto:(id)arg1;
- (id)expression;
- (id)initWithExpression:(id)arg1;

@end
