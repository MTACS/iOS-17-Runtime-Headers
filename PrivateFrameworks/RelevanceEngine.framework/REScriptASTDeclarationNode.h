
@interface REScriptASTDeclarationNode : REScriptASTNode {
    REScriptToken * _name;
    REScriptToken * _type;
    REScriptASTNode * _value;
}

@property (nonatomic, readonly) REScriptToken *name;
@property (nonatomic, readonly) REScriptToken *type;
@property (nonatomic, readonly) REScriptASTNode *value;

+ (id)parseBuffer:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)dependencies;
- (id)initWithName:(id)arg1 type:(id)arg2 expression:(id)arg3;
- (id)name;
- (id)type;
- (id)value;

@end
