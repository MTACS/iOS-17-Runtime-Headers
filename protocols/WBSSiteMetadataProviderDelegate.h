
@protocol WBSSiteMetadataProviderDelegate <NSObject>

@required

- (void)siteMetadataProvider:(id <WBSSiteMetadataProvider>)arg1 cancelRequestsWithTokens:(id <NSFastEnumeration>)arg2;
- (void)siteMetadataProvider:(id <WBSSiteMetadataProvider>)arg1 didFinishUsingWebView:(WKWebView *)arg2;
- (void)siteMetadataProvider:(void *)arg1 didReceiveResponse:(void *)arg2 forRequest:(void *)arg3 beginOperationUsingBlock:(void *)arg4; // needs 4 arg types, found 8: <WBSSiteMetadataProvider> *, WBSSiteMetadataResponse *, WBSSiteMetadataRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, NSOperation *, id /* block */, void*
- (void)siteMetadataProvider:(id <WBSSiteMetadataProvider>)arg1 didReceiveResponse:(WBSSiteMetadataResponse *)arg2 ofType:(long long)arg3 didReceiveNewData:(bool)arg4 forRequest:(WBSSiteMetadataRequest *)arg5;
- (void)siteMetadataProvider:(void *)arg1 getWebViewOfSize:(void *)arg2 withConfiguration:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: <WBSSiteMetadataProvider> *, struct CGSize { double x1; double x2; }, WKWebViewConfiguration *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WKWebView *, void*
- (id)siteMetadataProvider:(void *)arg1 registerOneTimeRequest:(void *)arg2 priority:(void *)arg3 responseHandler:(void *)arg4; // needs 4 arg types, found 9: <WBSSiteMetadataProvider> *, WBSSiteMetadataRequest *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WBSSiteMetadataResponse *, void*
- (id)siteMetadataProvider:(void *)arg1 registerRequest:(void *)arg2 priority:(void *)arg3 responseHandler:(void *)arg4; // needs 4 arg types, found 9: <WBSSiteMetadataProvider> *, WBSSiteMetadataRequest *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WBSSiteMetadataResponse *, void*

@end
