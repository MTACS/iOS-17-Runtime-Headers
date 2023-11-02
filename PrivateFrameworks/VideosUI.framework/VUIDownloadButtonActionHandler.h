
@interface VUIDownloadButtonActionHandler : NSObject {
    id /* block */  _acknowledgementDownloadCancelledBlock;
    id /* block */  _acknowledgementDownloadDeletedBlock;
    VUIAlertController * _deleteConfirmationAlertController;
    UIView * _parentView;
    UIViewController * _presentingViewController;
    VUIDownloadButtonViewModel * _viewModel;
}

@property (nonatomic, copy) id /* block */ acknowledgementDownloadCancelledBlock;
@property (nonatomic, copy) id /* block */ acknowledgementDownloadDeletedBlock;
@property (nonatomic, retain) VUIAlertController *deleteConfirmationAlertController;
@property (nonatomic) UIView *parentView;
@property (nonatomic) UIViewController *presentingViewController;
@property (nonatomic, readonly) VUIDownloadButtonViewModel *viewModel;

- (void).cxx_destruct;
- (void)_askUserAndDeleteIfNeeded;
- (void)_checkForAccountSignInWithCompletionHandler:(id /* block */)arg1;
- (void)_dismissConfirmationAlertController;
- (void)_handleAppDidEnterBackgroundNotification:(id)arg1;
- (id)_localize:(id)arg1 token:(id)arg2 value:(id)arg3;
- (id)_renewalAlertAction;
- (bool)_shouldShowRenewalOption;
- (void)_showDownloadingInfoDialog;
- (void)_startDownloadIfPossibleRemovingFromUIOnCancellationOrFailure:(bool)arg1 preferEnhancedDownload:(bool)arg2;
- (id /* block */)acknowledgementDownloadCancelledBlock;
- (id /* block */)acknowledgementDownloadDeletedBlock;
- (id)deleteConfirmationAlertController;
- (bool)ignoreDownloadActionIfInRetailDemoMode;
- (id)initWithViewModel:(id)arg1;
- (id)parentView;
- (void)performAction:(bool)arg1 confirmBeforeStopDownloading:(bool)arg2;
- (void)performAction:(bool)arg1 confirmBeforeStopDownloading:(bool)arg2 preferEnhancedDownload:(bool)arg3;
- (id)presentingViewController;
- (void)setAcknowledgementDownloadCancelledBlock:(id /* block */)arg1;
- (void)setAcknowledgementDownloadDeletedBlock:(id /* block */)arg1;
- (void)setDeleteConfirmationAlertController:(id)arg1;
- (void)setParentView:(id)arg1;
- (void)setPresentingViewController:(id)arg1;
- (id)topPresentedViewController;
- (id)viewModel;

@end
