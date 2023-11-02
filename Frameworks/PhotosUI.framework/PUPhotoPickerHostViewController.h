
@interface PUPhotoPickerHostViewController : _UIRemoteViewController <PUPhotoPickerHostExtensionProvider, PUPhotoPickerTestSupportHandler> {
    bool  __invalidated;
    <PUPhotoPickerHostViewControllerDelegate> * _delegate;
    NSExtensionContext * _hostExtensionContext;
}

@property (getter=_isInvalidated, nonatomic) bool _invalidated;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUPhotoPickerHostViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSExtensionContext *hostExtensionContext;
@property (nonatomic, readonly) <PUPhotoPickerHostService> *hostProxy;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_hostContext;
- (bool)_isInvalidated;
- (id)delegate;
- (id)hostExtensionContext;
- (id)hostProxy;
- (void)invalidate;
- (void)performPhotoPickerPreviewOfFirstAsset;
- (void)performTraitCollectionUpdateWithCompletion:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHostExtensionContext:(id)arg1;
- (void)set_invalidated:(bool)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;

@end
