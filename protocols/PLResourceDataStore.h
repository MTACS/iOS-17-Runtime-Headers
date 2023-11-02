
@protocol PLResourceDataStore <NSObject>

@required

+ (bool)keyDataIsValid:(NSData *)arg1;
+ (unsigned short)keyLengthWithDataPreview:(unsigned char)arg1;
+ (unsigned short)storeClassID;
+ (NSArray *)supportedRecipes;

- (bool)canMarkAsynchronousLocalRenderAsOptionalForProgress:(NSProgress *)arg1;
- (bool)canStoreExternalResource:(PLValidatedExternalResource *)arg1;
- (bool)canStreamResource:(id <PLResource>)arg1;
- (bool)dataStoreSubtypeIsDownloadable:(long long)arg1;
- (NSString *)descriptionForSubtype:(long long)arg1;
- (NSURL *)expectedFileURLForResource:(id <PLResource>)arg1 asset:(PLManagedAsset *)arg2;
- (PLUniformTypeIdentifier *)guessUTIForExternalResource:(PLValidatedExternalResource *)arg1 forAssetKind:(short)arg2;
- (id)initWithPathManager:(PLPhotoLibraryPathManager *)arg1;
- (<PLResourceDataStoreKey> *)keyFromKeyStruct:(const void*)arg1;
- (void)markAsynchronousLocalRenderAsOptionalForProgress:(NSProgress *)arg1;
- (NSString *)name;
- (PLPhotoLibraryPathManager *)pathManager;
- (NSProgress *)requestLocalAvailabilityChange:(void *)arg1 forResource:(void *)arg2 options:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 11: short, PLInternalResource *, PLResourceLocalAvailabilityRequestOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, long long, NSURL *, void*
- (void)requestStreamingURLForResource:(void *)arg1 asset:(void *)arg2 intent:(void *)arg3 timeRange:(void *)arg4 streamingHints:(void *)arg5 inContext:(void *)arg6 clientBundleID:(void *)arg7 completion:(void *)arg8; // needs 8 arg types, found 17: <PLResource> *, PLManagedAsset *, unsigned long long, struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }, NSDictionary *, NSManagedObjectContext *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSData *, NSDate *, NSString *, NSError *, void*
- (NSData *)resourceDataForKey:(id <PLResourceDataStoreKey>)arg1 assetID:(id <PLAssetID>)arg2;
- (NSURL *)resourceURLForKey:(id <PLResourceDataStoreKey>)arg1 assetID:(id <PLAssetID>)arg2;
- (bool)storeExternalResource:(PLValidatedExternalResource *)arg1 forAsset:(PLManagedAsset *)arg2 options:(PLResourceDataStoreOptions *)arg3 error:(id*)arg4 resultingResource:(id*)arg5;
- (bool)supportsTimeRange;
- (NSSet *)updateDerivativeResourcesForAsset:(PLManagedAsset *)arg1 forLifecycleEvent:(unsigned int)arg2;
- (bool)videoResource:(id <PLResource>)arg1 matchesOrExceedsQualityLevel:(unsigned int)arg2;
- (NSArray *)virtualResourcesForAsset:(PLManagedAsset *)arg1;

@end
