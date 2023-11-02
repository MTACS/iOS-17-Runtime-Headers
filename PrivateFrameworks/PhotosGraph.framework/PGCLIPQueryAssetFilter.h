
@interface PGCLIPQueryAssetFilter : NSObject <PGAssetFilter> {
    NSDictionary * _cosineSimilarityThresholdByVersion;
    NSArray * _positiveQueryEmbeddings;
}

@property (nonatomic, readonly) NSDictionary *cosineSimilarityThresholdByVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *positiveQueryEmbeddings;
@property (readonly) Class superclass;

+ (id)name;

- (void).cxx_destruct;
- (double)cosineSimilarityBetweenQueryEmbedding:(id)arg1 assetEmbedding:(id)arg2;
- (id)cosineSimilarityThresholdByVersion;
- (id)filteredAssetsFromAssets:(id)arg1;
- (id)initWithPositiveQueryEmbeddings:(id)arg1 cosineSimilarityThresholdByVersion:(id)arg2;
- (bool)passesWithAsset:(id)arg1;
- (id)positiveQueryEmbeddings;

@end
