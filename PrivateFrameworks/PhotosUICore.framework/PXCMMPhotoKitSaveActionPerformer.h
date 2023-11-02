
@interface PXCMMPhotoKitSaveActionPerformer : PXCMMActionPerformer <PXCMMPhotoKitActionPerformer>

@property (nonatomic, readonly) PXCMMPhotoKitSession *session;

- (id)createActionProgress;
- (bool)isCancellable;
- (void)performUserInteractionTask;

@end
