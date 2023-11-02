
@interface PHAssetCreationRequestPlaceholderSupport : PHAssetCreationRequest {
    NSXPCConnection * _clientConnection;
    bool  _downloadSourceMode_shouldBakeInAdjustments;
    bool  _downloadSourceMode_shouldCopyLocationData;
    bool  _downloadSourceMode_shouldFlattenLivePhoto;
    long long  _placeholderCreationMode;
    PLClientServerTransaction * _serverTransaction;
}

@property (nonatomic, readonly) NSXPCConnection *clientConnection;

- (void).cxx_destruct;
- (unsigned short)_bundleScopeForPlaceholderAsset;
- (id)_createPlaceholderManagedAssetFromSourceManagedAsset:(id)arg1 inPhotoLibrary:(id)arg2 error:(id*)arg3;
- (id)_fetchOptionsForDuplicateAssetPhotoLibraryType:(id)arg1;
- (bool)_regenerateResourcesWithLocationDataRemoved:(id)arg1 sourceExternalResources:(id)arg2 photoLibrary:(id)arg3 error:(id*)arg4;
- (void)_updateManagedAssetAfterResourceDownload:(id)arg1;
- (void)changeFailedOnClientWithLibrary:(id)arg1 error:(id)arg2;
- (void)changeFailedOnDaemonWithLibrary:(id)arg1 error:(id)arg2;
- (id)clientConnection;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
- (id)initForNewObjectWithUUID:(id)arg1;
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;
- (void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1;
- (bool)validateInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;

@end
