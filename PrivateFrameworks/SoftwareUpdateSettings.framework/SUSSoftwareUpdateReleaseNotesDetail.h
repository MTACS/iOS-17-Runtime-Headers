
@interface SUSSoftwareUpdateReleaseNotesDetail : PSListController <WKNavigationDelegate> {
    NSString * _releaseNotes;
    WKWebView * _webView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *releaseNotes;
@property (readonly) Class superclass;
@property (nonatomic, retain) WKWebView *webView;

- (void).cxx_destruct;
- (id)init;
- (id)releaseNotes;
- (void)setReleaseNotes:(id)arg1;
- (void)setWebView:(id)arg1;
- (id)specifiers;
- (void)viewDidLoad;
- (id)webView;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;

@end
