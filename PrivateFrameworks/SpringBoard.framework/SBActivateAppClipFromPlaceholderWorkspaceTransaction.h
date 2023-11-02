
@interface SBActivateAppClipFromPlaceholderWorkspaceTransaction : SBAppToAppWorkspaceTransaction <BSTransactionObserver> {
    SBRotateScenesWorkspaceTransaction * _rotateScenesTransaction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_begin;
- (unsigned long long)_concurrentOverlayDismissalOptions;
- (unsigned long long)_serialOverlayPreDismissalOptions;
- (void)transactionDidComplete:(id)arg1;

@end
