
@protocol WKNavigationDelegatePrivate <WKNavigationDelegate>

@optional

- (NSData *)_webCryptoMasterKeyForWebView:(WKWebView *)arg1;
- (void)_webView:(WKWebView *)arg1 URL:(NSURL *)arg2 contentRuleListIdentifiers:(NSArray *)arg3 notifications:(NSArray *)arg4;
- (void)_webView:(void *)arg1 authenticationChallenge:(void *)arg2 shouldAllowLegacyTLS:(void *)arg3; // needs 3 arg types, found 8: WKWebView *, NSURLAuthenticationChallenge *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)_webView:(WKWebView *)arg1 contentRuleListWithIdentifier:(NSString *)arg2 performedAction:(_WKContentRuleListAction *)arg3 forURL:(NSURL *)arg4;
- (void)_webView:(WKWebView *)arg1 contextMenuDidCreateDownload:(WKDownload *)arg2;
- (void)_webView:(void *)arg1 decidePolicyForNavigationAction:(void *)arg2 preferences:(void *)arg3 userInfo:(void *)arg4 decisionHandler:(void *)arg5; // needs 5 arg types, found 11: WKWebView *, WKNavigationAction *, WKWebpagePreferences *, <NSSecureCoding> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, WKWebpagePreferences *, void*
- (void)_webView:(void *)arg1 decidePolicyForSOAuthorizationLoadWithCurrentPolicy:(void *)arg2 forExtension:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: WKWebView *, long long, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)_webView:(WKWebView *)arg1 didChangeLookalikeCharactersFromURL:(NSURL *)arg2 toURL:(NSURL *)arg3;
- (void)_webView:(WKWebView *)arg1 didCommitLoadWithRequest:(NSURLRequest *)arg2 inFrame:(WKFrameInfo *)arg3;
- (void)_webView:(WKWebView *)arg1 didFailLoadDueToNetworkConnectionIntegrityWithURL:(NSURL *)arg2;
- (void)_webView:(WKWebView *)arg1 didFailLoadWithRequest:(NSURLRequest *)arg2 inFrame:(WKFrameInfo *)arg3 withError:(NSError *)arg4;
- (void)_webView:(WKWebView *)arg1 didFailNavigation:(WKNavigation *)arg2 withError:(NSError *)arg3 userInfo:(id <NSSecureCoding>)arg4;
- (void)_webView:(WKWebView *)arg1 didFailProvisionalLoadWithRequest:(NSURLRequest *)arg2 inFrame:(WKFrameInfo *)arg3 withError:(NSError *)arg4;
- (void)_webView:(WKWebView *)arg1 didFinishLoadForQuickLookDocumentInMainFrame:(NSData *)arg2;
- (void)_webView:(WKWebView *)arg1 didFinishLoadWithRequest:(NSURLRequest *)arg2 inFrame:(WKFrameInfo *)arg3;
- (void)_webView:(WKWebView *)arg1 didNegotiateModernTLSForURL:(NSURL *)arg2;
- (void)_webView:(WKWebView *)arg1 didPerformClientRedirectFromURL:(NSURL *)arg2 toURL:(NSURL *)arg3;
- (void)_webView:(WKWebView *)arg1 didStartLoadForQuickLookDocumentInMainFrameWithFileName:(NSString *)arg2 uti:(NSString *)arg3;
- (void)_webView:(WKWebView *)arg1 didStartProvisionalLoadWithRequest:(NSURLRequest *)arg2 inFrame:(WKFrameInfo *)arg3;
- (void)_webView:(WKWebView *)arg1 navigation:(WKNavigation *)arg2 didFailProvisionalLoadInSubframe:(WKFrameInfo *)arg3 withError:(NSError *)arg4;
- (void)_webView:(WKWebView *)arg1 navigation:(WKNavigation *)arg2 didSameDocumentNavigation:(long long)arg3;
- (void)_webView:(WKWebView *)arg1 navigationDidFinishDocumentLoad:(WKNavigation *)arg2;
- (void)_webView:(WKWebView *)arg1 renderingProgressDidChange:(unsigned long long)arg2;
- (void)_webView:(WKWebView *)arg1 webContentProcessDidTerminateWithReason:(long long)arg2;
- (void)_webView:(WKWebView *)arg1 willGoToBackForwardListItem:(WKBackForwardListItem *)arg2 inPageCache:(bool)arg3;
- (void)_webView:(WKWebView *)arg1 willPerformClientRedirectToURL:(NSURL *)arg2 delay:(double)arg3;
- (void)_webView:(WKWebView *)arg1 willSnapshotBackForwardListItem:(WKBackForwardListItem *)arg2;
- (void)_webViewDidBeginNavigationGesture:(WKWebView *)arg1;
- (void)_webViewDidCancelClientRedirect:(WKWebView *)arg1;
- (void)_webViewDidEndNavigationGesture:(WKWebView *)arg1 withNavigationToBackForwardListItem:(WKBackForwardListItem *)arg2;
- (void)_webViewDidRemoveNavigationGestureSnapshot:(WKWebView *)arg1;
- (void)_webViewDidRequestPasswordForQuickLookDocument:(WKWebView *)arg1;
- (void)_webViewDidStopRequestingPasswordForQuickLookDocument:(WKWebView *)arg1;
- (void)_webViewWebProcessDidBecomeResponsive:(WKWebView *)arg1;
- (void)_webViewWebProcessDidBecomeUnresponsive:(WKWebView *)arg1;
- (void)_webViewWebProcessDidCrash:(WKWebView *)arg1;
- (void)_webViewWillEndNavigationGesture:(WKWebView *)arg1 withNavigationToBackForwardListItem:(WKBackForwardListItem *)arg2;

@end
