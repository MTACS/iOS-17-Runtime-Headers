
@interface PLPrimaryResourceDataStoreImageRecipe : PLResourceRecipe {
    unsigned int  _recipeID;
}

@property (nonatomic) unsigned int recipeID;

+ (struct CGSize { double x1; double x2; })scaleOriginalSize:(struct CGSize { double x1; double x2; })arg1 toLongSideTarget:(double)arg2;
+ (struct CGSize { double x1; double x2; })scaleOriginalSize:(struct CGSize { double x1; double x2; })arg1 toShortSideTarget:(double)arg2 maxLongSideLength:(double)arg3;

- (void)_generateAndStoreUsingMediaConversionServicesForAsset:(id)arg1 version:(unsigned int)arg2 conversionClient:(id)arg3 videoConversionClient:(id)arg4 conversionServiceOptions:(id)arg5 isHighPriority:(bool)arg6 progress:(id*)arg7 reason:(id)arg8 completion:(id /* block */)arg9;
- (id)_mediaConversionServiceOptionsForAsset:(id)arg1 url:(id)arg2 conversionServiceOptions:(id)arg3 adjustmentData:(id)arg4 largeAdjustmentData:(id)arg5 isHighPriority:(bool)arg6 reason:(id)arg7;
- (id)_resourceGenerationAffectsRecipesForLibraryID:(id)arg1;
- (bool)_storeResourceWithType:(unsigned int)arg1 version:(unsigned int)arg2 asset:(id)arg3 destURL:(id)arg4 error:(id*)arg5;
- (id)chooseIngredientsFrom:(id)arg1 version:(unsigned int)arg2;
- (id)codecFourCharCodeName;
- (id)colorSpaceGivenSourceColorSpace:(id)arg1 inContext:(id)arg2;
- (bool)colorSpaceIsNativeForDisplay;
- (id)description;
- (id)expectedFileURLForVersion:(unsigned int)arg1 asset:(id)arg2;
- (id)expectedSizeFromWidth:(long long)arg1 height:(long long)arg2;
- (void)generateAndStoreForAsset:(id)arg1 version:(unsigned int)arg2 imageConversionClient:(id)arg3 videoConversionClient:(id)arg4 conversionServiceOptions:(id)arg5 deferredPhotoFinalizer:(id)arg6 progress:(id*)arg7 reason:(id)arg8 completion:(id /* block */)arg9;
- (void)generateAndStoreForAssetWithPriority:(id)arg1 version:(unsigned int)arg2 imageConversionClient:(id)arg3 videoConversionClient:(id)arg4 isHighPriority:(bool)arg5 reason:(id)arg6 progress:(id*)arg7 completion:(id /* block */)arg8;
- (id)initWithRecipeID:(unsigned int)arg1;
- (bool)isMarkedFullSize;
- (id)maxPixelCountForAssetWidth:(long long)arg1 height:(long long)arg2;
- (unsigned int)recipeID;
- (void)setRecipeID:(unsigned int)arg1;
- (id)supportedVersionsForLocalResourceGeneration;
- (id)uti;

@end
