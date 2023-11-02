
@interface EFSQLBinaryExpression : NSObject <EFSQLBitExpressable, EFSQLValueExpressable> {
    unsigned long long  _binaryOperator;
    <EFSQLExpressable> * _left;
    <EFSQLExpressable> * _right;
}

@property (nonatomic, readonly) unsigned long long binaryOperator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *ef_SQLExpression;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <EFSQLExpressable> *left;
@property (nonatomic, readonly) <EFSQLExpressable> *right;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)binaryOperator;
- (id)ef_SQLExpression;
- (id)ef_SQLIsolatedExpression;
- (void)ef_renderSQLExpressionInto:(id)arg1;
- (id)initWithLeft:(id)arg1 operator:(unsigned long long)arg2 right:(id)arg3;
- (id)left;
- (id)right;
- (void)setColumnExpression:(id)arg1;

@end
