
@protocol _WKInputDelegate <NSObject>

@optional

- (void)_webView:(WKWebView *)arg1 accessoryViewCustomButtonTappedInFormInputSession:(id <_WKFormInputSession>)arg2;
- (long long)_webView:(WKWebView *)arg1 decidePolicyForFocusedElement:(id <_WKFocusedElementInfo>)arg2;
- (void)_webView:(WKWebView *)arg1 didStartInputSession:(id <_WKFormInputSession>)arg2;
- (bool)_webView:(WKWebView *)arg1 focusRequiresStrongPasswordAssistance:(id <_WKFocusedElementInfo>)arg2;
- (bool)_webView:(WKWebView *)arg1 focusShouldStartInputSession:(id <_WKFocusedElementInfo>)arg2;
- (UIView *)_webView:(WKWebView *)arg1 focusedElementContextViewForInputSession:(id <_WKFormInputSession>)arg2;
- (double)_webView:(WKWebView *)arg1 focusedElementContextViewHeightForFittingSize:(struct CGSize { double x1; double x2; })arg2 inputSession:(id <_WKFormInputSession>)arg3;
- (void)_webView:(WKWebView *)arg1 insertTextSuggestion:(UITextSuggestion *)arg2 inInputSession:(id <_WKFormInputSession>)arg3;
- (bool)_webView:(WKWebView *)arg1 shouldRevealFocusOverlayForInputSession:(id <_WKFormInputSession>)arg2;
- (void)_webView:(WKWebView *)arg1 willStartInputSession:(id <_WKFormInputSession>)arg2;
- (void)_webView:(void *)arg1 willSubmitFormValues:(void *)arg2 userObject:(void *)arg3 submissionHandler:(void *)arg4; // needs 4 arg types, found 8: WKWebView *, NSDictionary *, NSObject<NSSecureCoding> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (NSDictionary *)_webViewAdditionalContextForStrongPasswordAssistance:(WKWebView *)arg1;

@end
