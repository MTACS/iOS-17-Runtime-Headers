
@interface QUEmbeddingOutput : NSObject <QUEmbeddingOutput> {
    MLMultiArray * _embedding;
    NSArray * _subtokenLenForTokens;
    NSArray * _subtokens;
    NSArray * _tokenRanges;
    NSArray * _tokens;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) MLMultiArray *embedding;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *subtokenLenForTokens;
@property (nonatomic, retain) NSArray *subtokens;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *tokenRanges;
@property (nonatomic, retain) NSArray *tokens;

- (void).cxx_destruct;
- (id)embedding;
- (void)setEmbedding:(id)arg1;
- (void)setSubtokenLenForTokens:(id)arg1;
- (void)setSubtokens:(id)arg1;
- (void)setTokenRanges:(id)arg1;
- (void)setTokens:(id)arg1;
- (id)subtokenLenForTokens;
- (id)subtokens;
- (id)tokenRanges;
- (id)tokens;

@end
