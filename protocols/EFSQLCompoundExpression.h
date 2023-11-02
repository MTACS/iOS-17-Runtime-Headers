
@protocol EFSQLCompoundExpression <EFSQLValueExpressable>

@required

- (NSArray *)expressions;
- (id)initWithExpressions:(NSArray *)arg1;

@end
