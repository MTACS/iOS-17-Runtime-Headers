
@interface REScriptASTBinaryExpressionListNode : REScriptASTNode {
    NSArray * _expressions;
}

@property (nonatomic, readonly) NSArray *expressions;

+ (id)parseBuffer:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)dependencies;
- (id)expressions;
- (id)initWithExpressions:(id)arg1;

@end
