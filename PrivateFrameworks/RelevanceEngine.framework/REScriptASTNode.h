
@interface REScriptASTNode : NSObject {
    REScriptToken * _token;
}

@property (nonatomic, readonly) NSSet *dependencies;
@property (nonatomic, readonly) REScriptToken *token;

+ (id)parseBuffer:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)dependencies;
- (id)initWithToken:(id)arg1;
- (id)token;

@end
