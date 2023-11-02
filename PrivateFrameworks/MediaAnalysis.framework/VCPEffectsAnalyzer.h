
@interface VCPEffectsAnalyzer : NSObject {
    bool  _hasFaceOrPet;
}

+ (id)gatingResultKeyToIndex;
+ (id)gatingTypeKeys;
+ (id)getResultIndex:(id)arg1;
+ (bool)isAutoLoopFramworkAvailable;
+ (bool)usePHAssetScene;

- (int)analyzeAsset:(id)arg1 onDemand:(bool)arg2 cancel:(id /* block */)arg3 statsFlags:(unsigned long long*)arg4 results:(id*)arg5;
- (int)enumerateMatchingScenesOfAsset:(id)arg1 forLongExposureUsingBlock:(id /* block */)arg2;
- (unsigned long long)generateStatsToBeCollectedFrom:(id)arg1;
- (id)initWithAnalysisResults:(id)arg1;
- (id)initWithFlagHasFaceOrPet:(bool)arg1;
- (id)matchingNodeForSceneClassification:(id)arg1 inSceneNames:(id)arg2;
- (id)performanSceneClassificationOfImageFileAtURL:(id)arg1;
- (void)reportLivePhotoEffectAnalysisResults:(id)arg1;

@end
