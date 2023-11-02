
@interface PLAssetsdLibraryClient : PLAssetsdBaseClient {
    _Atomic bool  _isOpen;
    PLAssetsdClientSandboxExtensions * _sandboxExtensions;
}

@property (readonly) bool isOpened;

- (void).cxx_destruct;
- (id)_assetURIStringsForPhotos:(id)arg1;
- (bool)_consumeSandboxExtensions:(id)arg1;
- (void)automaticallyDeleteEmptyAlbumWithObjectID:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)createPhotoLibraryDatabaseWithOptions:(id)arg1 error:(id*)arg2;
- (long long)getCurrentModelVersion;
- (id)getPhotoLibraryStoreXPCListenerEndpoint;
- (id)importFileSystemAssetsForce:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)initWithQueue:(id)arg1 proxyCreating:(id)arg2 proxyGetter:(SEL)arg3 sandboxExtensions:(id)arg4;
- (bool)isLibraryReadyForImportWithError:(id*)arg1;
- (bool)isOpened;
- (void)launchAssetsd;
- (bool)openPhotoLibraryDatabaseWithPostOpenProgress:(id*)arg1 error:(id*)arg2;
- (bool)openPhotoLibraryDatabaseWithPostOpenProgress:(id*)arg1 options:(id)arg2 error:(id*)arg3;
- (bool)openPhotoLibraryDatabaseWithoutProgressIfNeededWithOptions:(id)arg1 error:(id*)arg2;
- (void)pendingEventsForRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)publishRemoteChangeEvent:(id)arg1 delayedSaveActionsDetail:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)recoverFromCrashIfNeeded;
- (void)resetFaceAnalysisWithResetLevel:(long long)arg1 completionHandler:(id /* block */)arg2;
- (id)resetPersonsWithCompletionHandler:(id /* block */)arg1;
- (bool)synchronouslyImportFileSystemAssetsForce:(bool)arg1 withError:(id*)arg2;
- (bool)synchronouslyRepairSingletonObjectsWithError:(id*)arg1;
- (bool)synchronouslyUpdateThumbnailsForPhotos:(id)arg1 assignNewIndex:(bool)arg2 forceRefresh:(bool)arg3 error:(id*)arg4;
- (id)transferAssetsWithUuids:(id)arg1 fromLibraryURL:(id)arg2 transferOptions:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)transferPersonsWithUuids:(id)arg1 fromLibraryURL:(id)arg2 transferOptions:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)updateThumbnailsForPhotos:(id)arg1 assignNewIndex:(bool)arg2 forceRefresh:(bool)arg3 completionHandler:(id /* block */)arg4;
- (id)upgradePhotoLibraryDatabaseWithOptions:(id)arg1 completion:(id /* block */)arg2;

@end
