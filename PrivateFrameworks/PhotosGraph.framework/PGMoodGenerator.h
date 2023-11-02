
@interface PGMoodGenerator : NSObject {
    PHAssetCollection * _assetCollection;
    PGEnrichedMemory * _enrichedMemory;
    NSArray * _extendedCuratedAssets;
    PGMoodVector * _historyWeightedPositiveMoodVector;
    PGMoodVector * _negativeMoodVector;
    double  _negativeThreshold;
    PGMoodGeneratorOptions * _options;
    PHPhotoLibrary * _photoLibrary;
    PGMoodVector * _positiveMoodVector;
    double  _positiveThreshold;
    unsigned long long  _suggestedMood;
}

@property double negativeThreshold;
@property (retain) PGMoodGeneratorOptions *options;
@property double positiveThreshold;

- (void).cxx_destruct;
- (id)_moodSources;
- (void)_processMoodSourcesWithGraph:(id)arg1;
- (unsigned long long)forbiddenMoodsWithGraph:(id)arg1;
- (id)historyWeightedPositiveMoodVectorWithGraph:(id)arg1;
- (id)initWithAssetCollection:(id)arg1 photoLibrary:(id)arg2 options:(id)arg3;
- (id)initWithEnrichedMemory:(id)arg1 photoLibrary:(id)arg2 options:(id)arg3;
- (id)negativeMoodVectorWithGraph:(id)arg1;
- (double)negativeThreshold;
- (id)options;
- (id)positiveMoodVectorWithGraph:(id)arg1;
- (double)positiveThreshold;
- (unsigned long long)recommendedMoodsWithGraph:(id)arg1;
- (void)setNegativeThreshold:(double)arg1;
- (void)setOptions:(id)arg1;
- (void)setPositiveThreshold:(double)arg1;
- (unsigned long long)suggestedMoodWithGraph:(id)arg1;

@end
