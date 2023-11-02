
@interface PLAssetsdLibraryService : PLAbstractLibraryServicesManagerService <PLAssetsdLibraryServiceProtocol> {
    PLAssetsdService * _assetsdService;
    PLAssetsdConnectionAuthorization * _connectionAuthorization;
    PLPhotoLibraryBundleController * _libraryBundleController;
    NSMutableArray * _postRunningProgressFollowers;
    NSMutableArray * _preRunningProgressFollowers;
    PLXPCPhotoLibraryStoreContainer * _xpcPhotoLibraryStoreContainer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (long long)requiredLibraryServicesStateForURL:(id)arg1;

- (void).cxx_destruct;
- (id)_postRunningProgress;
- (id)_preRunningProgress;
- (id)_returnValueForProgress:(id)arg1 addTo:(id)arg2;
- (void)_sendClientReply:(id /* block */)arg1 sandboxExtensionsByPath:(id)arg2 error:(id)arg3;
- (void)automaticallyDeleteEmptyAlbumWithObjectURI:(id)arg1 reply:(id /* block */)arg2;
- (void)createPhotoLibraryDatabaseWithOptions:(id)arg1 reply:(id /* block */)arg2;
- (void)dealloc;
- (void)getCurrentModelVersionWithReply:(id /* block */)arg1;
- (void)getPhotoLibraryStoreXPCListenerEndpointWithReply:(id /* block */)arg1;
- (id)importFileSystemAssetsWithReason:(id)arg1 force:(bool)arg2 reply:(id /* block */)arg3;
- (id)initWithLibraryServicesManager:(id)arg1 bundleController:(id)arg2 connectionAuthorization:(id)arg3 assetsdService:(id)arg4;
- (void)isLibraryReadyForImportWithReply:(id /* block */)arg1;
- (void)launchAssetsd;
- (id)libraryBundle;
- (id)newLibraryOpener;
- (void)openPhotoLibraryDatabaseWithOptions:(id)arg1 reply:(id /* block */)arg2;
- (void)pendingEventsForRequest:(id)arg1 reply:(id /* block */)arg2;
- (id)postOpenProgressWithReply:(id /* block */)arg1;
- (void)publishRemoteChangeEvent:(id)arg1 delayedSaveActionsDetail:(id)arg2 reply:(id /* block */)arg3;
- (void)recoverFromCrashIfNeeded;
- (void)repairSingletonObjectsWithReply:(id /* block */)arg1;
- (void)resetFaceAnalysisWithResetLevel:(long long)arg1 withReply:(id /* block */)arg2;
- (id)resetPersonsWithReply:(id /* block */)arg1;
- (id)sandboxExtensionsByPath;
- (id)transferAssetsWithUuids:(id)arg1 fromLibraryURL:(id)arg2 transferOptions:(id)arg3 reply:(id /* block */)arg4;
- (id)transferPersonsWithUuids:(id)arg1 fromLibraryURL:(id)arg2 transferOptions:(id)arg3 reply:(id /* block */)arg4;
- (void)updateThumbnailsForPhotos:(id)arg1 assignNewIndex:(bool)arg2 forceRefresh:(bool)arg3 reply:(id /* block */)arg4;
- (id)upgradePhotoLibraryDatabaseWithOptions:(id)arg1 reply:(id /* block */)arg2;

@end
