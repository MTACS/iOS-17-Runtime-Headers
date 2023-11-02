
@interface CDMEmbeddingResponseCommand : CDMBaseCommand {
    unsigned long long  _embeddingDim;
    NLv4EmbeddingTensor * _embeddingTensor;
    unsigned long long  _numLayers;
    unsigned long long  _numTokens;
    CDMTokenChain * _tokenChain;
}

@property (nonatomic, readonly) unsigned long long embeddingDim;
@property (nonatomic, readonly) NLv4EmbeddingTensor *embeddingTensor;
@property (nonatomic, readonly) unsigned long long numLayers;
@property (nonatomic, readonly) unsigned long long numTokens;
@property (nonatomic, readonly) CDMTokenChain *tokenChain;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (unsigned long long)embeddingDim;
- (id)embeddingTensor;
- (id)initWithTokenChain:(id)arg1 embeddingTensor:(id)arg2 numTokens:(unsigned long long)arg3 numLayers:(unsigned long long)arg4 embeddingDim:(unsigned long long)arg5;
- (unsigned long long)numLayers;
- (unsigned long long)numTokens;
- (id)tokenChain;

@end
