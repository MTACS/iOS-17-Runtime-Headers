
@interface PXPhotoKitAssetCollectionActionPerformer : PXAssetCollectionActionPerformer <PXAssetsSharingHelperDelegate, PXPhotoKitAssetCollectionActionPerformerInput, PXPhotoStreamComposeServiceDelegate, PXVideoTrimQueueControllerDelegate> {
    PXPhotoStreamComposeServiceViewController * _composeServiceController;
    NSURL * _exportCopyDirectoryParent;
    UIAction * _sendingAction;
    PXVideoTrimQueueController * _trimController;
}

@property (nonatomic, readonly) PXAssetsDataSource *assetsDataSource;
@property (nonatomic, readonly) PHFetchResult *assetsFetchResult;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <UIDragSession> *dragSession;
@property (nonatomic, readonly) <UIDropSession> *dropSession;
@property (nonatomic, readonly) PXAssetReference *dropTargetAssetReference;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <PXMemoryAssetsActionFactory> *memoryAssetsActionFactory;
@property (nonatomic, readonly) PHFetchResult *people;
@property (nonatomic, retain) UIAction *sendingAction;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <UITraitEnvironment> *traitEnvironment;

+ (bool)canPerformActionType:(id)arg1 onAssetCollectionReference:(id)arg2 withInputs:(id)arg3;
+ (bool)canPerformOnAssetCollectionReference:(id)arg1 withInputs:(id)arg2;
+ (id)createActivityWithTitle:(id)arg1 actionType:(id)arg2 actionSystemImageName:(id)arg3;
+ (id)createBarButtonItemForAssetCollectionReference:(id)arg1 withTarget:(id)arg2 action:(SEL)arg3;
+ (id)createStandardActionForAssetCollectionReference:(id)arg1 withInput:(id)arg2 handler:(id /* block */)arg3;
+ (bool)isActionDestructive;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 assetCollectionReference:(id)arg2 withInputs:(id)arg3;
+ (id)systemImageNameForAssetCollectionReference:(id)arg1 withInputs:(id)arg2;

- (void).cxx_destruct;
- (void)_cleanupTemporaryFiles;
- (id)_confirmationAlertTitleForBlacklistingAction:(id)arg1 viewSpec:(id)arg2;
- (id)_createAndConfigurePhotoStreamComposeServiceViewControllerWithAlbumTitle:(id)arg1;
- (void)_promptBlacklistingConfirmatonForUserAction:(id)arg1 viewSpec:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)assetsSharingHelper:(id)arg1 dismissViewController:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)assetsSharingHelper:(id)arg1 presentViewController:(id)arg2;
- (void)controller:(id)arg1 didCancelTrimmingVideoSources:(id)arg2;
- (void)controller:(id)arg1 didFinishTrimmingVideoSources:(id)arg2;
- (void)controller:(id)arg1 dismissViewControllerWithCompletion:(id /* block */)arg2;
- (void)controller:(id)arg1 presentViewController:(id)arg2;
- (void)handleAddToCloudSharedAlbum:(id)arg1 pickedAssets:(id)arg2;
- (id)localizedTitleForUseCase:(unsigned long long)arg1;
- (void)photoStreamComposeService:(id)arg1 didPostComment:(id)arg2;
- (void)photoStreamComposeServiceDidCancel:(id)arg1;
- (id)sendingAction;
- (void)setSendingAction:(id)arg1;

@end
