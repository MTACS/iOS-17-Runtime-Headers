
@interface AMSUIWebSafariWebView : WKWebView <WKScriptMessageHandlerWithReply, WKURLSchemeHandler> {
    NSString * _logKey;
    <WKNavigationDelegate><WKScriptMessageHandlerWithReply><WKURLSchemeHandler><AMSUIWebSafariWebDelegate> * _safariDelegate;
    NSString * _scheme;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) NSString *logKey;
@property (nonatomic) <WKNavigationDelegate><WKScriptMessageHandlerWithReply><WKURLSchemeHandler><AMSUIWebSafariWebDelegate> *safariDelegate;
@property (nonatomic) NSString *scheme;
@property (readonly) Class superclass;
@property (nonatomic) double topInset;

+ (id)_createContentControllerWithScheme:(id)arg1 data:(id)arg2 messageHandler:(id)arg3;

- (void).cxx_destruct;
- (id)initWithAppearance:(id)arg1 scheme:(id)arg2 data:(id)arg3 delegate:(id)arg4;
- (id)logKey;
- (id)safariDelegate;
- (id)scheme;
- (void)setLogKey:(id)arg1;
- (void)setSafariDelegate:(id)arg1;
- (void)setScheme:(id)arg1;
- (void)setTopInset:(double)arg1;
- (double)topInset;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2 replyHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 startURLSchemeTask:(id)arg2;
- (void)webView:(id)arg1 stopURLSchemeTask:(id)arg2;

@end
