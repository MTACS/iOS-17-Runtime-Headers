
@interface PXCMMPhotoKitDeleteActionPerformer : PXCMMActionPerformer <PXCMMPhotoKitActionPerformer>

@property (nonatomic, readonly) PXCMMPhotoKitSession *session;

- (id)localizedTitleForUseCase:(unsigned long long)arg1;
- (void)performUserInteractionTask;

@end
