
@interface PESmartPasteablePreset : PEPasteablePreset {
    NSString * _expAndWBDebugDescription;
    PEResourceManager * _resourceManager;
    bool  _shouldBypassGating;
    PHAsset * _sourceAsset;
    NUComposition * _sourceAssetComposition;
    unsigned long long  _sourceAssetSceneCharacteristics;
}

@property (nonatomic) bool shouldBypassGating;
@property (nonatomic, retain) PHAsset *sourceAsset;
@property (nonatomic, copy) NUComposition *sourceAssetComposition;
@property (nonatomic) unsigned long long sourceAssetSceneCharacteristics;

+ (bool)isAssetTypeEligibleForSmartPaste:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)_imageClassificationsForAsset:(id)arg1;
- (void)_loadResourcesForSourceAssetWithPhotoLibrary:(id)arg1 completion:(id /* block */)arg2;
- (bool)_shouldPerformSmartPasteOnAsset:(id)arg1;
- (long long)actionType;
- (void)applyToCompositionController:(id)arg1 asset:(id)arg2 editSource:(id)arg3 completion:(id /* block */)arg4;
- (void)applyToCompositionController:(id)arg1 editSource:(id)arg2 completion:(id /* block */)arg3;
- (void)applyToLoadResult:(id)arg1 completion:(id /* block */)arg2;
- (id)expAndWBAdjustmentsDebugDescription;
- (id)initWithPasteablePreset:(id)arg1;
- (bool)needsGeometryAdjustments;
- (id)sceneCharacteristicDescription:(unsigned long long)arg1;
- (void)setShouldBypassGating:(bool)arg1;
- (void)setSourceAsset:(id)arg1;
- (void)setSourceAssetComposition:(id)arg1;
- (void)setSourceAssetSceneCharacteristics:(unsigned long long)arg1;
- (bool)shouldBypassGating;
- (id)sourceAsset;
- (id)sourceAssetComposition;
- (unsigned long long)sourceAssetSceneCharacteristics;
- (void)triggerLegacyPasteFallbackOnCompositionController:(id)arg1 editSource:(id)arg2 asset:(id)arg3 reviewPayload:(id)arg4 completion:(id /* block */)arg5;

@end
