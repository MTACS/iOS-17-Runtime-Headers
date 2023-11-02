
@interface PXPhotoKitAssetCollectionSharedAlbumOptionsActionPerformer : PXPhotoKitAssetCollectionActionPerformer <PXAlbumStreamingOptionsViewControllerDelegate, UIPopoverPresentationControllerDelegate> {
    PXAlbumStreamingOptionsViewController * _presentedOptionsController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)canPerformOnAssetCollectionReference:(id)arg1 withInputs:(id)arg2;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 assetCollectionReference:(id)arg2 withInputs:(id)arg3;
+ (id)systemImageNameForAssetCollectionReference:(id)arg1 withInputs:(id)arg2;

- (void).cxx_destruct;
- (bool)_shouldDismissOptionsForReason:(int)arg1;
- (void)albumStreamingOptionsViewController:(id)arg1 didCompleteWithReason:(int)arg2;
- (void)performUserInteractionTask;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)presentationController:(id)arg1 willPresentWithAdaptiveStyle:(long long)arg2 transitionCoordinator:(id)arg3;

@end
