
@interface PLSharedStreamsDataStore : PLResourceDataStore <PLResourceDataStore>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PLPhotoLibraryPathManager *pathManager;
@property (readonly) Class superclass;

+ (unsigned int)_masterThumbRecipeID;
+ (unsigned short)keyLengthWithDataPreview:(unsigned char)arg1;
+ (unsigned short)storeClassID;
+ (id)supportedRecipes;

- (short)_cloudSharedAssetPlaceholderKindFromSharedStreamsResourceType:(unsigned int)arg1;
- (bool)_isDerivativeForSharedStreamsType:(unsigned int)arg1;
- (short)_localAvailabilityForAsset:(id)arg1 album:(id)arg2 type:(unsigned int)arg3;
- (unsigned int)_mainResourceTypeForAsset:(id)arg1;
- (void)_prepareForDownloadNotification:(id)arg1 atFileURL:(id)arg2 completion:(id /* block */)arg3;
- (short)_remoteAvailabilityForType:(unsigned int)arg1;
- (id)_sharedStreamsExternalResourceForAsset:(id)arg1 album:(id)arg2 type:(unsigned int)arg3;
- (id)_utiStringForAsset:(id)arg1 type:(unsigned int)arg2;
- (bool)canStoreExternalResource:(id)arg1;
- (bool)canStreamResource:(id)arg1;
- (bool)dataStoreSubtypeIsDownloadable:(long long)arg1;
- (id)descriptionForSubtype:(long long)arg1;
- (id)expectedFileURLForResource:(id)arg1 asset:(id)arg2;
- (id)keyFromKeyStruct:(const void*)arg1;
- (id)name;
- (id)requestLocalAvailabilityChange:(short)arg1 forResource:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (void)requestStreamingURLForResource:(id)arg1 asset:(id)arg2 intent:(unsigned long long)arg3 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg4 streamingHints:(id)arg5 inContext:(id)arg6 clientBundleID:(id)arg7 completion:(id /* block */)arg8;
- (id)requiredExternalResourcesForMigratingOrImportingAsset:(id)arg1;
- (id)resourceDataForKey:(id)arg1 assetID:(id)arg2;
- (id)resourceURLForKey:(id)arg1 assetID:(id)arg2;
- (bool)storeExternalResource:(id)arg1 forAsset:(id)arg2 options:(id)arg3 error:(id*)arg4 resultingResource:(id*)arg5;
- (id)updateDerivativeResourcesForAsset:(id)arg1 forLifecycleEvent:(unsigned int)arg2;
- (bool)videoResource:(id)arg1 matchesOrExceedsQualityLevel:(unsigned int)arg2;
- (id)virtualResourcesForAsset:(id)arg1;

@end
