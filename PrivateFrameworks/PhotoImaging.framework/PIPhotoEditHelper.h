
@interface PIPhotoEditHelper : NSObject

+ (id)_imageRenderRequestWithComposition:(id)arg1 wideGamut:(bool)arg2;
+ (id)adjustmentConstants;
+ (bool)areCPVAssetsEditable;
+ (id)assetIdentifierForURL:(id)arg1 type:(id)arg2 useEmbeddedPreview:(bool)arg3;
+ (bool)canInterpretDataWithFormatIdentifier:(id)arg1 formatVersion:(id)arg2;
+ (id)compositionByRemovingVideoAndLivePhotoAdjustments:(id)arg1;
+ (bool)compositionHasAnyStageEffect:(id)arg1;
+ (id)effectNameForFilterName:(id)arg1;
+ (id)filterNameForEffectName:(id)arg1;
+ (id)geometryBasedAdjustmentIdentifiers;
+ (id)geometryRequestWithComposition:(id)arg1;
+ (void)handlePIGlobalSettings:(id)arg1;
+ (id)imagePropertiesRequestWithComposition:(id)arg1;
+ (id)imageRenderRequestWithComposition:(id)arg1 fillInSize:(struct CGSize { double x1; double x2; })arg2 wideGamut:(bool)arg3;
+ (id)imageRenderRequestWithComposition:(id)arg1 fitInSize:(struct CGSize { double x1; double x2; })arg2 wideGamut:(bool)arg3;
+ (id)imageSourceWithCIImage:(id)arg1 orientation:(long long)arg2;
+ (id)imageSourceWithURL:(id)arg1 type:(id)arg2 proxyImage:(id)arg3 orientation:(long long)arg4 useEmbeddedPreview:(bool)arg5;
+ (id)imageSourceWithURL:(id)arg1 type:(id)arg2 useEmbeddedPreview:(bool)arg3;
+ (void)initialize;
+ (bool)is3DEffect:(id)arg1;
+ (bool)isAVAssetEditable:(id)arg1 reason:(long long*)arg2;
+ (bool)isPortraitEffect:(id)arg1;
+ (bool)isPortraitStageEffect:(id)arg1;
+ (id)knownFormatsVersionsMap;
+ (id)livePhotoSourceWithPhotoSource:(id)arg1 videoSource:(id)arg2;
+ (id)newAdjustmentWithIdentifier:(id)arg1;
+ (id)newAdjustmentWithName:(id)arg1;
+ (struct CGImage { }*)newCGImageFromImageBuffer:(id)arg1;
+ (id)newComposition;
+ (id)newCompositionControllerWithComposition:(id)arg1;
+ (id)photosSchema;
+ (id)pipelineFiltersForCropping;
+ (id)pipelineFiltersForOriginalGeometry;
+ (id)pipelineFiltersForRAWShowingOriginalWithGeometry;
+ (id)pipelineFiltersForShowingOriginal;
+ (id)pipelineFiltersForShowingOriginalWithGeometry;
+ (void)preheatEditDependencies;
+ (id)priorityWithLevel:(long long)arg1;
+ (id)rawAdjustmentWithRawImageProperties:(id)arg1;
+ (id)stringForAutoLoopFlavor:(long long)arg1;
+ (bool)updateCropAdjustmentControllerFor:(id)arg1 beforeCompositionController:(id)arg2 error:(out id*)arg3;
+ (id)validatedCompositionCopyForComposition:(id)arg1 mediaType:(long long)arg2;
+ (id)videoPropertiesRequestWithComposition:(id)arg1;
+ (id)videoRenderRequestWithComposition:(id)arg1 fitInSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)videoSourceWithURL:(id)arg1;
+ (id)videoSourceWithVideoData:(id)arg1 orientation:(long long)arg2;

@end
