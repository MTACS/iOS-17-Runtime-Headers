
@interface PLClientPhotoLibraryBundle : PLPhotoLibraryBundle {
    PLLazyObject * _lazyClientSandboxExtensionCache;
}

- (void).cxx_destruct;
- (void)_initClientSandboxExtensionCache;
- (void)_invalidateClientSandboxExtensionCache;
- (bool)calculateTotalSizeWithResult:(id /* block */)arg1;
- (id)clientSandboxExtensionCache;
- (void)close;
- (id)initWithLibraryURL:(id)arg1 bundleController:(id)arg2;
- (id)newAssetsdClient;
- (id)newBoundAssetsdServicesTable;
- (id)newChangePublisher;
- (id)newLibraryServicesManager;
- (void)resetClientSandboxExtensionCache;
- (void)setCloudPhotoLibraryEnabled:(bool)arg1;
- (void)setPhotoStreamEnabled:(bool)arg1;
- (void)setSharedAlbumEnabled:(bool)arg1;
- (id)transferAssets:(id)arg1 toBundle:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (id)transferPersons:(id)arg1 toBundle:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;

@end
