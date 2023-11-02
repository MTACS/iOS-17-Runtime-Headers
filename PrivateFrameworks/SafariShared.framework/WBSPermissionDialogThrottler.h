
@interface WBSPermissionDialogThrottler : NSObject {
    bool  _callingPresentationHandler;
    long long  _denyCount;
    bool  _invalidated;
    bool  _isShowingDialog;
    NSMutableArray * _requestedPresentations;
}

- (void).cxx_destruct;
- (void)_callNextPresentationHandlerIfNeeded;
- (bool)_canShowPermissionDialog;
- (void)didCompletePermissionDialog:(bool)arg1;
- (id)init;
- (void)invalidate;
- (void)requestPermissionDialogPresentation:(id /* block */)arg1;
- (void)willPerformUserInitiatedNavigation;

@end
