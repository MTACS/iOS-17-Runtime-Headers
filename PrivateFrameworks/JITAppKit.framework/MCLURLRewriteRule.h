
@interface MCLURLRewriteRule : MCLURLRequestRewriteRule {
    NSSet * _ignoreHosts;
    NSRegularExpression * _replacePattern;
    NSString * _replaceTemplate;
}

+ (id)urlRewriteRuleFromHost:(id)arg1 toHost:(id)arg2 ignoreHosts:(id)arg3;

- (void).cxx_destruct;
- (id)initWithMatchPattern:(id)arg1 replacePattern:(id)arg2 replaceTemplate:(id)arg3 ignoreHosts:(id)arg4;
- (void)rewriteURLRequest:(id)arg1;

@end
