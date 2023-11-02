
@interface _MDQueryRewriteContext : NSObject {
    NSArray * _tokenRewrites;
}

@property (nonatomic, copy) NSArray *tokenRewrites;

- (void)dealloc;
- (id)initWithRewrittenTokens:(id)arg1;
- (void)setTokenRewrites:(id)arg1;
- (id)tokenRewrites;

@end
