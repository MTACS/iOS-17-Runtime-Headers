
@interface PLAssetsdResourceInternalService : PLAbstractLibraryServicesManagerService <PLAssetsdResourceInternalServiceProtocol> {
    NSString * _trustedCallerBundleID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)asynchronousMasterThumbnailForAssetUUID:(id)arg1 reply:(id /* block */)arg2;
- (void)batchSaveAssetJobs:(id)arg1 reply:(id /* block */)arg2;
- (void)cancelAllPrewarmingWithReply:(id /* block */)arg1;
- (id)initWithLibraryServicesManager:(id)arg1 trustedCallerBundleID:(id)arg2;
- (void)prewarmWithCapturePhotoSettings:(id)arg1 reply:(id /* block */)arg2;

@end
