
@protocol EFSQLValueCollectionExpressable <EFSQLValueExpressable>

@required

- (<EFSQLValueCollectionExpressable> *)ef_SQLIsolatedExpression;
- (void)ef_renderSQLExpressionInto:(NSMutableString *)arg1 conjoiner:(NSString *)arg2;

@end
