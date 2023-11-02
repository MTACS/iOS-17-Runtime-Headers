
@protocol EFSQLExpressable <NSObject>

@required

- (NSString *)ef_SQLExpression;
- (void)ef_renderSQLExpressionInto:(NSMutableString *)arg1;

@end
