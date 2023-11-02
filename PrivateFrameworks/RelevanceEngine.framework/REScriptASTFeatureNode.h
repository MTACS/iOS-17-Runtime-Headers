
@interface REScriptASTFeatureNode : REScriptASTNode {
    REScriptToken * _name;
    NSDictionary * _options;
    REScriptASTNode * _value;
}

@property (nonatomic, readonly) REScriptToken *name;
@property (nonatomic, readonly) NSDictionary *options;
@property (nonatomic, readonly) REScriptASTNode *value;

+ (id)parseBuffer:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)dependencies;
- (id)initWithName:(id)arg1 options:(id)arg2 expression:(id)arg3;
- (id)name;
- (id)options;
- (id)value;

@end
