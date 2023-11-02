
@interface PLSyndicationResourceDataStore : PLResourceDataStore <PLResourceDataStore, PLSyndicationSanitizedResourceGeneratorDelegate> {
    PAImageConversionServiceClient * _imageConversionServiceClient;
    PLPhotoLibraryBundle * _libraryBundle;
    PAVideoConversionServiceClient * _videoConversionServiceClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PLPhotoLibraryPathManager *pathManager;
@property (readonly) Class superclass;

+ (void)_addTemporaryURL:(id)arg1 itemIdentifier:(id)arg2 error:(id)arg3 toResults:(id)arg4 andFileHandles:(id)arg5;
+ (bool)_markSyndicationResourceAsLocallyAvailableWithURL:(id)arg1 resource:(id)arg2 inode:(unsigned long long)arg3 error:(id*)arg4;
+ (void)_provideFileURLAndUnwrapLivePhotoIfNeededForBundleID:(id)arg1 syndicationIdentifier:(id)arg2 typeIdentifier:(id)arg3 isLivePhoto:(bool)arg4 options:(long long)arg5 completionHandler:(id /* block */)arg6;
+ (void)_provideFileURLForBundleID:(id)arg1 itemIdentifier:(id)arg2 typeIdentifier:(id)arg3 options:(long long)arg4 completionHandler:(id /* block */)arg5;
+ (void)_provideFileURLsForBundleID:(id)arg1 itemIdentifiers:(id)arg2 typeIdentifier:(id)arg3 options:(long long)arg4 completionHandler:(id /* block */)arg5;
+ (void)_provideTemporaryFileURLFromDataForBundleID:(id)arg1 itemIdentifier:(id)arg2 typeIdentifier:(id)arg3 options:(long long)arg4 completionHandler:(id /* block */)arg5;
+ (bool)_safeCopyItemAtURL:(id)arg1 toURLAndReplaceIfNeeded:(id)arg2 error:(id*)arg3;
+ (bool)_shouldUseDataInterfaceForBundleID:(id)arg1;
+ (bool)_unpackPVTBundleAtURL:(id)arg1 primaryURL:(id*)arg2 secondaryURL:(id*)arg3 error:(id*)arg4;
+ (unsigned short)keyLengthWithDataPreview:(unsigned char)arg1;
+ (bool)markResource:(id)arg1 purgeableAndLocallyAvailableWithFileURL:(id)arg2 error:(id*)arg3;
+ (void)provideFileURLAndUnwrapLivePhotoIfNeededForItemIdentifiersWithBundleIDs:(id)arg1 destURLs:(id)arg2 options:(id)arg3 resultHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
+ (unsigned short)storeClassID;
+ (id)supportedRecipes;

- (void).cxx_destruct;
- (bool)_copyAndMarkAsLocallyAvailablePairedLivePhotoResourceForRequestedResource:(id)arg1 requestedVideoComplement:(bool)arg2 sourceURL:(id)arg3 error:(id*)arg4;
- (bool)_copyAndMarkPurgeableItemAtURL:(id)arg1 withPathManager:(id)arg2 destFileIdentifier:(id)arg3 inode:(unsigned long long*)arg4 error:(id*)arg5;
- (id)_errorForUnderlyingError:(id)arg1;
- (id)_getDestinationURLAndFixLocalAvailabilityIfNeededForResource:(id)arg1 fileIdentifier:(id*)arg2 isLocallyAvailable:(bool*)arg3 error:(id*)arg4;
- (id)_requestLocalAvailabilityChangeForSyndicationOriginalResource:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (bool)canMarkAsynchronousLocalRenderAsOptionalForProgress:(id)arg1;
- (bool)canStoreExternalResource:(id)arg1;
- (bool)canStreamResource:(id)arg1;
- (bool)dataStoreSubtypeIsDownloadable:(long long)arg1;
- (id)descriptionForSubtype:(long long)arg1;
- (id)expectedFileURLForResource:(id)arg1 asset:(id)arg2;
- (id)imageConversionClientForResourceGenerator:(id)arg1;
- (id)keyFromKeyStruct:(const void*)arg1;
- (void)markAsynchronousLocalRenderAsOptionalForProgress:(id)arg1;
- (id)metadataForResourceGenerator:(id)arg1 fromFileURL:(id)arg2;
- (id)name;
- (id)requestLocalAvailabilityChange:(short)arg1 forResource:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (id)resourceDataForKey:(id)arg1 assetID:(id)arg2;
- (id)resourceURLForKey:(id)arg1 assetID:(id)arg2;
- (bool)storeExternalResource:(id)arg1 forAsset:(id)arg2 options:(id)arg3 error:(id*)arg4 resultingResource:(id*)arg5;
- (id)updateDerivativeResourcesForAsset:(id)arg1 forLifecycleEvent:(unsigned int)arg2;
- (id)videoConversionClientForResourceGenerator:(id)arg1;
- (bool)videoResource:(id)arg1 matchesOrExceedsQualityLevel:(unsigned int)arg2;
- (id)virtualResourcesForAsset:(id)arg1;

@end
