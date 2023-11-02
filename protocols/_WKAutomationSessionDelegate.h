
@protocol _WKAutomationSessionDelegate <NSObject>

@optional

- (void)_automationSession:(_WKAutomationSession *)arg1 acceptCurrentJavaScriptDialogForWebView:(WKWebView *)arg2;
- (long long)_automationSession:(_WKAutomationSession *)arg1 currentPresentationForWebView:(WKWebView *)arg2;
- (void)_automationSession:(_WKAutomationSession *)arg1 dismissCurrentJavaScriptDialogForWebView:(WKWebView *)arg2;
- (bool)_automationSession:(_WKAutomationSession *)arg1 isShowingJavaScriptDialogForWebView:(WKWebView *)arg2;
- (NSString *)_automationSession:(_WKAutomationSession *)arg1 messageOfCurrentJavaScriptDialogForWebView:(WKWebView *)arg2;
- (void)_automationSession:(void *)arg1 requestHideWindowOfWebView:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: _WKAutomationSession *, WKWebView *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)_automationSession:(void *)arg1 requestMaximizeWindowOfWebView:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: _WKAutomationSession *, WKWebView *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)_automationSession:(void *)arg1 requestNewWebViewWithOptions:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: _WKAutomationSession *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WKWebView *, void*
- (void)_automationSession:(void *)arg1 requestRestoreWindowOfWebView:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: _WKAutomationSession *, WKWebView *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)_automationSession:(void *)arg1 requestSwitchToWebView:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: _WKAutomationSession *, WKWebView *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)_automationSession:(_WKAutomationSession *)arg1 setUserInput:(NSString *)arg2 forCurrentJavaScriptDialogForWebView:(WKWebView *)arg3;
- (long long)_automationSession:(_WKAutomationSession *)arg1 typeOfCurrentJavaScriptDialogForWebView:(WKWebView *)arg2;
- (void)_automationSessionDidDisconnectFromRemote:(_WKAutomationSession *)arg1;

@end
