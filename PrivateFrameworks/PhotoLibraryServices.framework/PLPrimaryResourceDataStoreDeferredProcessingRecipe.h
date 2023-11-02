
@interface PLPrimaryResourceDataStoreDeferredProcessingRecipe : PLResourceRecipe {
    unsigned int  _recipeID;
}

@property (nonatomic) unsigned int recipeID;

- (bool)_needsVideoFinalizationForImageAsset:(id)arg1;
- (id)colorSpaceGivenSourceColorSpace:(id)arg1 inContext:(id)arg2;
- (id)description;
- (void)generateAndStoreForAsset:(id)arg1 version:(unsigned int)arg2 imageConversionClient:(id)arg3 videoConversionClient:(id)arg4 conversionServiceOptions:(id)arg5 deferredPhotoFinalizer:(id)arg6 progress:(id*)arg7 reason:(id)arg8 completion:(id /* block */)arg9;
- (id)initWithRecipeID:(unsigned int)arg1;
- (bool)isMarkedFullSize;
- (unsigned int)recipeID;
- (void)setRecipeID:(unsigned int)arg1;
- (id)supportedVersionsForLocalResourceGeneration;

@end
