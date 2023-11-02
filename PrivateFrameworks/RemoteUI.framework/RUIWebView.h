
@interface RUIWebView : RUIElement <RUITopLevelPageElement, WKNavigationDelegate> {
    NSURL * _baseURL;
    id  _delegate;
    NSString * _html;
    WKWebView * _webView;
}

@property (nonatomic, retain) NSURL *baseURL;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *html;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_isScrollEnabled;
- (id)baseURL;
- (void)dealloc;
- (id)delegate;
- (id)html;
- (id)scriptForDisableMagnification;
- (void)setBaseURL:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHtml:(id)arg1;
- (id)sourceURL;
- (id)userStyleSheet;
- (id)view;
- (id)webView;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;

@end
