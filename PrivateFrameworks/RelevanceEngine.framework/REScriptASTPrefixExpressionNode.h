
@interface REScriptASTPrefixExpressionNode : REScriptASTNode {
    REScriptASTNode * _node;
    REScriptToken * _prefixOperator;
}

@property (nonatomic, readonly) REScriptASTNode *node;
@property (nonatomic, readonly) REScriptToken *prefixOperator;

+ (id)parseBuffer:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)dependencies;
- (id)initWithPrefixOperatorToken:(id)arg1 primaryExpression:(id)arg2;
- (id)node;
- (id)prefixOperator;

@end
