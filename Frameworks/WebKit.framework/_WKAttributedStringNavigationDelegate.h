
@interface _WKAttributedStringNavigationDelegate : NSObject <WKNavigationDelegate> {
    id /* block */  _decidePolicyForNavigationAction;
    id /* block */  _didFailNavigation;
    id /* block */  _didFailProvisionalNavigation;
    id /* block */  _didFinishNavigation;
    id /* block */  _webContentProcessDidTerminate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) id /* block */ decidePolicyForNavigationAction;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ didFailNavigation;
@property (nonatomic, copy) id /* block */ didFailProvisionalNavigation;
@property (nonatomic, copy) id /* block */ didFinishNavigation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ webContentProcessDidTerminate;

- (void)dealloc;
- (id /* block */)decidePolicyForNavigationAction;
- (id /* block */)didFailNavigation;
- (id /* block */)didFailProvisionalNavigation;
- (id /* block */)didFinishNavigation;
- (void)setDecidePolicyForNavigationAction:(id /* block */)arg1;
- (void)setDidFailNavigation:(id /* block */)arg1;
- (void)setDidFailProvisionalNavigation:(id /* block */)arg1;
- (void)setDidFinishNavigation:(id /* block */)arg1;
- (void)setWebContentProcessDidTerminate:(id /* block */)arg1;
- (id /* block */)webContentProcessDidTerminate;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;

@end
