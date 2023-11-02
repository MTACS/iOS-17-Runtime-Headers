
@interface REScriptASTExpressionNode : REScriptASTNode {
    REScriptASTNode * _binaryExpressions;
    REScriptASTNode * _prefixExpression;
}

@property (nonatomic, readonly) REScriptASTNode *binaryExpressions;
@property (nonatomic, readonly) REScriptASTNode *prefixExpression;

+ (id)parseBuffer:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)binaryExpressions;
- (id)dependencies;
- (id)initWithPrefixExpression:(id)arg1 binaryExpression:(id)arg2;
- (id)prefixExpression;

@end
