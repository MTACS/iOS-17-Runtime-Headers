
@interface REScriptASTSubscriptExpressionNode : REScriptASTNode {
    REScriptASTNode * _endIndex;
    REScriptASTNode * _expression;
    REScriptASTNode * _startIndex;
}

@property (nonatomic, readonly) REScriptASTNode *endIndex;
@property (nonatomic, readonly) REScriptASTNode *expression;
@property (nonatomic, readonly) REScriptASTNode *startIndex;

+ (id)parseBuffer:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)dependencies;
- (id)endIndex;
- (id)expression;
- (id)initWithExpression:(id)arg1 startIndex:(id)arg2 endIndex:(id)arg3;
- (id)startIndex;

@end
