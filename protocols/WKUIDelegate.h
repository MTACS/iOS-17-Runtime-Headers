
@protocol WKUIDelegate <NSObject>

@optional

- (void)webView:(WKWebView *)arg1 commitPreviewingViewController:(UIViewController *)arg2;
- (void)webView:(void *)arg1 contextMenuConfigurationForElement:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: WKWebView *, WKContextMenuElementInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIContextMenuConfiguration *, void*
- (void)webView:(WKWebView *)arg1 contextMenuDidEndForElement:(WKContextMenuElementInfo *)arg2;
- (void)webView:(WKWebView *)arg1 contextMenuForElement:(WKContextMenuElementInfo *)arg2 willCommitWithAnimator:(id <UIContextMenuInteractionCommitAnimating>)arg3;
- (void)webView:(WKWebView *)arg1 contextMenuWillPresentForElement:(WKContextMenuElementInfo *)arg2;
- (WKWebView *)webView:(WKWebView *)arg1 createWebViewWithConfiguration:(WKWebViewConfiguration *)arg2 forNavigationAction:(WKNavigationAction *)arg3 windowFeatures:(WKWindowFeatures *)arg4;
- (UIViewController *)webView:(WKWebView *)arg1 previewingViewControllerForElement:(WKPreviewElementInfo *)arg2 defaultActions:(NSArray *)arg3;
- (void)webView:(void *)arg1 requestDeviceOrientationAndMotionPermissionForOrigin:(void *)arg2 initiatedByFrame:(void *)arg3 decisionHandler:(void *)arg4; // needs 4 arg types, found 9: WKWebView *, WKSecurityOrigin *, WKFrameInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)webView:(void *)arg1 requestMediaCapturePermissionForOrigin:(void *)arg2 initiatedByFrame:(void *)arg3 type:(void *)arg4 decisionHandler:(void *)arg5; // needs 5 arg types, found 10: WKWebView *, WKSecurityOrigin *, WKFrameInfo *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)webView:(void *)arg1 runJavaScriptAlertPanelWithMessage:(void *)arg2 initiatedByFrame:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 8: WKWebView *, NSString *, WKFrameInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)webView:(void *)arg1 runJavaScriptConfirmPanelWithMessage:(void *)arg2 initiatedByFrame:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: WKWebView *, NSString *, WKFrameInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)webView:(void *)arg1 runJavaScriptTextInputPanelWithPrompt:(void *)arg2 defaultText:(void *)arg3 initiatedByFrame:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 10: WKWebView *, NSString *, NSString *, WKFrameInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (bool)webView:(WKWebView *)arg1 shouldPreviewElement:(WKPreviewElementInfo *)arg2;
- (void)webView:(void *)arg1 showLockdownModeFirstUseMessage:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: WKWebView *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)webView:(WKWebView *)arg1 willDismissEditMenuWithAnimator:(id <UIEditMenuInteractionAnimating>)arg2;
- (void)webView:(WKWebView *)arg1 willPresentEditMenuWithAnimator:(id <UIEditMenuInteractionAnimating>)arg2;
- (void)webViewDidClose:(WKWebView *)arg1;

@end
