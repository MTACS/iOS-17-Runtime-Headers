
@interface REScriptASTMemberExpressionNode : REScriptASTNode {
    REScriptASTNode * _expression;
    REScriptToken * _member;
}

@property (nonatomic, readonly) REScriptASTNode *expression;
@property (nonatomic, readonly) REScriptToken *member;

+ (id)parseBuffer:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)dependencies;
- (id)expression;
- (id)initWithMember:(id)arg1 expression:(id)arg2;
- (id)member;

@end
