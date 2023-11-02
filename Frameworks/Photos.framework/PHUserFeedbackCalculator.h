
@interface PHUserFeedbackCalculator : NSObject {
    PHUserFeedbackDataCache * _dataCache;
}

@property (nonatomic, readonly) PHUserFeedbackDataCache *dataCache;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;

+ (bool)_isUserFeedbackFeatureFlagEnabled;
+ (id)descriptionForScore:(double)arg1;
+ (id)fetchSongIdentifiersWithNegativeFeedbackWithPhotoLibrary:(id)arg1;
+ (bool)score:(double)arg1 meetsScoreThreshold:(double)arg2;
+ (id)songIdentifiersWithNegativeFeedbackForMemory:(id)arg1;

- (void).cxx_destruct;
- (double)_adjustScore:(double)arg1 shouldDowngrade:(bool)arg2;
- (bool)_anyPersonUUIDs:(id)arg1 matchesWithImportantPersonType:(unsigned long long)arg2;
- (bool)_hasNegativeFeedback:(id)arg1;
- (double)_scoreForKeyAssetWithPersonUUIDs:(id)arg1;
- (double)_scoreForPersonsInAssetsForUUIDs:(id)arg1 keyAssetUUID:(id)arg2 personsUUIDsByAssetUUIDs:(id)arg3;
- (id)_uniqueFeedbackTypesForPersonUUIDs:(id)arg1;
- (id)dataCache;
- (id)initWithDataCache:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)memoryFeaturesWithNegativeFeedbackForMemoryFeatures:(id)arg1;
- (id)personUUIDsWithNegativeFeedback;
- (id)photoLibrary;
- (double)scoreForAssetUUIDs:(id)arg1 keyAssetUUID:(id)arg2 personsUUIDsByAssetUUIDs:(id)arg3 memoryFeatures:(id)arg4;
- (double)scoreForAssetUUIDs:(id)arg1 personsUUIDsByAssetUUIDs:(id)arg2;
- (double)scoreForKeyAssetUUID:(id)arg1 personsUUIDsInKeyAsset:(id)arg2 memoryFeatures:(id)arg3;
- (id)userFeedbackTypeByPersonUUIDForPersonUUIDs:(id)arg1;
- (unsigned long long)userFeedbackTypeForPersonUUID:(id)arg1;

@end
