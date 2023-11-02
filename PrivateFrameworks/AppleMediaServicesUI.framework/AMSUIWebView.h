
@interface AMSUIWebView : AMSUICommonView <WKNavigationDelegatePrivate, WKScriptMessageHandlerWithReply, WKUIDelegate> {
    NSArray * _baseScripts;
    bool  _contentLoaded;
    AMSBinaryPromise * _contentRulesPromise;
    AMSUIWebClientContext * _context;
    AMSBinaryPromise * _currentLoadPromise;
    double  _topInset;
    WKWebView * _underlyingWebView;
}

@property (nonatomic, retain) NSArray *baseScripts;
@property (nonatomic) double bottomInset;
@property (nonatomic, readonly) bool contentLoaded;
@property (nonatomic, retain) AMSBinaryPromise *contentRulesPromise;
@property (nonatomic) AMSUIWebClientContext *context;
@property (nonatomic, retain) AMSBinaryPromise *currentLoadPromise;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) double topInset;
@property (nonatomic, readonly) WKWebView *underlyingWebView;

+ (id)_getSetCookiesForResponse:(id)arg1;

- (void).cxx_destruct;
- (void)_addScriptsToContentController:(id)arg1 additionalScripts:(id)arg2;
- (void)_finishedLoading;
- (id)_jsonLogStringWithDictionary:(id)arg1;
- (void)_openURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)_parseRequestError:(id)arg1 logKey:(id)arg2;
- (id)_prepareWithURL:(id)arg1 loadBlock:(id /* block */)arg2;
- (void)_receiveJSObject:(id)arg1 logKey:(id)arg2 replyHandler:(id /* block */)arg3;
- (id)_setupContentRulesForWebView:(id)arg1 context:(id)arg2;
- (void)_webView:(id)arg1 contentRuleListWithIdentifier:(id)arg2 performedAction:(id)arg3 forURL:(id)arg4;
- (void)_webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 userInfo:(id)arg4;
- (void)_webView:(id)arg1 navigation:(id)arg2 didFailProvisionalLoadInSubframe:(id)arg3 withError:(id)arg4;
- (void)_webView:(id)arg1 navigation:(id)arg2 didSameDocumentNavigation:(long long)arg3;
- (void)_webView:(id)arg1 navigationDidFinishDocumentLoad:(id)arg2;
- (id)baseScripts;
- (double)bottomInset;
- (bool)contentLoaded;
- (id)contentRulesPromise;
- (id)context;
- (id)currentLoadPromise;
- (void)dealloc;
- (id)initWithContext:(id)arg1 additionalScripts:(id)arg2;
- (void)layoutSubviews;
- (id)loadRequest:(id)arg1;
- (id)loadRequest:(id)arg1 response:(id)arg2 responseData:(id)arg3;
- (id)sendJSRequest:(id)arg1;
- (void)setBaseScripts:(id)arg1;
- (void)setBottomInset:(double)arg1;
- (void)setContentRulesPromise:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setCurrentLoadPromise:(id)arg1;
- (void)setTopInset:(double)arg1;
- (void)takeSnapshotWithCompletion:(id /* block */)arg1;
- (double)topInset;
- (id)underlyingWebView;
- (void)updateUserScriptsWithScripts:(id)arg1;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2 replyHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;

@end
