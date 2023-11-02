
@interface PLAssetsdPhotoKitService : PLAbstractLibraryServicesManagerService <PLAssetsdPhotoKitServiceProtocol, PLPerformChangesRequestService, PLSyndicationSyncManagerDelegate> {
    PLCameraCaptureTaskConstraintCoordinator * _cameraTaskConstraintCoordinator;
    PLAssetsdConnectionAuthorization * _connectionAuthorization;
    NSPersistentStoreCoordinator * _persistentStoreCoordinator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_processUniversalSearchJITForAsset:(id)arg1 cssiUniqueIdentifier:(id)arg2 bundleID:(id)arg3 processingTypes:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (void)applyChangesRequest:(id)arg1 reply:(id /* block */)arg2;
- (id)clientBundleID;
- (id)clientDescription;
- (id)clientDisplayName;
- (void)commitRequest:(id)arg1 reply:(id /* block */)arg2;
- (void)dealloc;
- (void)executeQueryForSyncManager:(id)arg1 type:(long long)arg2 startDate:(id)arg3 endDate:(id)arg4 batchHandler:(id /* block */)arg5 completionHandler:(id /* block */)arg6;
- (void)executeQueryForSyncManager:(id)arg1 type:(long long)arg2 startDate:(id)arg3 endDate:(id)arg4 itemHandler:(id /* block */)arg5 completionHandler:(id /* block */)arg6;
- (void)getUUIDsForAssetObjectURIs:(id)arg1 filterPredicate:(id)arg2 reply:(id /* block */)arg3;
- (id)initWithLibraryServicesManager:(id)arg1 connectionAuthorization:(id)arg2;
- (unsigned long long)libraryRole;
- (id)persistentStoreCoordinator;
- (void)processUniversalSearchJITForAssetUUID:(id)arg1 processingTypes:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)processUniversalSearchJITForCoreSpotlightUniqueIdentifier:(id)arg1 bundleID:(id)arg2 processingTypes:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (void)resolveLocalIdentifiersForCloudIdentifiers:(id)arg1 reply:(id /* block */)arg2;
- (bool)syncManager:(id)arg1 shouldContinueWithLibrary:(id)arg2;

@end
