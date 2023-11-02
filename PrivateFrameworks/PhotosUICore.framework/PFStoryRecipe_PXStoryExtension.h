
@interface PFStoryRecipe_PXStoryExtension : NSObject

+ (id)PHAssetsInRecipe:(id)arg1 withCategory:(long long)arg2 error:(id*)arg3;
+ (id)PHPhotoLibraryForRecipe:(id)arg1;
+ (bool)_recipe:(id)arg1 isReferencingPHPhotoLibrary:(id)arg2;
+ (bool)_recipe:(id)arg1 setPHPhotoLibrary:(id)arg2 error:(id*)arg3;
+ (bool)addDisplayAssets:(id)arg1 toRecipe:(id)arg2 withCategory:(long long)arg3 error:(id*)arg4;
+ (bool)addPHAssets:(id)arg1 toRecipe:(id)arg2 withCategory:(long long)arg3 error:(id*)arg4;
+ (bool)addSyntheticAssets:(id)arg1 toRecipe:(id)arg2 withCategory:(long long)arg3 error:(id*)arg4;
+ (id)displayAssetsInRecipe:(id)arg1 withCategory:(long long)arg2 error:(id*)arg3;
+ (void)enumerateDisplayAssetsFromRecipe:(id)arg1 usingBlock:(id /* block */)arg2;
+ (id)flexFetchQueue;
+ (id)recipe:(id)arg1 withPHPhotoLibrary:(id)arg2 error:(id*)arg3;
+ (id)recipeAssetFromAudioAsset:(id)arg1 withCategory:(long long)arg2 subcategory:(long long)arg3 error:(id*)arg4;
+ (bool)recipeContainsAnyDisplayAsset:(id)arg1;
+ (id)requestAudioAssetFromRecipeAsset:(id)arg1 recipe:(id)arg2 resultHandler:(id /* block */)arg3;
+ (id)schemeForPHAssets;
+ (id)schemeForSyntheticAssets;
+ (id)syntheticAssetsInRecipe:(id)arg1 withCategory:(long long)arg2 error:(id*)arg3;

@end
