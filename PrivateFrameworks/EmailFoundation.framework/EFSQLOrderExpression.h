
@interface EFSQLOrderExpression : NSObject <EFSQLValueExpressable> {
    <EFSQLExpressable> * _expression;
    bool  _isAscending;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *ef_SQLExpression;
@property (nonatomic, readonly) <EFSQLExpressable> *expression;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isAscending;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)ef_SQLExpression;
- (id)ef_SQLIsolatedExpression;
- (void)ef_renderSQLExpressionInto:(id)arg1;
- (id)expression;
- (id)initWithExpression:(id)arg1 ascending:(bool)arg2;
- (bool)isAscending;

@end
