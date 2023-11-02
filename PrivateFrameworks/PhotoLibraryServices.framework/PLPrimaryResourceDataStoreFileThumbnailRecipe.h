
@interface PLPrimaryResourceDataStoreFileThumbnailRecipe : PLPrimaryResourceDataStoreImageRecipe {
    unsigned int  _recipeID;
}

@property (nonatomic) unsigned int recipeID;

- (bool)_isAspectShortSizing;
- (double)_longSideTargetLength;
- (double)_shortSideTargetLength;
- (id)chooseIngredientsFrom:(id)arg1 version:(unsigned int)arg2;
- (id)colorSpaceGivenSourceColorSpace:(id)arg1 inContext:(id)arg2;
- (id)description;
- (id)expectedFileURLForVersion:(unsigned int)arg1 asset:(id)arg2;
- (void)generateAndStoreForAsset:(id)arg1 version:(unsigned int)arg2 imageConversionClient:(id)arg3 videoConversionClient:(id)arg4 conversionServiceOptions:(id)arg5 deferredPhotoFinalizer:(id)arg6 progress:(id*)arg7 reason:(id)arg8 completion:(id /* block */)arg9;
- (id)initWithRecipeID:(unsigned int)arg1;
- (unsigned int)recipeID;
- (void)setRecipeID:(unsigned int)arg1;
- (struct CGSize { double x1; double x2; })sizeForAssetWidth:(long long)arg1 height:(long long)arg2;
- (id)supportedVersionsForLocalResourceGeneration;
- (id)uti;

@end
