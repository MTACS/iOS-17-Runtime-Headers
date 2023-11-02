
@interface PLPrimaryResourceDataStoreLocalVideoKeyFrameRecipe : PLResourceRecipe {
    PLLocalVideoKeyFrameJobQueue * _jobQueue;
}

+ (void)generateKeyFrameFromVideoURL:(id)arg1 destinationURL:(id)arg2 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 completion:(id /* block */)arg4;
+ (void)generateKeyFrameFromVideoURL:(id)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 completion:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)_generateAndStoreForAsset:(id)arg1 networkAccessAllowed:(bool)arg2 progress:(id*)arg3 completion:(id /* block */)arg4;
- (void)_handleJobFinished:(id)arg1 withMutatedMoc:(id)arg2 error:(id)arg3 storedRecipes:(id)arg4 affectedRecipes:(id)arg5 sourceMetadata:(id)arg6;
- (void)_handleKeyFrameGeneratedWithAsset:(id)arg1 destinationURL:(id)arg2 completion:(id /* block */)arg3;
- (void)_runNextJob;
- (id)chooseIngredientsFrom:(id)arg1 version:(unsigned int)arg2;
- (id)codecFourCharCodeName;
- (id)colorSpaceGivenSourceColorSpace:(id)arg1 inContext:(id)arg2;
- (void)generateAndStoreForAsset:(id)arg1 networkAccessAllowed:(bool)arg2 progress:(id*)arg3 completion:(id /* block */)arg4;
- (void)generateAndStoreForAsset:(id)arg1 version:(unsigned int)arg2 imageConversionClient:(id)arg3 videoConversionClient:(id)arg4 conversionServiceOptions:(id)arg5 deferredPhotoFinalizer:(id)arg6 progress:(id*)arg7 reason:(id)arg8 completion:(id /* block */)arg9;
- (id)initWithRecipeID:(unsigned int)arg1;
- (unsigned int)recipeID;

@end
