
@interface PXPhotosGridSharedAlbumOptionsActionPerformer : PXPhotosGridActionPerformer <PXAlbumStreamingOptionsViewControllerDelegate, UIPopoverPresentationControllerDelegate> {
    PXAlbumStreamingOptionsViewController * _presentedOptionsController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)canPerformActionType:(id)arg1 withViewModel:(id)arg2;

- (void).cxx_destruct;
- (bool)_shouldDismissOptionsForReason:(int)arg1;
- (bool)_shouldRequestGridDismissalForReason:(int)arg1;
- (id)activitySystemImageName;
- (id)activityType;
- (void)albumStreamingOptionsViewController:(id)arg1 didCompleteWithReason:(int)arg2;
- (id)localizedTitleForUseCase:(unsigned long long)arg1;
- (void)performUserInteractionTask;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)presentationController:(id)arg1 willPresentWithAdaptiveStyle:(long long)arg2 transitionCoordinator:(id)arg3;

@end
