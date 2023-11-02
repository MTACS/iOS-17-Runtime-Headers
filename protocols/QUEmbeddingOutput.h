
@protocol QUEmbeddingOutput <NSObject>

@required

- (MLMultiArray *)embedding;
- (NSArray *)subtokenLenForTokens;
- (NSArray *)subtokens;
- (NSArray *)tokenRanges;
- (NSArray *)tokens;

@end
