
@interface PLAssetsdPhotoKitAddService : PLAbstractLibraryServicesManagerService <PLAssetsdPhotoKitAddServiceProtocol, PLPerformChangesRequestService> {
    PLCameraCaptureTaskConstraintCoordinator * _cameraTaskConstraintCoordinator;
    PLAssetsdConnectionAuthorization * _connectionAuthorization;
    NSPersistentStoreCoordinator * _persistentStoreCoordinator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)applyChangesRequest:(id)arg1 reply:(id /* block */)arg2;
- (id)clientBundleID;
- (id)clientDescription;
- (id)clientDisplayName;
- (void)commitRequest:(id)arg1 reply:(id /* block */)arg2;
- (void)dealloc;
- (id)initWithLibraryServicesManager:(id)arg1 connectionAuthorization:(id)arg2;
- (unsigned long long)libraryRole;
- (id)persistentStoreCoordinator;
- (bool)validatePhotosAccessScopeForChangesRequest:(id)arg1;

@end
