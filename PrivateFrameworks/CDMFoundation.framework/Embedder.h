
@interface Embedder : NSObject {
    CDMEmbeddingConfigItem * _embeddingConfigItem;
    SNLPEmbedder * _snlpEmbedder;
}

@property (nonatomic, readonly) CDMEmbeddingConfigItem *embeddingConfigItem;
@property (nonatomic, readonly) SNLPEmbedder *snlpEmbedder;

- (void).cxx_destruct;
- (id)embeddingConfigItem;
- (id)initWithSnlpEmbedder:(id)arg1 andEmbeddingConfigItem:(id)arg2;
- (id)snlpEmbedder;

@end
