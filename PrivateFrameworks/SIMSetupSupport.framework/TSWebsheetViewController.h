
@interface TSWebsheetViewController : SSUIViewController <SFFormAutoFillControllerDelegate, TSSetupFlowItem, UIScrollViewDelegate, WKNavigationDelegate, WKScriptMessageHandler, WKUIDelegate, _WKInputDelegate> {
    _SFFormAutoFillController * _autoFillController;
    <TSEntitlementJSHandlerDelegate> * _callbackDelegate;
    UIBarButtonItem * _cancelButton;
    NSString * _currentTitle;
    <TSSIMSetupFlowDelegate> * _delegate;
    bool  _didFinishDocumentLoad;
    bool  _didFirstLayout;
    bool  _didReceivePurchaseCallback;
    bool  _didViewAppear;
    long long  _dismissCause;
    bool  _isRemotePlan;
    TSCellularSetupLoadingView * _loadingView;
    id /* block */  _requestLoadedCompletion;
    UIViewController * _viewController;
    WKWebView * _webView;
    WKUserContentController * _wkUserContentController;
}

@property <TSEntitlementJSHandlerDelegate> *callbackDelegate;
@property (readonly, copy) NSString *debugDescription;
@property <TSSIMSetupFlowDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long dismissCause;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_currentLanguageIsRTL;
- (void)_doneButtonTapped;
- (void)_handlePlanPurchaseWithMessageBody:(id)arg1;
- (void)_handleTransferWithMessageBody:(id)arg1;
- (bool)_isHexadecimalString:(id)arg1;
- (bool)_isProfilePendingRelease:(id)arg1;
- (id)_processPool;
- (bool)_shouldIgnoreWebviewError:(id)arg1;
- (void)_showCancelButton:(bool)arg1;
- (void)_showVerifyingIndicator:(bool)arg1;
- (void)_transferESimInstallationStarted;
- (void)_webView:(id)arg1 accessoryViewCustomButtonTappedInFormInputSession:(id)arg2;
- (void)_webView:(id)arg1 insertTextSuggestion:(id)arg2 inInputSession:(id)arg3;
- (void)_webView:(id)arg1 navigationDidFinishDocumentLoad:(id)arg2;
- (void)_webView:(id)arg1 renderingProgressDidChange:(unsigned long long)arg2;
- (void)_webView:(id)arg1 willStartInputSession:(id)arg2;
- (void)_webView:(id)arg1 willSubmitFormValues:(id)arg2 userObject:(id)arg3 submissionHandler:(id /* block */)arg4;
- (id)_webViewConfigurationWithProcessPool:(id)arg1;
- (id)callbackDelegate;
- (id)delegate;
- (long long)dismissCause;
- (bool)formAutoFillControllerCanPrefillForm:(id)arg1;
- (bool)formAutoFillControllerShouldDisableAutoFill:(id)arg1;
- (id)formAutoFillControllerURLForFormAutoFill:(id)arg1;
- (id)initForRemotePlan:(bool)arg1 carrierName:(id)arg2;
- (id)initForRemotePlan:(bool)arg1 carrierName:(id)arg2 viewController:(id)arg3;
- (void)loadRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)loadView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)sendRequest:(id)arg1;
- (void)setCallbackDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDismissCause:(long long)arg1;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;

@end
