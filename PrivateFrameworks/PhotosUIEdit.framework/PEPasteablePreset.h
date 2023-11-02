
@interface PEPasteablePreset : PEAdjustmentPreset {
    <PEAdjustmentPresetAutoDelegate> * _autoDelegate;
}

@property (nonatomic) <PEAdjustmentPresetAutoDelegate> *autoDelegate;

+ (void)_filterValidAdjustmentsInCompositionController:(id)arg1;
+ (bool)hasValidAdjustmentsInCompositionController:(id)arg1;
+ (void)sanitizeCompositionController:(id)arg1;

- (void).cxx_destruct;
- (void)_runAutoCalculatorForCompositionController:(id)arg1;
- (long long)actionType;
- (void)applyToCompositionController:(id)arg1 invalidAdjustmentKeys:(id)arg2 completion:(id /* block */)arg3;
- (id)autoDelegate;
- (id)expAndWBAdjustmentsDebugDescription;
- (bool)isEligibleForAsyncProcessingOnAsset:(id)arg1;
- (bool)isEligibleForSmartPasteWithPhotoLibrary:(id)arg1;
- (bool)isEligibleForSmartPasteWithPhotoLibrary:(id)arg1 fallbackPayload:(id*)arg2;
- (bool)needsGeometryAdjustments;
- (void)setAutoDelegate:(id)arg1;
- (id)sourceAssetUUID;

@end
