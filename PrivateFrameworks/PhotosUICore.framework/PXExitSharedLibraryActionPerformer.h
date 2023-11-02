
@interface PXExitSharedLibraryActionPerformer : PXActionPerformer <PXSharedLibraryExitAssistantViewControllerDelegate> {
    long long  _exitRetentionPolicy;
    <PXSharedLibrary> * _sharedLibraryOrPreview;
    bool  _shouldConfirmExit;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long exitRetentionPolicy;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <PXSharedLibrary> *sharedLibraryOrPreview;
@property (nonatomic) bool shouldConfirmExit;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginExitWithExitAssistantViewController:(id)arg1 dismissalHandler:(id /* block */)arg2;
- (void)_handlePresentationErrorWithDismissalHandler:(id /* block */)arg1;
- (void)_performExitWithExitAssistantViewController:(id)arg1 dismissalHandler:(id /* block */)arg2;
- (void)_presentFailureAlertForSharedLibraryOrPreview:(id)arg1 error:(id)arg2 dismissalHandler:(id /* block */)arg3;
- (void)cancelExitAssistantViewController:(id)arg1;
- (void)completeExitAssistantViewController:(id)arg1 withExitRetentionPolicy:(long long)arg2;
- (long long)exitRetentionPolicy;
- (id)init;
- (void)performActionWithSharedLibraryOrPreview:(id)arg1 shouldConfirmExit:(bool)arg2 exitRetentionPolicy:(long long)arg3 presentationEnvironment:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)performUserInteractionTask;
- (void)setExitRetentionPolicy:(long long)arg1;
- (void)setSharedLibraryOrPreview:(id)arg1;
- (void)setShouldConfirmExit:(bool)arg1;
- (id)sharedLibraryOrPreview;
- (bool)shouldConfirmExit;

@end
