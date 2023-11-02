
@interface PHCPAnalyticsMediaPropertyProvider : NSObject <CPAnalyticsDynamicPropertyProvider, CPAnalyticsPhotoKitPropertyProvider> {
    PHPhotoLibrary * _photoLibrary;
    PFSceneTaxonomy * _sceneTaxonomy84;
    PFSceneTaxonomy * _sceneTaxonomy99;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, retain) PFSceneTaxonomy *sceneTaxonomy84;
@property (nonatomic, retain) PFSceneTaxonomy *sceneTaxonomy99;
@property (readonly) Class superclass;

+ (id)_syndicationStateDescriptionForSyndicationState:(unsigned short)arg1;
+ (id)_syndicationValueDescriptionForAssetProcessingValue:(unsigned short)arg1;
+ (id)_wellKnownPhotoLibraryIdentifierDescription:(long long)arg1;
+ (id)assetPropertySetsToFetch;

- (void).cxx_destruct;
- (id)_PHAssetCollectionFromPayload:(id)arg1;
- (id)_PHAssetFromPayload:(id)arg1;
- (id)_ageDescriptionForMediaDate:(id)arg1;
- (id)_cameraTypeFromImportSource:(long long)arg1;
- (bool)_hasPeopleForSceneClassifications:(id)arg1 sceneAnalysisVersion:(short)arg2;
- (bool)_hasPetsForSceneClassifications:(id)arg1 sceneAnalysisVersion:(short)arg2;
- (bool)_isPeopleSceneIdentifier:(unsigned int)arg1;
- (bool)_isSceneConfidenceAboveThresholdForSceneClassification:(id)arg1 sceneAnalysisVersion:(short)arg2;
- (id)_junkConfidenceThresholdForIdentifier:(unsigned int)arg1 sceneAnalysisVersion:(short)arg2;
- (id)_junkConfidenceThresholdVersion40ForIdentifier:(unsigned int)arg1;
- (id)_junkConfidenceThresholdVersion81ForIdentifier:(unsigned int)arg1;
- (id)_junkConfidenceThresholdVersion86ForIdentifier:(unsigned int)arg1;
- (id)_mediaCountFromPayload:(id)arg1;
- (id)_mediaProperty:(id)arg1 forAsset:(id)arg2;
- (id)_mediaProperty:(id)arg1 forAssetCollection:(id)arg2;
- (id)_sceneConfidenceThresholdByClassificationIdentifier:(unsigned int)arg1 sceneAnalysisVersion:(short)arg2;
- (id)_sceneForAsset:(id)arg1;
- (id)_sceneLabelByClassificationIdentifier:(unsigned int)arg1;
- (id)_sceneNetLabelConfidenceForIdentifier:(unsigned int)arg1 sceneAnalysisVersion:(short)arg2;
- (id)_sceneSubjectForAsset:(id)arg1;
- (id)_sdConfidenceThresholdForIdentifier:(unsigned int)arg1 sceneAnalysisVersion:(short)arg2;
- (id)_sdConfidenceThresholdVersion33ForIdentifier:(unsigned int)arg1;
- (id)_sdConfidenceThresholdVersion51ForIdentifier:(unsigned int)arg1;
- (id)_sdConfidenceThresholdVersion85ForIdentifier:(unsigned int)arg1;
- (id)getDynamicProperty:(id)arg1 forEventName:(id)arg2 payloadForSystemPropertyExtraction:(id)arg3;
- (id)init;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)photoLibrary;
- (void)registerSystemProperties:(id)arg1;
- (id)sceneTaxonomy84;
- (id)sceneTaxonomy99;
- (void)setSceneTaxonomy84:(id)arg1;
- (void)setSceneTaxonomy99:(id)arg1;

@end
