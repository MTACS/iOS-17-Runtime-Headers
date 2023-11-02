
@interface FCNewsArticleEmbeddingsConfiguration : NSObject {
    FCNewsArticleEmbeddingConfiguration * _bodyEmbeddingConfiguration;
    FCNewsPersonalizationArticleEmbeddingsFittingConfiguration * _fittingConfiguration;
    long long  _requiredDimensions;
    FCNewsArticleEmbeddingConfiguration * _titleEmbeddingConfiguration;
}

@property (nonatomic, retain) FCNewsArticleEmbeddingConfiguration *bodyEmbeddingConfiguration;
@property (nonatomic, retain) FCNewsPersonalizationArticleEmbeddingsFittingConfiguration *fittingConfiguration;
@property (nonatomic) long long requiredDimensions;
@property (nonatomic, retain) FCNewsArticleEmbeddingConfiguration *titleEmbeddingConfiguration;

- (void).cxx_destruct;
- (id)bodyEmbeddingConfiguration;
- (id)description;
- (id)fittingConfiguration;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (long long)requiredDimensions;
- (void)setBodyEmbeddingConfiguration:(id)arg1;
- (void)setFittingConfiguration:(id)arg1;
- (void)setRequiredDimensions:(long long)arg1;
- (void)setTitleEmbeddingConfiguration:(id)arg1;
- (id)titleEmbeddingConfiguration;

@end
