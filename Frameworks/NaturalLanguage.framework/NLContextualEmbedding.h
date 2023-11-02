
@interface NLContextualEmbedding : NSObject {
    NSDictionary * _catalogEntry;
    void * _embedding;
    NSString * _modelIdentifier;
    NLTagger * _tagger;
}

@property (readonly) unsigned long long dimension;
@property (readonly) bool hasAvailableAssets;
@property (readonly, copy) NSArray *languages;
@property (readonly) unsigned long long maximumSequenceLength;
@property (readonly, copy) NSString *modelIdentifier;
@property (readonly) unsigned long long revision;
@property (readonly, copy) NSArray *scripts;

+ (id)contextualEmbeddingCatalog;
+ (id)contextualEmbeddingForLanguage:(id)arg1;
+ (id)contextualEmbeddingForScript:(id)arg1;
+ (id)contextualEmbeddingWithIdentifier:(id)arg1;
+ (id)contextualEmbeddingWithLanguage:(id)arg1;
+ (id)contextualEmbeddingWithModelIdentifier:(id)arg1;
+ (id)contextualEmbeddingWithScript:(id)arg1;
+ (id)contextualEmbeddingsForValues:(id)arg1;
+ (id)contextualEmbeddingsWithValues:(id)arg1;

- (void).cxx_destruct;
- (id)_concatenatedEmbeddingDataForInputEmbeddingData:(id)arg1 tokenizedSentences:(id)arg2 batchComponentsCountArray:(id)arg3 batchComponentRangesArray:(id)arg4 maxTokens:(unsigned long long)arg5;
- (id)_paddedEmbeddingDataForInputEmbeddingData:(id)arg1 tokenizedSentences:(id)arg2 batchComponentsCountArray:(id)arg3 batchComponentRangesArray:(id)arg4 maxTokens:(unsigned long long)arg5;
- (id)_taggerForString:(id)arg1 language:(id)arg2;
- (id)_tokenRangesForString:(id)arg1 language:(id)arg2;
- (id)_tokensForString:(id)arg1 tokenRanges:(id)arg2;
- (id)assetLocale;
- (id)assetLocaleIdentifier;
- (bool)assetsAvailable;
- (id)bundleName;
- (id)bundlePath;
- (void)dealloc;
- (id)description;
- (unsigned long long)dimension;
- (id)embeddingResultForString:(id)arg1 language:(id)arg2 error:(id*)arg3;
- (bool)hasAvailableAssets;
- (id)identifier;
- (id)initWithModelIdentifier:(id)arg1;
- (id)languages;
- (bool)load;
- (bool)loadWithError:(id*)arg1;
- (bool)loadWithOptions:(id)arg1 error:(id*)arg2;
- (unsigned long long)maximumSequenceLength;
- (id)modelIdentifier;
- (void)requestAssetsWithCompletionHandler:(id /* block */)arg1;
- (void)requestEmbeddingAssetsWithCompletionHandler:(id /* block */)arg1;
- (void)requestEmbeddingResultForString:(id)arg1 language:(id)arg2 completionHandler:(id /* block */)arg3;
- (unsigned long long)revision;
- (id)scripts;
- (unsigned long long)sentenceVectorDimension;
- (id)subRangesWithinToken:(id)arg1 componentRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 offset:(unsigned long long)arg3;
- (id)tokenDictionariesForString:(id)arg1 tokens:(id)arg2 tokenRanges:(id)arg3 componentRanges:(id)arg4 componentsCount:(unsigned long long)arg5;
- (unsigned long long)tokenVectorDimension;
- (void)unload;
- (id)vectorsForTokenizedSentences:(id)arg1 untokenizedSentences:(id)arg2 maxTokens:(unsigned long long)arg3;

@end
