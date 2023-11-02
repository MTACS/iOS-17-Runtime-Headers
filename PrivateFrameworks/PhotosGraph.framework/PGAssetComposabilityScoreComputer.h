
@interface PGAssetComposabilityScoreComputer : NSObject {
    bool  _computeDiptychScores;
    bool  _computeTriptychScores;
    PHPhotoLibrary * _photoLibrary;
    CLSSimilarStacker * _similarStacker;
}

- (void).cxx_destruct;
- (double)bestDistanceWithSimilarityModelVersion:(unsigned long long)arg1;
- (double)composabilityScoreWithAssetDistance:(double)arg1 andDistance:(double)arg2 andDistance:(double)arg3 similarityModelVersion:(unsigned long long)arg4;
- (double)composabilityScoreWithAssetDistance:(double)arg1 similarityModelVersion:(unsigned long long)arg2;
- (id)composabilityScoresOfAssetsForLocalIdentifiers:(id)arg1;
- (double)identicalSimilarityThresholdWithSimilarityModelVersion:(unsigned long long)arg1;
- (id)initForTesting;
- (id)initWithPhotoLibrary:(id)arg1 options:(id)arg2;
- (double)semanticalSimilarityThresholdWithSimilarityModelVersion:(unsigned long long)arg1;

@end
