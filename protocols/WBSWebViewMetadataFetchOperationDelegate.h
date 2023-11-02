
@protocol WBSWebViewMetadataFetchOperationDelegate <NSObject>

@required

- (void)webViewMetadataFetchOperation:(WBSWebViewMetadataFetchOperation *)arg1 didFinishUsingWebView:(WKWebView *)arg2;
- (void)webViewMetadataFetchOperation:(void *)arg1 getWebViewOfSize:(void *)arg2 withConfiguration:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: WBSWebViewMetadataFetchOperation *, struct CGSize { double x1; double x2; }, WKWebViewConfiguration *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WKWebView *, void*

@end
