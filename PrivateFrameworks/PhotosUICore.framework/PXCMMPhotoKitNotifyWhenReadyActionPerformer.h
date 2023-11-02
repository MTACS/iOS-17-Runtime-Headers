
@interface PXCMMPhotoKitNotifyWhenReadyActionPerformer : PXCMMActionPerformer <PXCMMPhotoKitActionPerformer>

@property (nonatomic, readonly) PXCMMPhotoKitSession *session;

- (void)performBackgroundTask;

@end
