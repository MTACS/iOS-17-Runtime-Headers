
@interface REScriptASTIdentifierNode : REScriptASTNode

@property (nonatomic, readonly) NSString *name;

+ (id)parseBuffer:(id)arg1 error:(id*)arg2;

- (id)dependencies;
- (id)name;

@end
