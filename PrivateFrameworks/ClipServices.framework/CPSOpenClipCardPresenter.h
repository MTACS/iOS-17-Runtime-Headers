
@interface CPSOpenClipCardPresenter : NSObject <SBSRemoteAlertHandleObserver> {
    SBSRemoteAlertHandle * _alertHandle;
    NSObject<OS_dispatch_queue> * _queue;
    SFClient * _sharingClient;
    id /* block */  _stagedLocationConfirmationDisplay;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)responseForOpenClipAction:(bool)arg1;
+ (id)sharedPresenter;

- (void).cxx_destruct;
- (void)_activateAlertHandleWithSettings:(id)arg1 viewControllerClassName:(id)arg2 repsonseHandler:(id /* block */)arg3;
- (void)_activateAlertHandleWithURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_invalidateSharingClient;
- (void)_performStagedLocationConfirmationDisplayIfNeeded;
- (void)_sharingClientDidInvalidate;
- (void)_showCardWithOptions:(unsigned long long)arg1 activationHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;
- (void)remoteAlertHandleDidDeactivate:(id)arg1;
- (void)showCardWithURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)showLocationConfirmationSheetWithRequest:(id)arg1 completion:(id /* block */)arg2;

@end
