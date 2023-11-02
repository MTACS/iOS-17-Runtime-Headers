
@interface PEVideoTrimBurnInUtility : NSObject

+ (id)_compositionControllerWithNormalizedTemporalAdjustmentsForBurnedInTrim:(id)arg1 trimController:(id)arg2 cinematographyScript:(id)arg3 error:(id*)arg4;
+ (void)_contentEditingInputFor:(id)arg1 completion:(id /* block */)arg2;
+ (void)_duplicateAsset:(id)arg1 withNewRenderURL:(id)arg2 asShotCompositionController:(id)arg3 completion:(id /* block */)arg4;
+ (id)_error:(long long)arg1 description:(id)arg2;
+ (id)_fileExtension;
+ (id)_fileType;
+ (void)_renderComposition:(id)arg1 toURL:(id)arg2 completion:(id /* block */)arg3;
+ (id)_renderURLForAssetFilename:(id)arg1 error:(id*)arg2;
+ (id)_trimOnlyCompositionControllerFor:(id)arg1;
+ (void)burnInTrimToNewAsset:(id)arg1 compositionController:(id)arg2 asShotCompositionController:(id)arg3 cinematographyScript:(id)arg4 queue:(id)arg5 completion:(id /* block */)arg6;

@end
