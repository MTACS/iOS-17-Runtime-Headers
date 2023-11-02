
@interface PUPhotoPickerExtensionHostContext : PUPhotoPickerAbstractExtensionContext <PUPhotoPickerHostService> {
    bool  _cachedDidDisplayPhotoPickerPreview;
    NSNumber * _cachedDidDisplayPhotoPickerSourceType;
    <PUPhotoPickerHostService> * _delegate;
    NSNumber * _photoPickerNavigationBarHidden;
    NSString * _photoPickerViewControllerPrompt;
    NSString * _photoPickerViewControllerTitle;
    NSUUID * _requestIdentifier;
}

@property (nonatomic) bool cachedDidDisplayPhotoPickerPreview;
@property (nonatomic, retain) NSNumber *cachedDidDisplayPhotoPickerSourceType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUPhotoPickerHostService> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSNumber *photoPickerNavigationBarHidden;
@property (nonatomic, copy) NSString *photoPickerViewControllerPrompt;
@property (nonatomic, copy) NSString *photoPickerViewControllerTitle;
@property (nonatomic, retain) NSUUID *requestIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_JPEGDataFromImage:(id)arg1;
- (id)_JPEGDataFromImageData:(id)arg1;
- (id)_UIImagePickerControllerInfoDictionaryFromPhotoPickerInfoDictionary:(id)arg1;
- (id)_createURLFromPath:(id)arg1 token:(id)arg2;
- (bool)_isHEIFImageFormatFromData:(id)arg1 url:(id)arg2;
- (id)_pathExtensionFromData:(id)arg1 url:(id)arg2 exportPreset:(long long)arg3;
- (id)_remote;
- (bool)cachedDidDisplayPhotoPickerPreview;
- (id)cachedDidDisplayPhotoPickerSourceType;
- (void)cancelPhotoPicker;
- (void)completeRequestReturningItems:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)delegate;
- (void)didDisplayPhotoPickerPreview;
- (void)didDisplayPhotoPickerSourceType:(id)arg1;
- (void)didSelectMediaWithInfoDictionary:(id)arg1;
- (void)didSelectMultipleMediaItemsWithInfoDictionaries:(id)arg1;
- (void)didSetOnboardingHeaderDismissed:(bool)arg1;
- (void)dismissCurrentViewControllerFromPhotoPickerAnimated:(id)arg1;
- (void)initiatePhotoPickerSelection;
- (void)invalidatePhotoPickerHostServices;
- (void)performPhotoPickerPreviewOfFirstAsset;
- (void)performTraitCollectionUpdateUsingData:(id)arg1 completion:(id /* block */)arg2;
- (id)photoPickerNavigationBarHidden;
- (id)photoPickerViewControllerPrompt;
- (id)photoPickerViewControllerTitle;
- (id)requestIdentifier;
- (void)setCachedDidDisplayPhotoPickerPreview:(bool)arg1;
- (void)setCachedDidDisplayPhotoPickerSourceType:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPhotoPickerNavigationBarHidden:(id)arg1;
- (void)setPhotoPickerViewControllerPrompt:(id)arg1;
- (void)setPhotoPickerViewControllerTitle:(id)arg1;
- (void)setRequestIdentifier:(id)arg1;

@end
