
@interface PGCurationCriteria : NSObject {
    unsigned long long  _client;
    PGCurationSceneTrait * _compulsoryScenesTrait;
    PGCurationContentOrAestheticScoreTrait * _contentOrAestheticScoreTrait;
    PGCurationCropScoreTrait * _cropScoreTrait;
    unsigned long long  _faceFilter;
    bool  _filterUtilityAssets;
    double  _minimumAssetsRatio;
    PGCurationPartOfDayTrait * _partOfDayTrait;
    PGCurationSetTrait * _peopleTrait;
    PGCurationSceneTrait * _scenesTrait;
    PGCurationSDFoodTrait * _sdFoodTrait;
    PGCurationSetTrait * _socialGroupTrait;
}

@property (nonatomic, readonly) unsigned long long client;
@property (nonatomic, retain) PGCurationSceneTrait *compulsoryScenesTrait;
@property (nonatomic, retain) PGCurationContentOrAestheticScoreTrait *contentOrAestheticScoreTrait;
@property (nonatomic, retain) PGCurationCropScoreTrait *cropScoreTrait;
@property (nonatomic) unsigned long long faceFilter;
@property (nonatomic) bool filterUtilityAssets;
@property (nonatomic) double minimumAssetsRatio;
@property (nonatomic, retain) PGCurationPartOfDayTrait *partOfDayTrait;
@property (nonatomic, retain) PGCurationSetTrait *peopleTrait;
@property (nonatomic, retain) PGCurationSceneTrait *scenesTrait;
@property (nonatomic, retain) PGCurationSDFoodTrait *sdFoodTrait;
@property (nonatomic, retain) PGCurationSetTrait *socialGroupTrait;

- (void).cxx_destruct;
- (bool)_passesForItem:(id)arg1 score:(double*)arg2 graph:(id)arg3 reasonString:(id*)arg4;
- (double)_scoreForSceneClassifications:(id)arg1 withSDFoodTrait:(id)arg2 curationModel:(id)arg3 traitFailed:(bool*)arg4;
- (double)_scoreForSceneClassifications:(id)arg1 withScenesTrait:(id)arg2 curationModel:(id)arg3 traitFailed:(bool*)arg4;
- (unsigned long long)client;
- (id)compulsoryScenesTrait;
- (id)contentOrAestheticScoreTrait;
- (id)cropScoreTrait;
- (unsigned long long)faceFilter;
- (bool)filterUtilityAssets;
- (id)initWithMinimumAssetsRatio:(double)arg1 client:(unsigned long long)arg2;
- (bool)isPassingForAsset:(id)arg1 score:(double*)arg2;
- (double)minimumAssetsRatio;
- (id)niceDescriptionWithGraph:(id)arg1;
- (id)partOfDayTrait;
- (bool)passesForItem:(id)arg1 score:(double*)arg2;
- (bool)passesForItem:(id)arg1 score:(double*)arg2 graph:(id)arg3 reasonString:(id*)arg4;
- (id)passingAssetsInAssets:(id)arg1;
- (id)peopleTrait;
- (id)peopleTraitStringWithGraph:(id)arg1;
- (id)scenesTrait;
- (id)sdFoodTrait;
- (void)setCompulsoryScenesTrait:(id)arg1;
- (void)setContentOrAestheticScoreTrait:(id)arg1;
- (void)setCropScoreTrait:(id)arg1;
- (void)setFaceFilter:(unsigned long long)arg1;
- (void)setFilterUtilityAssets:(bool)arg1;
- (void)setMinimumAssetsRatio:(double)arg1;
- (void)setPartOfDayTrait:(id)arg1;
- (void)setPeopleTrait:(id)arg1;
- (void)setScenesTrait:(id)arg1;
- (void)setSdFoodTrait:(id)arg1;
- (void)setSocialGroupTrait:(id)arg1;
- (id)socialGroupTrait;

@end
