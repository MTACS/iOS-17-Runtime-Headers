
@interface PGAssetFeatureBehavioralProcessor : NSObject <PGBehavioralAlgorithm> {
    NSSet * _goldAssets;
    NSObject<OS_os_log> * _loggingConnection;
    NSDictionary * _personFeatures;
    NSDictionary * _sceneFeatures;
    double  _similarityScoreNormalizer;
}

@property (nonatomic, retain) NSSet *goldAssets;
@property (nonatomic, retain) NSDictionary *personFeatures;
@property (nonatomic, retain) NSDictionary *sceneFeatures;
@property (nonatomic) double similarityScoreNormalizer;

- (void).cxx_destruct;
- (id)_semanticScoreByAssetUUIDForAssets:(id)arg1 normalize:(bool)arg2;
- (id)dataToPersist;
- (id)goldAssets;
- (id)initWithGoldAssets:(id)arg1 loggingConnection:(id)arg2;
- (id)initWithGoldAssets:(id)arg1 persistedData:(id)arg2 loggingConnection:(id)arg3;
- (void)personAndSceneFeaturesFromGoldAssetsUsingBlock:(id /* block */)arg1;
- (id)personFeatures;
- (void)preprocessWithProgressBlock:(id /* block */)arg1;
- (id)sceneFeatures;
- (id)semanticScoreByAssetUUIDForAssets:(id)arg1;
- (float)semanticScoreForAsset:(id)arg1;
- (void)setGoldAssets:(id)arg1;
- (void)setPersonFeatures:(id)arg1;
- (void)setSceneFeatures:(id)arg1;
- (void)setSimilarityScoreNormalizer:(double)arg1;
- (double)similarityScoreNormalizer;

@end
