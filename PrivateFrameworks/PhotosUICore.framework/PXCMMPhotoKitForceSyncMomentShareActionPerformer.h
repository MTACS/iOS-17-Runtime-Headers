
@interface PXCMMPhotoKitForceSyncMomentShareActionPerformer : PXCMMActionPerformer <PXCMMPhotoKitActionPerformer>

@property (nonatomic, readonly) PXCMMPhotoKitSession *session;

- (bool)canPerformActionWithSession:(id)arg1;
- (void)performBackgroundTask;

@end
