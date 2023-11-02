
@interface HealthExposureNotificationUI.WebReportViewController : UIViewController <WKNavigationDelegate, WKScriptMessageHandler> {
    void $__lazy_storage_$_webView;
    void healthAgencyModel;
    void statusView;
}

@property (nonatomic, readonly) bool shouldAutorotate;
@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;

- (void).cxx_destruct;
- (void)didTapCancel;
- (void)didTapDone;
- (id)initWithAgencyModel:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)viewDidLoad;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;

@end
