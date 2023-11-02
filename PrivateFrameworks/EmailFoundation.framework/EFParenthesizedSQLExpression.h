
@interface EFParenthesizedSQLExpression : NSObject {
    id  _expressable;
}

+ (id)parenthesizedValueCollectionExpressable:(id)arg1;
+ (id)parenthesizedValueExpressable:(id)arg1;

- (void).cxx_destruct;
- (id)ef_SQLExpression;
- (id)ef_SQLIsolatedExpression;
- (void)ef_renderSQLExpressionInto:(id)arg1;
- (void)ef_renderSQLExpressionInto:(id)arg1 conjoiner:(id)arg2;
- (id)initWithExpressable:(id)arg1;
- (bool)respondsToSelector:(SEL)arg1;

@end
