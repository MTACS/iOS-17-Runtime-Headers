
@interface PUPhotoPickerExtensionContext : PUPhotoPickerAbstractExtensionContext <PUPhotoPickerHostService, PUPhotoPickerRemoteService> {
    NSOperationQueue * _multipleMediaConversionConcurrentQueue;
    NSObject<OS_dispatch_queue> * _multipleMediaIsolationQueue;
    NSString * _temporaryDirectoryInHost;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSOperationQueue *multipleMediaConversionConcurrentQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *multipleMediaIsolationQueue;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *temporaryDirectoryInHost;

+ (void)configureImageManagerLimit;

- (void).cxx_destruct;
- (void)_createPhotoPickerInfoDictionaryFromInfoDictionary:(id)arg1 appendTo:(id)arg2 completion:(id /* block */)arg3;
- (id)_createSandboxTokenForPath:(id)arg1;
- (id)_createSandboxTokenForURL:(id)arg1;
- (void)_handleLivePhotoImageUrlFetch:(id)arg1 appendTo:(id)arg2 completion:(id /* block */)arg3;
- (void)_handleLivePhotoVideoUrlFetch:(id)arg1 appendTo:(id)arg2 completion:(id /* block */)arg3;
- (void)_handleMutlipleMediaCompletion:(id)arg1;
- (id)_host;
- (void)_photoPickerInfoDictionaryFromUIImagePickerControllerInfoDictionary:(id)arg1 completion:(id /* block */)arg2;
- (void)_saveImageURLForLivePhoto:(id)arg1 fileURL:(id)arg2 appendTo:(id)arg3 completion:(id /* block */)arg4;
- (void)_saveVideoURLForLivePhoto:(id)arg1 fileURL:(id)arg2 appendTo:(id)arg3 completion:(id /* block */)arg4;
- (void)cancelPhotoPicker;
- (void)didDisplayPhotoPickerPreview;
- (void)didDisplayPhotoPickerSourceType:(id)arg1;
- (void)didSelectMediaWithInfoDictionary:(id)arg1;
- (void)didSelectMultipleMediaItemsWithInfoDictionaries:(id)arg1;
- (void)didSetOnboardingHeaderDismissed:(bool)arg1;
- (void)dismissCurrentViewControllerFromPhotoPickerAnimated:(id)arg1;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;
- (void)initiatePhotoPickerSelection;
- (void)invalidatePhotoPickerHostServices;
- (void)invalidatePhotoPickerRemoteServices;
- (id)multipleMediaConversionConcurrentQueue;
- (id)multipleMediaIsolationQueue;
- (void)performPhotoPickerPreviewOfFirstAsset;
- (void)performTraitCollectionUpdateUsingData:(id)arg1 completion:(id /* block */)arg2;
- (void)requestedViewControllerOptionsWithCompletionHandler:(id /* block */)arg1;
- (void)setTemporaryDirectoryInHost:(id)arg1;
- (id)temporaryDirectoryInHost;

@end
