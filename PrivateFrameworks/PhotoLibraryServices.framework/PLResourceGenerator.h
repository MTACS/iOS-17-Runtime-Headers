
@interface PLResourceGenerator : NSObject

+ (void)_continueGeneratingResourcesForAsset:(id)arg1 versions:(id)arg2 imageConversionClient:(id)arg3 videoConversionClient:(id)arg4 conversionServiceOptions:(id)arg5 remainingRecipes:(id)arg6 storedRecipes:(id)arg7 attemptedRecipes:(id)arg8 errorsEncountered:(id)arg9 progress:(id)arg10 reason:(id)arg11 completion:(id /* block */)arg12;
+ (id)expectedLocalResourceRecipesForAsset:(id)arg1 versions:(id)arg2;
+ (id)expectedLocalResourceRecipesForAssetWithLibraryID:(id)arg1 versions:(id)arg2 assetHasAdjustments:(bool)arg3 isDefaultAdjustedSlomo:(bool)arg4 assetIsRAWOrRawPlugJPEGWithRawOnTop:(bool)arg5 assetWidth:(long long)arg6 assetHeight:(long long)arg7 assetKind:(short)arg8 assetkindSubtype:(short)arg9 deferredProcessingNeeded:(unsigned short)arg10 videoDeferredProcessingNeeded:(unsigned short)arg11;
+ (id)fileAndTableBackedThumbnailManagerRecipesForLibraryID:(id)arg1;
+ (id)generateAndStoreMissingExpectedLocalResourcesForAsset:(id)arg1 versions:(id)arg2 imageConversionClient:(id)arg3 videoConversionClient:(id)arg4 conversionServiceOptions:(id)arg5 reason:(id)arg6 completion:(id /* block */)arg7;
+ (id)locallyUnavailableRecipesFromRecipes:(id)arg1 versions:(id)arg2 asset:(id)arg3;

@end
