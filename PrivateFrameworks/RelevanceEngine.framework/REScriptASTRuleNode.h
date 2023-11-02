
@interface REScriptASTRuleNode : REScriptASTNode {
    REScriptASTNode * _expression;
    REScriptToken * _name;
    NSDictionary * _options;
    REScriptToken * _type;
}

@property (nonatomic, readonly) REScriptASTNode *expression;
@property (nonatomic, readonly) REScriptToken *name;
@property (nonatomic, readonly) NSDictionary *options;
@property (nonatomic, readonly) REScriptToken *type;

+ (id)parseBuffer:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)dependencies;
- (id)expression;
- (id)initWithType:(id)arg1 options:(id)arg2 name:(id)arg3 expression:(id)arg4;
- (id)name;
- (id)options;
- (id)type;

@end
