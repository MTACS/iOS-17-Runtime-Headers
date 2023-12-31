
@interface MCLURLRequestRewriteRule : NSObject {
    id /* block */  _block;
    NSRegularExpression * _matchPattern;
    NSString * _name;
    float  _priority;
}

@property (nonatomic, readonly) NSRegularExpression *matchPattern;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) float priority;

+ (id)urlRequestRewriteRuleWithMatchPattern:(id)arg1 block:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)initWithMatchExpression:(id)arg1 block:(id /* block */)arg2;
- (id)matchPattern;
- (id)name;
- (float)priority;
- (void)rewriteURLRequest:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPriority:(float)arg1;

@end
