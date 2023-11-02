
@interface PHPickerViewController : UIViewController <_PUPickerExtensionContextHostInterface, _PUPickerUnavailableViewControllerDelegate, _UIAppearanceRestriction, _UIRemoteViewControllerContaining> {
    NSExtension * __extension;
    PUPickerExtensionHostContext * __extensionContext;
    <NSCopying> * __extensionRequestIdentifier;
    id  __overlayStorage;
    PUPickerRemoteViewController * __remoteViewController;
    PHPickerConfiguration * _configuration;
    <PHPickerViewControllerDelegate> * _delegate;
}

@property (nonatomic, readonly) _UIRemoteViewController *_containedRemoteViewController;
@property (setter=_setExtension:, nonatomic, retain) NSExtension *_extension;
@property (setter=_setExtensionContext:, nonatomic, retain) PUPickerExtensionHostContext *_extensionContext;
@property (setter=_setExtensionRequestIdentifier:, nonatomic, copy) <NSCopying> *_extensionRequestIdentifier;
@property (setter=_setOverlayStorage:, nonatomic, retain) id _overlayStorage;
@property (setter=_setRemoteViewController:, nonatomic, retain) PUPickerRemoteViewController *_remoteViewController;
@property (nonatomic, readonly, copy) PHPickerConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PHPickerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_preventsAppearanceProxyCustomization;

- (void).cxx_destruct;
- (void)_addOrReplaceChildUnavailableViewController:(unsigned long long)arg1 error:(id)arg2;
- (void)_addOrReplaceChildViewController:(id)arg1;
- (void)_cancelExistingExtensionRequestIfPossible;
- (id)_containedRemoteViewController;
- (void)_deselectAssetsWithIdentifiers:(id)arg1;
- (id)_extension;
- (id)_extensionContext;
- (id)_extensionRequestIdentifier;
- (void)_finishPickingWithItemProviders:(id)arg1;
- (void)_handleRemoteViewControllerConnection:(id)arg1 extension:(id)arg2 extensionRequestIdentifier:(id)arg3 error:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_moveAssetWithIdentifier:(id)arg1 afterIdentifier:(id)arg2;
- (id)_overlayStorage;
- (void)_pickerDidFinishPicking:(id)arg1;
- (void)_pickerDidSetModalInPresentation:(bool)arg1;
- (void)_pickerDidSetOnboardingHeaderDismissed:(bool)arg1;
- (void)_pickerDidSetOnboardingOverlayDismissed:(bool)arg1;
- (void)_pickerUnavailableViewControllerCancelButtonTapped:(id)arg1;
- (void)_pickerUnavailableViewControllerRetryButtonTapped:(id)arg1;
- (bool)_popViewController;
- (id)_remoteViewController;
- (void)_searchWithString:(id)arg1;
- (void)_setExtension:(id)arg1;
- (void)_setExtensionContext:(id)arg1;
- (void)_setExtensionRequestIdentifier:(id)arg1;
- (void)_setOverlayStorage:(id)arg1;
- (void)_setRemoteViewController:(id)arg1;
- (void)_setup:(id /* block */)arg1;
- (void)_setupExtension:(id)arg1 error:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_startActivityIndicatorsForAssetsWithIdentifiers:(id)arg1;
- (void)_stopActivityIndicatorsForAssetsWithIdentifiers:(id)arg1;
- (void)_updateSelectedAssetsWithIdentifiers:(id)arg1;
- (id)childViewControllerForStatusBarHidden;
- (id)configuration;
- (void)dealloc;
- (id)delegate;
- (void)deselectAssetsWithIdentifiers:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)moveAssetWithIdentifier:(id)arg1 afterAssetWithIdentifier:(id)arg2;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)scrollToInitialPosition;
- (void)setDelegate:(id)arg1;
- (void)updatePickerUsingConfiguration:(id)arg1;
- (void)zoomIn;
- (void)zoomOut;

@end
