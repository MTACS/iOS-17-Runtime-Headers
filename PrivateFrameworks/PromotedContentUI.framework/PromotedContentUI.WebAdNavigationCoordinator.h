
@interface PromotedContentUI.WebAdNavigationCoordinator : NSObject <WKNavigationDelegatePrivate> {
    void navigationResponder;
}

- (void).cxx_destruct;
- (void)_webView:(id)arg1 renderingProgressDidChange:(unsigned long long)arg2;
- (void)_webView:(id)arg1 webContentProcessDidTerminateWithReason:(long long)arg2;
- (id)init;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;

@end
