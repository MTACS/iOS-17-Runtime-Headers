
@interface REScriptASTBinaryExpressionNode : REScriptASTNode {
    REScriptToken * _binaryOperator;
    REScriptASTNode * _expression;
}

@property (nonatomic, readonly) REScriptToken *binaryOperator;
@property (nonatomic, readonly) REScriptASTNode *expression;

+ (id)parseBuffer:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)binaryOperator;
- (id)dependencies;
- (id)expression;
- (id)initWithOperator:(id)arg1 expression:(id)arg2;

@end
