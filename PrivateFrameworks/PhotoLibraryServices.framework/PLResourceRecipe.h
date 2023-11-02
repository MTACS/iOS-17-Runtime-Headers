
@interface PLResourceRecipe : NSObject <NSCopying>

+ (Class)classFromRecipeID:(unsigned int)arg1;
+ (id)recipeFromID:(unsigned int)arg1;

- (id)chooseIngredientsFrom:(id)arg1 version:(unsigned int)arg2;
- (id)codecFourCharCodeName;
- (id)colorSpaceGivenSourceColorSpace:(id)arg1 inContext:(id)arg2;
- (bool)colorSpaceIsNativeForDisplay;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)expectedFileURLForVersion:(unsigned int)arg1 asset:(id)arg2;
- (id)expectedSizeFromWidth:(long long)arg1 height:(long long)arg2;
- (void)generateAndStoreForAsset:(id)arg1 version:(unsigned int)arg2 imageConversionClient:(id)arg3 videoConversionClient:(id)arg4 conversionServiceOptions:(id)arg5 deferredPhotoFinalizer:(id)arg6 progress:(id*)arg7 reason:(id)arg8 completion:(id /* block */)arg9;
- (unsigned long long)hash;
- (id)initWithRecipeID:(unsigned int)arg1;
- (bool)isDerivative;
- (bool)isEqual:(id)arg1;
- (bool)isMarkedFullSize;
- (id)maxPixelCountForAssetWidth:(long long)arg1 height:(long long)arg2;
- (unsigned int)orientation;
- (void)populateAdjustedRecipeIngredients:(id)arg1 asset:(id)arg2 version:(unsigned int)arg3;
- (unsigned short)recipeClassID;
- (id)recipeErrorWithCode:(long long)arg1 version:(unsigned int)arg2 underlyingError:(id)arg3 debugDescription:(id)arg4;
- (unsigned int)recipeID;
- (id)supportedVersionsForLocalResourceGeneration;
- (id)uti;

@end
