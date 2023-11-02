
@interface REScriptASTFunctionCallNode : REScriptASTNode {
    NSArray * _arguments;
    REScriptToken * _functionIdentifier;
}

@property (nonatomic, readonly) NSArray *arguments;
@property (nonatomic, readonly) REScriptToken *functionIdentifier;

+ (id)parseBuffer:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)arguments;
- (id)dependencies;
- (id)functionIdentifier;
- (id)initWithFunctionName:(id)arg1 arguments:(id)arg2;

@end
