
@interface PXCMMPhotoKitCleanupActionPerformer : PXCMMActionPerformer <PXCMMPhotoKitActionPerformer>

@property (nonatomic, readonly) PXCMMPhotoKitSession *session;

- (void)_activateSuggestion:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)performBackgroundTask;

@end
