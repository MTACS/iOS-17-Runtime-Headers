
@interface WFWKWebViewCapturer : NSObject <WKNavigationDelegate> {
    WFCoercionOptions * _coercionOptions;
    id /* block */  _completionHandler;
    bool  _didAttemptToLoadRemoteResources;
    bool  _didPresentSmartPrompt;
    WKNavigation * _pageNavigation;
    bool  _userDidAllowLoadingExternalResources;
    WFWebResource * _webResource;
    WKWebView * _webView;
}

@property (nonatomic, retain) WFCoercionOptions *coercionOptions;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool didAttemptToLoadRemoteResources;
@property bool didPresentSmartPrompt;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WKNavigation *pageNavigation;
@property (readonly) Class superclass;
@property bool userDidAllowLoadingExternalResources;
@property (nonatomic, retain) WFWebResource *webResource;
@property (nonatomic, retain) WKWebView *webView;

+ (id)deniedExternalResourcesLoadError;
+ (void)loadWebResource:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2 configuration:(id)arg3 coercionOptions:(id)arg4 completionHandler:(id /* block */)arg5;

- (void).cxx_destruct;
- (void)_webView:(id)arg1 contentRuleListWithIdentifier:(id)arg2 performedAction:(id)arg3 forURL:(id)arg4;
- (id)coercionOptions;
- (id /* block */)completionHandler;
- (bool)didAttemptToLoadRemoteResources;
- (bool)didPresentSmartPrompt;
- (id)errorWithErrorCode:(long long)arg1;
- (void)generateBlockingContentRuleListWithCompletionHandler:(id /* block */)arg1;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 configuration:(id)arg2 coercionOptions:(id)arg3;
- (void)loadWebResource:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)pageNavigation;
- (void)setCoercionOptions:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDidAttemptToLoadRemoteResources:(bool)arg1;
- (void)setDidPresentSmartPrompt:(bool)arg1;
- (void)setPageNavigation:(id)arg1;
- (void)setUserDidAllowLoadingExternalResources:(bool)arg1;
- (void)setWebResource:(id)arg1;
- (void)setWebView:(id)arg1;
- (bool)userDidAllowLoadingExternalResources;
- (id)webResource;
- (id)webView;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;

@end
