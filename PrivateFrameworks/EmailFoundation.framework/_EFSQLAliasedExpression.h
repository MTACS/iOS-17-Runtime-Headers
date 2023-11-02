
@interface _EFSQLAliasedExpression : NSObject <EFSQLValueExpressable> {
    NSString * _alias;
    <EFSQLValueExpressable> * _expression;
}

@property (nonatomic, readonly, copy) NSString *alias;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *ef_SQLExpression;
@property (nonatomic, readonly) <EFSQLValueExpressable> *expression;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)alias;
- (id)ef_SQLExpression;
- (id)ef_SQLIsolatedExpression;
- (void)ef_renderSQLExpressionInto:(id)arg1;
- (id)expression;
- (id)initWithExpression:(id)arg1 alias:(id)arg2;

@end
