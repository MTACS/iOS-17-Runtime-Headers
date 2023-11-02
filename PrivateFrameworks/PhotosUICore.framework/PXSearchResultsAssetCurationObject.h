
@interface PXSearchResultsAssetCurationObject : NSObject {
    PHAsset * _asset;
    float  _preCalculatedDominantSceneScore;
}

@property (nonatomic, readonly, copy) PHAsset *asset;
@property (nonatomic, readonly) float dominantSceneScore;
@property (nonatomic) float preCalculatedDominantSceneScore;

+ (float)_calculateDominantSceneScoreWithSceneClassifications:(id)arg1 searchQuerySceneIdentifiers:(id)arg2 sceneTaxonomy:(id)arg3;
+ (id)_sceneClassificationForSceneIdentifier:(unsigned int)arg1 sceneClassifications:(id)arg2;

- (void).cxx_destruct;
- (id)asset;
- (float)dominantSceneScore;
- (id)initWithAsset:(id)arg1 sceneClassifications:(id)arg2 searchQuerySceneIdentifiers:(id)arg3 sceneTaxonomyProvider:(id)arg4;
- (float)preCalculatedDominantSceneScore;
- (void)setPreCalculatedDominantSceneScore:(float)arg1;

@end
