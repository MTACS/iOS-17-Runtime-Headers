
@interface VideosUI.Router : NSObject <SKAccountPageViewControllerDelegate, VUIControllerPresenter> {
    void $__lazy_storage_$_logPrefix;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _id;
    void currentTransaction;
    void managedRoutes;
    void multipleDocumentRoute;
    void presentingRoute;
    void tabSwitchSubject;
}

- (void).cxx_destruct;
- (void)accountPageViewControllerDidFinish:(id)arg1;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (bool)dismissViewControllerWithID:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)handleAccountSettingsEventWithUrl:(id)arg1 amsBagKey:(id)arg2 useAMSWebView:(bool)arg3;
- (id)init;
- (void)presentAlertWithTitle:(id)arg1 message:(id)arg2 actions:(id)arg3 animated:(bool)arg4;
- (void)presentRouterDataSource:(id)arg1;
- (void)presentViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)presentViewController:(id)arg1 modalPresentationStyle:(long long)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;

@end
