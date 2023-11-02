
@interface PGBehavioralScoreProcessor : NSObject {
    long long  _algorithm;
    NSDictionary * _algorithmData;
    PGGraph * _graph;
    NSObject<OS_os_log> * _loggingConnection;
    PHPhotoLibrary * _photoLibrary;
    NSSet * _previousGoldAssetUUIDs;
}

@property (nonatomic) long long algorithm;
@property (nonatomic, retain) NSDictionary *algorithmData;
@property (nonatomic, retain) PGGraph *graph;
@property (nonatomic, retain) NSSet *previousGoldAssetUUIDs;

+ (id)assetPropertySetsForUserBehavioralProcessing;

- (void).cxx_destruct;
- (id)_behavioralProcessorForAlgorithm:(long long)arg1 goldAssets:(id)arg2 graph:(id)arg3 persistedData:(id)arg4;
- (id)_newBehavioralProcessorForAlgorithm:(long long)arg1 goldAssets:(id)arg2 graph:(id)arg3;
- (void)_persistNewGoldAssetsUUIDs:(id)arg1 processorData:(id)arg2;
- (id)_previousResults;
- (void)_writeBehavioralScoresToPhotosDatabase:(id)arg1 assets:(id)arg2;
- (long long)algorithm;
- (id)algorithmData;
- (id)behavioralScoreByAssetUUIDForAssets:(id)arg1 algorithmProcessor:(id)arg2 personalHighAestheticsThreshold:(double)arg3 personalGoodAestheticsThreshold:(double)arg4;
- (float)behavioralScoreFromBaseScore:(float)arg1 semanticScore:(float)arg2;
- (id)goldAssetUUIDs;
- (id)graph;
- (id)initWithGraphManager:(id)arg1 algorithm:(long long)arg2;
- (bool)needBehavioralScoreReprocessingUsingCurrentGoldAssetsUUIDs:(id)arg1 previousGoldAssetUUIDs:(id)arg2;
- (id)peopleFeatures;
- (id)previousGoldAssetUUIDs;
- (void)processBehavioralScoresWithProgressBlock:(id /* block */)arg1;
- (id)sceneFeatures;
- (float)semanticScoreFromBehavioralScore:(float)arg1;
- (void)setAlgorithm:(long long)arg1;
- (void)setAlgorithmData:(id)arg1;
- (void)setGraph:(id)arg1;
- (void)setPreviousGoldAssetUUIDs:(id)arg1;

@end
