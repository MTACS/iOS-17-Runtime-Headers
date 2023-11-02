
@interface NTKGreenfieldUtilities : NSObject

+ (id)_addGenericDeviceBorderToWatchFaceImage:(id)arg1 includesTransparentPadding:(bool)arg2;
+ (id)_addGreyBorderToWatchFaceImage:(id)arg1;
+ (id)_companionAppIdFromWatchAppBundleId:(id)arg1;
+ (id)_decodeFaceFromDataPath:(id)arg1;
+ (id)_greenfieldWatchFaceJsonForFace:(id)arg1;
+ (id)_metadataDictForWatchFace:(id)arg1 slotToSampleTemplateMapping:(id)arg2 slotToItemIdMapping:(id)arg3 slotToBundleIdMapping:(id)arg4 watchFaceDataPath:(id)arg5;
+ (id)_queue_encodeDraftRecipe:(id)arg1;
+ (id)_queue_greenfieldPreviewFromUrl:(id)arg1;
+ (id)_queue_snapshotFace:(id)arg1 borderType:(unsigned long long)arg2;
+ (void)_updateSystemDeletableAppItemIdForSlotToItemIdMapping:(id)arg1 face:(id)arg2;
+ (id)addBorder:(unsigned long long)arg1 toWatchFaceImage:(id)arg2;
+ (id)createXPCServiceConnection;
+ (void)decodeWatchFaceFromUrl:(id)arg1 completionBlock:(id /* block */)arg2;
+ (id)encodeQueue;
+ (void)encodeRecipeFromDraftRecipe:(id)arg1 completionBlock:(id /* block */)arg2;
+ (void)generateFacePreviewImageFromDraftRecipe:(id)arg1 borderType:(unsigned long long)arg2 completionBlock:(id /* block */)arg3;
+ (void)generateFacePreviewImageFromDraftRecipe:(id)arg1 completionBlock:(id /* block */)arg2;
+ (void)generateFacePreviewImageFromUrl:(id)arg1 completionBlock:(id /* block */)arg2;
+ (bool)shouldAutoDismissViewControllerForAddFaceFlow:(id)arg1;
+ (bool)shouldPresentUnreleasedFeaturesInternalWarningForFace:(id)arg1;
+ (id)temporaryGreenfieldDirectory;
+ (id)temporaryGreenfieldNoBordersSnapshotPath;
+ (id)unzipWatchFaceFileAtUrl:(id)arg1;
+ (bool)validateFaceType:(id)arg1 faceBundleId:(id)arg2;

@end
