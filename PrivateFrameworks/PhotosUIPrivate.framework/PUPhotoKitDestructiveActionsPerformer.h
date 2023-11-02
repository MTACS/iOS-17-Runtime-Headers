
@interface PUPhotoKitDestructiveActionsPerformer : PUPhotoKitActionPerformer <PXPhotoKitDeletePhotosActionControllerDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)deletePhotosActionController:(id)arg1 dismissConfirmationViewController:(id)arg2;
- (void)deletePhotosActionController:(id)arg1 presentConfirmationViewController:(id)arg2;
- (long long)destructivePhotosAction;
- (void)performUserInteractionTask;
- (bool)shouldConfirmDestructiveAction;

@end
