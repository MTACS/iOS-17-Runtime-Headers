
@interface PXCMMPhotoKitPublishMomentShareActionPerformer : PXCMMPublishActionPerformer {
    NSDate * _creationRequestStartDate;
    bool  _didFinalize;
    NSDate * _finishedDate;
    NSDate * _initialStartDate;
    PHMomentShare * _momentShare;
    int  _previewRequestID;
    NSDate * _previewRequestStartDate;
    <NSObject> * _progressAlertToken;
    NSDate * _publishStartDate;
    int  _thumbnailRequestID;
}

+ (void)budgetOverridePromptAlertKeysForConfiguration:(id)arg1 messageKey:(id*)arg2 actionKey:(id*)arg3;

- (void).cxx_destruct;
- (void)_acceptSuggestion:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_budgetOverridePromptForMomentShare:(id)arg1 completedWithOutcome:(bool)arg2 error:(id)arg3;
- (void)_createMomentShare;
- (void)_createMomentShareWithCompletionHandler:(id /* block */)arg1;
- (void)_creatingMomentShareDidCompleteWithMomentShare:(id)arg1 error:(id)arg2;
- (void)_finalizePublishWithSuccess:(bool)arg1 error:(id)arg2;
- (void)_handleSharingProgressCancellation;
- (void)_performCleanupIfNeeded;
- (void)_presentAlertControllerForCurrentCPLStateIfNeededWithCompletionHandler:(id /* block */)arg1;
- (void)_presentBudgetOverridePromptForMomentShare:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_presentInternalSharingAlert;
- (void)_presentSharingProgressAlertController;
- (void)_publishMomentShare:(id)arg1;
- (void)_publishMomentShare:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_publishingMomentShare:(id)arg1 didCompleteWithShareURL:(id)arg2 error:(id)arg3;
- (void)_requestPreviewImageForAsset:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)performUserInteractionTask;

@end
