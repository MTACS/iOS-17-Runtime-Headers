
@interface PLPrimaryResourceDataStoreVideoRecipe : PLResourceRecipe {
    unsigned int  _recipeID;
}

@property (nonatomic) unsigned int recipeID;

- (void)_generateAndStoreUsingMediaConversionServicesForAsset:(id)arg1 version:(unsigned int)arg2 conversionClient:(id)arg3 conversionServiceOptions:(id)arg4 isHighPriority:(bool)arg5 progress:(id*)arg6 reason:(id)arg7 completion:(id /* block */)arg8;
- (id)_mediaConversionServiceOptionsForAsset:(id)arg1 conversionServiceOptions:(id)arg2 adjustmentData:(id)arg3 largeAdjustmentData:(id)arg4 isHighPriority:(bool)arg5 reason:(id)arg6;
- (id)chooseIngredientsFrom:(id)arg1 version:(unsigned int)arg2;
- (id)codecFourCharCodeName;
- (id)colorSpaceGivenSourceColorSpace:(id)arg1 inContext:(id)arg2;
- (id)description;
- (id)expectedFileURLForVersion:(unsigned int)arg1 asset:(id)arg2;
- (void)generateAndStoreForAsset:(id)arg1 version:(unsigned int)arg2 imageConversionClient:(id)arg3 videoConversionClient:(id)arg4 conversionServiceOptions:(id)arg5 deferredPhotoFinalizer:(id)arg6 progress:(id*)arg7 reason:(id)arg8 completion:(id /* block */)arg9;
- (void)generateAndStoreForAssetWithPriority:(id)arg1 version:(unsigned int)arg2 imageConversionClient:(id)arg3 videoConversionClient:(id)arg4 isHighPriority:(bool)arg5 reason:(id)arg6 progress:(id*)arg7 completion:(id /* block */)arg8;
- (id)initWithRecipeID:(unsigned int)arg1;
- (bool)isMarkedFullSize;
- (unsigned int)recipeID;
- (void)setRecipeID:(unsigned int)arg1;
- (id)supportedVersionsForLocalResourceGeneration;
- (id)uti;

@end
